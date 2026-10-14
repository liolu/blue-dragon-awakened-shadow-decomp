#include "m2c.h"

s32 func_020adbe0();                                /* extern */
s32 func_ov000_021c0650(M2C_UNK *, s32, M2C_UNK);   /* extern */
M2C_UNK func_ov000_021c0ba4(M2C_UNK *, s32, s32);   /* extern */
extern M2C_UNK data_ov000_021f4d24;

s32 func_020adc20(s32 arg0, s32 arg1) {
    s32 temp_r0;

    temp_r0 = func_ov000_021c0650(&data_ov000_021f4d24, func_020adbe0(), 0);
    func_ov000_021c0ba4(&data_ov000_021f4d24, temp_r0, arg1 + 0x318);
    return temp_r0;
}
