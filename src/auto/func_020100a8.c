#include "m2c.h"

M2C_UNK OS_SpinWait(s32);                         /* extern */
s32 func_0200f7e4(M2C_UNK, M2C_UNK);                /* extern */
s32 PM_SetLCDPower(M2C_UNK);                         /* extern */
s32 PM_GetLCDPower();                                /* extern */

void func_020100a8(void) {
    OS_SpinWait(0x360000);
    if (PM_GetLCDPower() == 1) {
        return;
    }
    if (func_0200f7e4(2, 0) != 0) {
        do {
            OS_SpinWait(0xA3A47);
        } while (func_0200f7e4(2, 0) != 0);
    }
    if (PM_SetLCDPower(1) != 0) {
        return;
    }
    do {
        OS_SpinWait(0xA);
    } while (PM_SetLCDPower(1) == 0);
}
