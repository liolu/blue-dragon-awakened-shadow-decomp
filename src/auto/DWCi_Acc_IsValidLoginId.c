#include "m2c.h"

s32 DWCi_Acc_GetFlag_DataType();                                /* extern */

s32 DWCi_Acc_IsValidLoginId(void) {
    if (DWCi_Acc_GetFlag_DataType() == 1) {
        return 1;
    }
    return 0;
}
