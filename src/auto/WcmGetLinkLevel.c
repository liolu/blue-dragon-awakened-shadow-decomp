#include "m2c.h"

u32 WCMi_GetRssiAverage();                                /* extern */

s32 WcmGetLinkLevel(void) {
    s32 var_r1;
    u32 temp_r0;

    temp_r0 = WCMi_GetRssiAverage();
    var_r1  = 0;
    if (temp_r0 >= 0x1CU) {
        var_r1 = 3;
    } else if (temp_r0 >= 0x16U) {
        var_r1 = 2;
    } else if (temp_r0 >= 0x10U) {
        var_r1 = 1;
    }
    return var_r1;
}
