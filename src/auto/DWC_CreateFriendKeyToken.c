#include "m2c.h"

M2C_UNK MI_CpuFill8(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK DWCi_Acc_SetFriendKey(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK DWCi_Acc_SetFlag_DataType(M2C_UNK, M2C_UNK);            /* extern */

void DWC_CreateFriendKeyToken(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2) {
    MI_CpuFill8(arg0, 0, 0xC);
    DWCi_Acc_SetFriendKey(arg0, arg1, arg2);
    DWCi_Acc_SetFlag_DataType(arg0, 2);
}
