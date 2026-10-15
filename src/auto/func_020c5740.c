#include "engine.h"
#include "m2c.h"

M2C_UNK _s32_div_f(M2C_UNK, M2C_UNK);
M2C_UNK func_020bcca8(M2C_UNK);

s32 func_020c5740(s32 arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0x18);
    if (temp_r0 == 0) {
        return 0;
    }
    return (s32) (u8) _s32_div_f(M2C_FIELD(arg0, s32 *, 0x104) * 0x64, func_020bcca8(temp_r0));
}
