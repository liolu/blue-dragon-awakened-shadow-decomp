#include "m2c.h"

s32 DWCi_Acc_GetFlags();                                /* extern */
M2C_UNK DWCi_Acc_SetFlags(M2C_UNK, s32);                /* extern */

void func_0204801c(M2C_UNK arg0, s32 arg1) {
    s32 var_r1;

    if (arg1 != 0) {
        var_r1 = DWCi_Acc_GetFlags() | 0x10;
    } else {
        var_r1 = DWCi_Acc_GetFlags() & ~0x10;
    }
    DWCi_Acc_SetFlags(arg0, var_r1);
}
