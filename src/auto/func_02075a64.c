#include "m2c.h"
#include "engine.h"

void func_020745dc(M2C_UNK, M2C_UNK);

void func_02075a64(s32 arg0, s32 arg1) {
    s32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0x7D8);
    if (temp_r1 == 0) {
        func_020745dc(arg1, 0);
    } else {
        func_020745dc(arg1, temp_r1);
    }
    M2C_FIELD(arg0, s32 *, 0x7D8) = arg1;
}
