/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* func_0207364c from https://github.com/GoldieLeGenie/DQIV-DECOMP libs/NitroSystem/src/snd/snd_player_init.c (license: none),
 * reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned short u16;
typedef unsigned char u8;
typedef int s32;
typedef short s16;
typedef s32 BOOL;
typedef struct {
    void *prevObject;
    void *nextObject;
} UnkFndLink;
typedef struct {
    void *headObject;
    void *tailObject;
    u16 numObjects;
    u16 offset;
} UnkFndList;
typedef struct {
    u8 unk_00[0x10];
} UnkSndFader;
typedef struct {
    u8 unk_00[0x20];
    u8 volume;
} UnkSndPlayerGroup;
typedef struct UnkSndSeqPlayer {
    struct UnkSndHandle *handle;
    UnkSndPlayerGroup *player;
    u8 unk_08[0x14 - 0x08];
    UnkFndLink prioLink;
    UnkSndFader fader;
    u8 status;
    u8 startedFlag;
    u8 unk_2e;
    u8 updateFlag;
    u32 commandTag;
    u16 seqType;
    u16 unk_36;
    u16 seqNo;
    u16 seqArcIndex;
    u8 playerNo;
    u8 unk_3d;
    s16 extVolume;
    u8 initVolume;
    u8 volume;
    u8 unk_42[2];
} UnkSndSeqPlayer;
typedef struct UnkSndHandle {
    UnkSndSeqPlayer *volatile player;
} UnkSndHandle;
extern UnkFndList sPrioList;
extern const s16 SNDi_DecibelTable[];
extern void *NNS_FndGetNextListObject(UnkFndList *list, void *object);
extern u32 SND_GetPlayerStatus(void);
extern BOOL SND_IsFinishedCommandTag(u32 tag);
extern void ShutdownPlayer(UnkSndSeqPlayer *player);
extern void NNSi_SndFaderUpdate(UnkSndFader *fader);
extern int NNSi_SndFaderGet(UnkSndFader *fader);
extern BOOL NNSi_SndFaderIsFinished(UnkSndFader *fader);
extern void SND_SetPlayerVolume(u32 playerNo, int volume);
extern void ForceStopSeq(UnkSndSeqPlayer *player);
extern void SND_StartPreparedSeq(u32 playerNo);
void NNSi_SndPlayerMain(void) {
    u32 status              = SND_GetPlayerStatus();
    UnkSndSeqPlayer *player = NNS_FndGetNextListObject(&sPrioList, 0);
    UnkSndSeqPlayer *next;
    int volume;
    int seqVol, initVol, groupVol;

    while (player != 0) {
        next = NNS_FndGetNextListObject(&sPrioList, player);

        if (!player->startedFlag) {
            if (SND_IsFinishedCommandTag(player->commandTag)) {
                player->startedFlag = 1;
            }
        }

        if (player->startedFlag && !(status & (1 << player->playerNo))) {
            ShutdownPlayer(player);
        } else {
            NNSi_SndFaderUpdate(&player->fader);
            seqVol   = SNDi_DecibelTable[player->volume];
            initVol  = SNDi_DecibelTable[player->initVolume];
            groupVol = SNDi_DecibelTable[player->player->volume];
            volume   = SNDi_DecibelTable[NNSi_SndFaderGet(&player->fader) >> 8];
            volume += initVol + seqVol + groupVol;
            if (volume < -0x8000) {
                volume = -0x8000;
            } else if (volume > 0x7fff) {
                volume = 0x7fff;
            }
            if (volume != player->extVolume) {
                SND_SetPlayerVolume(player->playerNo, volume);
                player->extVolume = volume;
            }
            if (player->status == 2 && NNSi_SndFaderIsFinished(&player->fader)) {
                ForceStopSeq(player);
            }
            if (player->updateFlag) {
                SND_StartPreparedSeq(player->playerNo);
                player->updateFlag = 0;
            }
        }
        player = next;
    }
}
