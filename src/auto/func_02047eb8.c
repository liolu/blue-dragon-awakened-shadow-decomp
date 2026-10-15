#include "m2c.h"

s32 DWC_IsBuddyFriendData();                                /* extern */
s32 func_02047f20(M2C_UNK);                         /* extern */

s32 func_02047eb8(M2C_UNK arg0) {
    if ((DWC_IsBuddyFriendData() != 0) && (func_02047f20(arg0) != 0)) {
        return 1;
    }
    return 0;
}
