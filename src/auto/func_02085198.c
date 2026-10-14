#include "m2c.h"

s32 func_0208a680(u16);                             /* extern */
M2C_UNK func_020c0d54(s32, s32);                    /* extern */

s32 func_02085198(void *arg0) {
    s32 temp_r0;
    s32 temp_r4;

    temp_r4 = M2C_FIELD(arg0, s32 *, 4);
    temp_r0 = func_0208a680((u16) M2C_FIELD(arg0, s32 *, 0));
    if (temp_r0 != 0) {
        func_020c0d54(temp_r0, temp_r4);
    }
    return 0;
}
