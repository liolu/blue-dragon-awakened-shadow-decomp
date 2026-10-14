#include "m2c.h"

s32 func_ov000_021bb2d4(s32);                       /* extern */
s32 func_ov000_021bb2e0(s32);                       /* extern */

s32 func_020dc078(s32 arg0) {
    if ((func_ov000_021bb2d4(arg0 + 0x18) != 0) && (func_ov000_021bb2e0(arg0 + 0x18) == 0)) {
        return 0;
    }
    return 1;
}
