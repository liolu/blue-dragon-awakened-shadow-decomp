/* compiler: 2.0/sp1p5 -O4,p -lang c99 -ipa file -inline on,noauto */
/* OS_CancelAlarm from https://github.com/Yokimitsuro/khdays-decomp libs/nitro/os/calls/OS_CancelAlarm.c (license: CC0-1.0),
 * reused by tools/donor_match.py */
extern int OS_DisableInterrupts(void);
extern void OS_RestoreInterrupts(int state);
extern void OSi_SetTimer(void *alarm);
extern char OSi_UseAlarm;
void OS_CancelAlarm(char *alarm) {
    int enabled = OS_DisableInterrupts();
    char *next;
    char *prev;
    if (*(int *) alarm == 0) {
        OS_RestoreInterrupts(enabled);
        return;
    }
    next = *(char **) (alarm + 0x18);
    if (next == 0) {
        *(char **) ((char *) &OSi_UseAlarm + 8) = *(char **) (alarm + 0x14);
    } else {
        *(char **) (next + 0x14) = *(char **) (alarm + 0x14);
    }
    prev = *(char **) (alarm + 0x14);
    if (prev != 0) {
        *(char **) (prev + 0x18) = next;
    } else {
        *(char **) ((char *) &OSi_UseAlarm + 4) = next;
        if (next != 0) {
            OSi_SetTimer(next);
        }
    }
    *(int *) alarm          = 0;
    *(int *) (alarm + 0x1c) = 0;
    *(int *) (alarm + 0x20) = 0;
    OS_RestoreInterrupts(enabled);
}
