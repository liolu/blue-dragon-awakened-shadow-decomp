#include "m2c.h"

s32 DWCi_Acc_IsValidLoginId(s32);                             /* extern */

s32 DWC_CheckHasProfile(void *arg0) {
    if ((DWCi_Acc_IsValidLoginId(arg0 + 0x10) != 0) && ((s32) M2C_FIELD(arg0, s32 *, 0x1C) > 0)) {
        return 1;
    }
    return 0;
}
