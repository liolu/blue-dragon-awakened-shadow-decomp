#include "m2c.h"
#include "engine.h"

M2C_UNK func_02024d70(M2C_UNK, M2C_UNK);

s32 func_02034ef4(s32 arg0) {
    s32 temp_r1;
    s32 temp_r2;
    s32 temp_r4;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0xC);
    temp_r2 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_r2 >= temp_r1) {
        return M2C_FIELD(arg0, s32 *, 4);
    }
    temp_r4 = M2C_FIELD(arg0, s32 *, 0);
    return temp_r4 + func_02024d70(temp_r2 * (M2C_FIELD(arg0, s32 *, 4) - temp_r4), temp_r1);
}
