#include "m2c.h"

s32 DWCi_Acc_GetFlags(M2C_UNK);                         /* extern */
s32 DWCi_Acc_GetFlag_DataType();                                /* extern */

s32 DWC_IsBuddyFriendData(M2C_UNK arg0) {
    s32 var_r0;

    if (DWCi_Acc_GetFlag_DataType() == 3) {
        if ((DWCi_Acc_GetFlags(arg0) & 4) == 4) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        return var_r0;
    }
    return 0;
}
