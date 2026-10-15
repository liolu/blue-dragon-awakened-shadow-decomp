#include "engine.h"
#include "m2c.h"

void MIi_CpuCopy32(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_02059234(void);

void func_020558f0(s32 arg0, s32 arg1) {
    u32 temp_r4;

    temp_r4 = *(M2C_UNK *) arg1 + 2;
    if (temp_r4 > 2U) {
        MIi_CpuCopy32(arg1 + 4, func_02059234() + 0x350, (temp_r4 - 2) * 4);
    }
    M2C_FIELD((void *) func_02059234(), s32 *, 0x348) = (s32) (temp_r4 - 1);
    M2C_FIELD((void *) func_02059234(), s32 *, 0x34C) = arg0;
}
