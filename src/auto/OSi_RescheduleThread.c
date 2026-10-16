/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* OSi_RescheduleThread from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/os/calls/OSi_RescheduleThread.c (license:
 * CC0-1.0), reused by tools/donor_match.py */
typedef int BOOL;
typedef struct OSContext {
    char dummy[1];
} OSContext;
typedef void (*OSSwitchThreadCallback)(void *from, void *to);
extern BOOL OS_SaveContext(OSContext *context);
extern void OS_LoadContext(OSContext *context);
extern int OS_GetProcMode(void);
extern void *OS_SelectThread(void);
struct Globals {
    OSSwitchThreadCallback systemCallback;
    unsigned int rescheduleCount;
    void ***currentThreadPtr;
    char _pad[0x18];
    unsigned short isNeedRescheduling;
    unsigned short irqDepth;
    void *currentThread;
    void *list;
    OSSwitchThreadCallback switchCallback;
};
struct ThreadInfo2 {
    unsigned short isNeedRescheduling;
    unsigned short irqDepth;
    void *currentThread;
    void *list;
    OSSwitchThreadCallback switchCallback;
};
extern struct ThreadInfo2 OSi_ThreadInfo;
extern struct Globals OSi_SystemCallbackInSwitchThread;
void OSi_RescheduleThread(void) {
    struct ThreadInfo2 *info;
    void **curPtr;
    void *cur;
    void *next;
    OSSwitchThreadCallback cb;

    if (OSi_SystemCallbackInSwitchThread.rescheduleCount != 0) {
        return;
    }

    info = &OSi_ThreadInfo;
    if (OSi_SystemCallbackInSwitchThread.irqDepth != 0 || OS_GetProcMode() == 0x12) {
        info->isNeedRescheduling = 1;
        return;
    }

    curPtr = (void **) OSi_SystemCallbackInSwitchThread.currentThreadPtr;
    cur    = *curPtr;
    next   = OS_SelectThread();

    if (cur == next || next == 0) {
        return;
    }

    if (*(int *) ((char *) cur + 0x64) != 2) {
        if (OS_SaveContext((OSContext *) cur)) {
            return;
        }
    }

    cb = OSi_SystemCallbackInSwitchThread.systemCallback;
    if (cb != 0) {
        cb(cur, next);
    }

    cb = info->switchCallback;
    if (cb != 0) {
        cb(cur, next);
    }

    OSi_SystemCallbackInSwitchThread.currentThread = next;
    OS_LoadContext((OSContext *) next);
}
