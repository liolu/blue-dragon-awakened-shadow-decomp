#include "m2c.h"

s32 DWCi_Acc_SetMaskBits(s32 *arg0, s32 arg1, s32 arg2, s32 arg3) {
    if (arg1 & ~arg3) {
        return 0;
    }
    *arg0 = (*arg0 & ~(arg3 << arg2)) | (arg1 << arg2);
    return 1;
}
