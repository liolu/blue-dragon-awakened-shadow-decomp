#include "m2c.h"

s32 func_020a3238();                                /* extern */

s32 func_020a328c(s32 arg0) {
    s32 temp_r0;

    temp_r0 = func_020a3238();
    if (temp_r0 < 0) {
        return 0;
    }
    return (0x1C * temp_r0) + arg0;
}
