#include "m2c.h"

s32 DWCi_Acc_GetFlags();                                /* extern */

s32 func_02047f20(void) {
    if ((DWCi_Acc_GetFlags() & 8) == 8) {
        return 1;
    }
    return 0;
}
