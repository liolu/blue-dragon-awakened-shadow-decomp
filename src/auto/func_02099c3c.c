#include "m2c.h"

s32 func_02099b94();                                /* extern */
extern M2C_UNK data_ov000_021e8c30;

M2C_UNK *func_02099c3c(s32 arg0) {
    s32 temp_r0;

    temp_r0 = func_02099b94();
    if (temp_r0 < 0) {
        return &data_ov000_021e8c30;
    }
    return (M2C_UNK *) ((0x38 * temp_r0) + (arg0 + 8));
}
