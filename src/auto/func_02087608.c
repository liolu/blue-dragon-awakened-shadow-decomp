#include "m2c.h"

M2C_UNK func_ov000_021bf8fc();    /* extern */
extern M2C_UNK data_ov000_021f4950;

s32 func_02087608(s32 *arg0) {
    s32 temp_r4;
    u8 var_r1;

    temp_r4 = *arg0;
    if (temp_r4 != 0) {
        func_ov000_021bf8fc(&data_ov000_021f4950, 1);
        var_r1 = (u8) temp_r4;
        if ((u32) var_r1 > 0x10U) {
            var_r1 = 0x10;
        }
        M2C_FIELD(&data_ov000_021f4950, u8 *, 0x4B) = var_r1;
    } else {
        M2C_FIELD(&data_ov000_021f4950, u8 *, 0x4B) = 0U;
        func_ov000_021bf8fc();
    }
    return 0;
}
