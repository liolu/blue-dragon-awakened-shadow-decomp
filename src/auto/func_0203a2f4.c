#include "m2c.h"
#include "engine.h"

M2C_UNK func_0203beb4(M2C_UNK);

s32 func_0203a2f4(s32 arg0) {
    s32 temp_r4;

    temp_r4 = func_0203beb4(M2C_FIELD(arg0, u8 *, 3) * 4);
    return temp_r4 + func_0203beb4((s32) M2C_FIELD(arg0, u16 *, 0));
}
