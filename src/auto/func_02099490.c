#include "m2c.h"

s32 func_02099290();                                /* extern */
extern M2C_UNK data_ov000_021e8c24;

M2C_UNK *func_02099490(s32 arg0) {
    s32 temp_r0;

    temp_r0 = func_02099290();
    if (temp_r0 < 0) {
        return &data_ov000_021e8c24;
    }
    return (M2C_UNK *) ((0x2C * temp_r0) + (arg0 + 0x20));
}
