#include "engine.h"
#include "m2c.h"

M2C_UNK func_020c53c8(M2C_UNK, M2C_UNK);
M2C_UNK func_020c56d8(M2C_UNK);
void func_020cdde0(M2C_UNK);

s32 func_020cb850(s32 arg0) {
    s16 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s16 *, 0x100);
    if ((s32) temp_r1 <= 0) {
        return 0;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x25C) > 0) {
        M2C_FIELD(arg0, s16 *, 0x100) = 0;
        return 0;
    }
    if (func_020c53c8(arg0, (s32) temp_r1) == 0) {
        return 0;
    }
    M2C_FIELD(arg0, s16 *, 0x100) = 0;
    M2C_FIELD(arg0, s16 *, 0x14C) = 0;
    M2C_FIELD(arg0, s16 *, 0x14E) = 0;
    M2C_FIELD(arg0, s8 *, 0x148)  = 0;
    M2C_FIELD(arg0, s32 *, 0x130) = 1;
    M2C_FIELD(arg0, s32 *, 0x13C) = 0;
    M2C_FIELD(arg0, s32 *, 0x110) = 0;
    M2C_FIELD(arg0, s16 *, 0x150) = 0;
    M2C_FIELD(arg0, s32 *, 0x154) = 0;
    M2C_FIELD(arg0, s32 *, 0x158) = 0;
    M2C_FIELD(arg0, s32 *, 0x138) = 0;
    M2C_FIELD(arg0, s32 *, 0x160) = func_020c56d8(arg0);
    func_020cdde0(arg0);
    M2C_FIELD(arg0, s32 *, 0x25C) = (s32) (M2C_FIELD(arg0, u8 *, 0xE0) * 0x12C);
    return 1;
}
