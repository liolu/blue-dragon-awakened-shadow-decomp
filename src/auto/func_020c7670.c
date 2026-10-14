#include "m2c.h"

s32 func_020bec48(s32);                             /* extern */
s32 func_020bec54(s32);                             /* extern */
s32 func_020c59a8(void *);                          /* extern */
M2C_UNK func_020c7514(void *, M2C_UNK);             /* extern */
s32 func_ov000_021bec20(M2C_UNK *);                 /* extern */
extern M2C_UNK data_ov000_021f4924;

void func_020c7670(void *arg0) {
    s32 temp_r0;
    s32 temp_r4;

    if (M2C_FIELD(arg0, s32 *, 0x130) != 3) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x10C) = (s32) (M2C_FIELD(arg0, s32 *, 0x10C) - func_ov000_021bec20(&data_ov000_021f4924));
    temp_r4 = func_020bec48(M2C_FIELD(arg0, s32 *, 8));
    temp_r0 = func_020bec54(M2C_FIELD(arg0, s32 *, 8));
    if ((temp_r4 != 0xD) && (temp_r0 != 0xD)) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0x10C) > 0) {
            return;
        }
        if (func_020c59a8(arg0) != 0) {
            return;
        }
        M2C_FIELD(arg0, s32 *, 0x114) = 0;
        func_020c7514(arg0, 0x12C);
    }
}
