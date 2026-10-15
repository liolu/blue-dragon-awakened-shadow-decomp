#include "m2c.h"

M2C_UNK DWCi_Acc_SetMaskBits(M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */

void DWCi_Acc_SetFlags(M2C_UNK arg0, M2C_UNK arg1) {
    DWCi_Acc_SetMaskBits(arg0, arg1, 0xB, 0x1FFFFF);
}
