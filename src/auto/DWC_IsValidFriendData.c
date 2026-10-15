#include "m2c.h"

s32 DWCi_Acc_GetFlag_DataType();                                /* extern */

s32 DWC_IsValidFriendData(void) {
    if (DWCi_Acc_GetFlag_DataType() != 0) {
        return 1;
    }
    return 0;
}
