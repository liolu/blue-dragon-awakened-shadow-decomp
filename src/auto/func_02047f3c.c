#include "m2c.h"

s32 DWCi_Acc_GetFlags();                                /* extern */

s32 func_02047f3c(void) {
    if ((DWCi_Acc_GetFlags() & 0x20) == 0x20) {
        return 1;
    }
    return 0;
}
