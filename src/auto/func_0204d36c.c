#include "m2c.h"

s32 WCM_GetPhase();                                /* extern */
u32 func_020445d4();                                /* extern */
M2C_UNK DWCi_SetError(M2C_UNK, s32);                /* extern */
M2C_UNK func_0204cef4();                            /* extern */
s32 DWCi_CheckDisconnected();                                /* extern */

s32 func_0204d36c(void) {
    u32 var_r4;

    func_0204cef4();
    if (DWCi_CheckDisconnected() != 0) {
        var_r4 = func_020445d4();
        if ((var_r4 == 0xFF) || (var_r4 > 0x63U)) {
            var_r4 = 0x63;
        }
        if (WCM_GetPhase() == 0xB) {
            DWCi_SetError(9, 0xFFFF298C - var_r4);
        } else {
            DWCi_SetError(8, 0xFFFF2D10 - var_r4);
        }
        return 1;
    }
    return 0;
}
