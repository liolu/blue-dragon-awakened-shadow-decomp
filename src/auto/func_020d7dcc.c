#include "m2c.h"

s32 func_020d7dc4();                                /* extern */

s32 func_020d7dcc(void *arg0) {
    s16 temp_ip;
    s32 temp_r0;
    void *temp_r3;

    temp_r0                   = func_020d7dc4();
    M2C_FIELD(arg0, s32 *, 4) = 0;
    temp_r3                   = arg0 + 0x28 + (temp_r0 << 5);
    temp_ip                   = M2C_FIELD(temp_r3, s16 *, 0x1C);
    if (((s32) temp_ip > -1) && (M2C_FIELD(temp_r3, s16 *, 0x1E) == -1)) {
        M2C_FIELD(arg0, s32 *, 4) = 5;
    } else if (((s32) temp_ip > -1) && ((s32) M2C_FIELD(temp_r3, s16 *, 0x1E) > -1)) {
        M2C_FIELD(arg0, s32 *, 4) = 6;
    }
    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        return 1;
    }
    return 0;
}
