#include "engine.h"
#include "m2c.h"

s32 PM_SendUtilityCommand(M2C_UNK, M2C_UNK, M2C_UNK);
s32 PM_GetLCDPower(void);

s32 PMi_SetAmp(s32 arg0) {
    if (PM_GetLCDPower() == 0) {
        return 0;
    }
    return PM_SendUtilityCommand(0x10, (s32) (u16) arg0, 0);
}
