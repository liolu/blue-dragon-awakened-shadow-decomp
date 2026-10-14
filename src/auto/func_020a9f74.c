#include "m2c.h"

s32 func_ov000_021d2228();                          /* extern */

s16 func_020a9f74(s32 arg0) {
    s32 temp_r0;

    if ((arg0 < 0) || (arg0 >= 3)) {
        return -1;
    }
    if (func_ov000_021d2228() == 0) {
        return -1;
    }
    temp_r0 = func_ov000_021d2228();
    if ((u32) arg0 < 3U) {
        return M2C_FIELD((temp_r0 + (arg0 * 2)), s16 *, 0x50);
    }
    return -1;
}
