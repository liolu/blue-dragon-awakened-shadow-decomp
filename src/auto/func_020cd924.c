#include "m2c.h"

M2C_UNK func_ov000_021be2ac(M2C_UNK *, M2C_UNK *, s32, s8); /* extern */
extern M2C_UNK data_0210129c;
extern M2C_UNK data_0216711c;

M2C_UNK *func_020cd924(void *arg0) {
    s32 temp_r2;

    if (M2C_FIELD(arg0, s32 *, 0x130) == 3) {
        temp_r2 = M2C_FIELD(arg0, s32 *, 0x114);
        if (temp_r2 > 0) {
            func_ov000_021be2ac(&data_0216711c, &data_0210129c, temp_r2, M2C_FIELD(arg0, s8 *, 0x11C));
            return &data_0216711c;
        }
    }
    return NULL;
}
