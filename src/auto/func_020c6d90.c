#include "m2c.h"

s32 func_020ab144(void *, s32, s32);                /* extern */

s32 func_020c6d90(void *arg0, void *arg1) {
    s32 temp_r0;
    void *temp_r2;
    void *temp_r3;

    temp_r3 = M2C_FIELD(arg0, void **, 0x10);
    if (temp_r3 == NULL) {
        return 0;
    }
    temp_r0 = func_020ab144(arg1, temp_r3 + 0x330, M2C_FIELD(arg0, s32 *, 0x128));
    temp_r2 = M2C_FIELD(arg0, void **, 0x10);
    M2C_FIELD(temp_r2, s32 *, 0x318) = (s32) M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(temp_r2, s32 *, 0x31C) = (s32) M2C_FIELD(arg1, s32 *, 4);
    M2C_FIELD(temp_r2, s32 *, 0x320) = (s32) M2C_FIELD(arg1, s32 *, 8);
    return temp_r0;
}
