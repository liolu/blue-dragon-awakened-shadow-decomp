/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* OS_Sleep from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/os/calls/OS_Sleep.c (license: CC0-1.0), reused by
 * tools/donor_match.py */
typedef unsigned long u32;
typedef unsigned long long u64;
typedef u64 OSTick;
typedef struct OSAlarm OSAlarm;
typedef void (*OSAlarmHandler)(void *arg);
extern void OS_CreateAlarm(OSAlarm *alarm);
extern void OS_SetAlarm(OSAlarm *alarm, OSTick fire_tick, OSAlarmHandler handler, void *arg);
extern int OS_DisableInterrupts(void);
extern void OS_RestoreInterrupts(int mask);
extern void OS_SleepThread(void *arg);
extern void OSi_SleepAlarmCallback(void *arg);
extern void **OSi_SystemCallbackInSwitchThread[];
void OS_Sleep(u32 arg0) {
    char alarm[0x2c];
    void *thread;
    int mask;

    OS_CreateAlarm((OSAlarm *) alarm);
    thread                              = OSi_SystemCallbackInSwitchThread[2][0];
    mask                                = OS_DisableInterrupts();
    *(void **) ((char *) thread + 0xb0) = alarm;
    OS_SetAlarm((OSAlarm *) alarm, (u64) arg0 * 0x82eaULL >> 6, OSi_SleepAlarmCallback, &thread);
    while (thread != 0) {
        OS_SleepThread(0);
    }
    OS_RestoreInterrupts(mask);
}
