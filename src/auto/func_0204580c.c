#include "m2c.h"

s32 WCM_GetPhase(void);
s32 WCM_Finish(void);
void WCM_CleanupAsync(void);
void WCM_EndSearchAsync(void);
void WCM_DisconnectAsync(void);
void WCM_TerminateAsync(void);
void func_02044a7c(s32);

s32 func_0204580c(void) {
    switch (WCM_GetPhase()) {
        case 0:
            return 1;
        case 1:
            WCM_Finish();
            break;
        case 3:
            WCM_CleanupAsync();
            break;
        case 6:
            WCM_EndSearchAsync();
            break;
        case 9:
            WCM_DisconnectAsync();
            break;
        case 12:
            WCM_TerminateAsync();
            break;
        case 11:
            func_02044a7c(0);
            return -1;
    }
    return 0;
}
