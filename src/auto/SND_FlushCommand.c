/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* SND_FlushCommand from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/snd/calls/SND_FlushCommand.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
typedef struct SNDCommand {
    struct SNDCommand *next;
    unsigned int id;
    unsigned int arg[4];
} SNDCommand;
typedef struct SNDCommandMgr {
    SNDCommand *freeHead;
    unsigned int processedTag;
    SNDCommand *reservedHead;
    SNDCommand *reservedTail;
    SNDCommand *freeTail;
    unsigned int unk14;
    int sentRingIndex;
    int sentBlockCount;
    unsigned int nextTag;
} SNDCommandMgr;
extern SNDCommandMgr sFreeList;
extern SNDCommand *sWaitingCommandListQueue[8];
extern SNDCommand sCommandArray[0x100];
extern int OS_DisableInterrupts(void);
extern void OS_RestoreInterrupts(int state);
extern void DC_FlushRange(void *address, unsigned int size);
extern SNDCommand *SND_RecvCommandReply(int block);
extern int PXI_SendWordByFifo(int channel, unsigned int data, int err);
extern void RequestCommandProc(void);
int SND_FlushCommand(unsigned int flags) {
    int state = OS_DisableInterrupts();

    if (sFreeList.reservedHead == 0) {
        OS_RestoreInterrupts(state);
        return 1;
    }

    if (sFreeList.sentBlockCount >= 8) {
        if ((flags & 1) == 0) {
            OS_RestoreInterrupts(state);
            return 0;
        }
        do {
            SND_RecvCommandReply(1);
        } while (sFreeList.sentBlockCount >= 8);
        if (sFreeList.reservedHead == 0) {
            OS_RestoreInterrupts(state);
            return 1;
        }
    }

    DC_FlushRange(sCommandArray, sizeof(sCommandArray));

    if (PXI_SendWordByFifo(7, (unsigned int) sFreeList.reservedHead, 0) < 0) {
        if ((flags & 1) == 0) {
            OS_RestoreInterrupts(state);
            return 0;
        }
        while (sFreeList.sentBlockCount >= 8 || PXI_SendWordByFifo(7, (unsigned int) sFreeList.reservedHead, 0) < 0) {
            OS_RestoreInterrupts(state);
            SND_RecvCommandReply(0);
            state = OS_DisableInterrupts();
            DC_FlushRange(sCommandArray, sizeof(sCommandArray));
            if (sFreeList.reservedHead == 0) {
                OS_RestoreInterrupts(state);
                return 1;
            }
        }
    }

    sWaitingCommandListQueue[sFreeList.sentRingIndex] = sFreeList.reservedHead;
    sFreeList.sentRingIndex++;
    if (sFreeList.sentRingIndex > 8) {
        sFreeList.sentRingIndex = 0;
    }
    sFreeList.reservedHead = 0;
    sFreeList.reservedTail = 0;
    sFreeList.sentBlockCount++;
    sFreeList.nextTag++;
    OS_RestoreInterrupts(state);

    if ((flags & 2) != 0) {
        RequestCommandProc();
    }
    return 1;
}
