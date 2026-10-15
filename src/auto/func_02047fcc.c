#include "m2c.h"

s32 DWCi_Acc_GetFlags();                                /* extern */
M2C_UNK DWCi_Acc_SetFlags(M2C_UNK, s32);                /* extern */

void func_02047fcc(M2C_UNK arg0) {
    DWCi_Acc_SetFlags(arg0, DWCi_Acc_GetFlags() & ~0x3C);
}
