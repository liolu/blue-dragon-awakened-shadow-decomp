#include "m2c.h"

M2C_UNK DWCi_Acc_IsValidLoginId(s32);                         /* extern */

void DWCi_Acc_IsAuthentic(s32 arg0) {
    DWCi_Acc_IsValidLoginId(arg0 + 0x10);
}
