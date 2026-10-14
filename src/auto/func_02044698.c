#include "m2c.h"
#include "engine.h"

M2C_UNK func_02009978(M2C_UNK, M2C_UNK, M2C_UNK);
void func_02009a34(M2C_UNK, M2C_UNK, M2C_UNK);
void func_020446fc(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_020449a8(M2C_UNK);

void func_02044698(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_r4;

    temp_r4 = func_020449a8(1);
    if (arg3 != 0) {
        func_02009a34(arg3, temp_r4 + 0x18, 0xA);
    } else {
        func_02009978(temp_r4 + 0x18, 0, 0xA);
    }
    M2C_FIELD(temp_r4, s8 *, 0x22) = (s8) arg4;
    func_020446fc(arg0, arg1, arg2);
}
