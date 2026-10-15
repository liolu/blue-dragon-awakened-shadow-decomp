#include "m2c.h"

M2C_UNK DWCi_Acc_SetMaskBits(void *, M2C_UNK, M2C_UNK, s32); /* extern */

void DWCi_Acc_SetUserId(void *arg0, s32 arg1, M2C_UNK arg2) {
    DWCi_Acc_SetMaskBits(arg0, arg2, 0, 0x7FF);
    M2C_FIELD(arg0, s32 *, 4) = arg1;
}
