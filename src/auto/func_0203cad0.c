#include "m2c.h"

M2C_UNK func_02007204(s32, u32);                    /* extern */
s32 func_020072ac(s32);                             /* extern */
extern M2C_UNK data_020f8f64;
extern M2C_UNK data_021019a4;

s32 func_0203cad0(void) {
    s32 temp_r4;
    s32 temp_r5;

    if ((u32) M2C_FIELD(&data_020f8f64, u32 *, 4) >= 0x20U) {
        return -1;
    }
    temp_r5 = M2C_FIELD(&data_021019a4, s32 *, 4);
    temp_r4 = func_020072ac(temp_r5);
    func_02007204(temp_r5, M2C_FIELD(&data_020f8f64, u32 *, 4));
    return temp_r4;
}
