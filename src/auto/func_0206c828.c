#include "m2c.h"
#include "engine.h"

void func_0206f624(M2C_UNK);

s32 func_0206c828(s32 arg0, s32 arg1) {
    void *temp_r0;
    void *temp_r1;
    void *temp_r3;

    if (arg0 == 0) {
        return 1;
    }
    if (M2C_FIELD(arg0, M2C_UNK (**)(), 0x34) == NULL) {
        return 1;
    }
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) + 1);
    temp_r3 = M2C_FIELD(arg0, void **, 8);
    M2C_FIELD(temp_r3, s32 *, 0x1C) = (s32) (M2C_FIELD(temp_r3, s32 *, 0x1C) + 1);
    M2C_FIELD(arg0, M2C_UNK (**)(), 0x34)(arg0, arg1);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) (M2C_FIELD(arg0, s32 *, 0x24) - 1);
    temp_r1 = M2C_FIELD(arg0, void **, 8);
    M2C_FIELD(temp_r1, s32 *, 0x1C) = (s32) (M2C_FIELD(temp_r1, s32 *, 0x1C) - 1);
    temp_r0 = M2C_FIELD(arg0, void **, 8);
    if ((M2C_FIELD(temp_r0, s32 *, 0x14) != 0) && (M2C_FIELD(temp_r0, s32 *, 0x1C) == 0)) {
        func_0206f624((s32) temp_r0);
        return 0;
    }
    return 1;
}
