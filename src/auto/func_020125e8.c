#include "m2c.h"

M2C_UNK func_02007a2c(u16 *, M2C_UNK);              /* extern */
s32 func_020125cc();                                /* extern */
extern M2C_UNK data_02104360;

s32 func_020125e8(void) {
    s32 temp_r0;

    temp_r0 = func_020125cc();
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_02007a2c(M2C_FIELD(M2C_FIELD(&data_02104360, void **, 4), u16 **, 4), 2);
    if ((u32) *M2C_FIELD(M2C_FIELD(&data_02104360, void **, 4), u16 **, 4) <= 1U) {
        return 3;
    }
    return 0;
}
