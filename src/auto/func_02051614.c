#include "m2c.h"
#include "engine.h"

M2C_UNK func_02009978(M2C_UNK, M2C_UNK, M2C_UNK);
void func_020535e4(M2C_UNK);
void func_02057794(void);
void func_02059224(M2C_UNK);
M2C_UNK func_02059234(void);
void func_02059244(M2C_UNK);

extern M2C_UNK data_0210e8e0;

void func_02051614(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7) {
    void *temp_r0;

    func_02059224(arg0);
    *(s32 *) func_02059234() = arg1;
    M2C_FIELD((void *) func_02059234(), s32 *, 4) = arg2;
    M2C_FIELD((void *) func_02059234(), s32 *, 8) = arg3;
    M2C_FIELD((void *) func_02059234(), s32 *, 0x10) = 0;
    M2C_FIELD((void *) func_02059234(), s32 *, 0x1C) = 0;
    M2C_FIELD((void *) func_02059234(), s16 *, 0x1A) = 0;
    M2C_FIELD((void *) func_02059234(), s32 *, 0xE4) = 0;
    func_02059244(0);
    M2C_FIELD((void *) func_02059234(), s8 *, 0xF) = 0;
    M2C_FIELD((void *) func_02059234(), s8 *, 0x19) = 0;
    M2C_FIELD((void *) func_02059234(), s8 *, 0x1AF) = 0;
    M2C_FIELD((void *) func_02059234(), s16 *, 0x1B6) = 0;
    M2C_FIELD((void *) func_02059234(), s32 *, 0x1DC) = 0;
    M2C_FIELD((void *) func_02059234(), s32 *, 0x200) = 0;
    M2C_FIELD((void *) func_02059234(), s32 *, 0x2F4) = arg4;
    M2C_FIELD((void *) func_02059234(), s32 *, 0x2F8) = arg5;
    M2C_FIELD((void *) func_02059234(), s32 *, 0x2FC) = arg6;
    M2C_FIELD((void *) func_02059234(), s32 *, 0x300) = arg7;
    func_02009978(func_02059234() + 0x304, 0, 0x40);
    M2C_FIELD((void *) func_02059234(), s32 *, 0x344) = 0;
    M2C_FIELD((void *) func_02059234(), s32 *, 0x464) = 0;
    M2C_FIELD((void *) func_02059234(), s32 *, 0x468) = 0;
    M2C_FIELD((void *) func_02059234(), s32 *, 0x474) = 0;
    M2C_FIELD((void *) func_02059234(), s32 *, 0x478) = 0;
    M2C_FIELD((void *) func_02059234(), s32 *, 0x47C) = 0;
    M2C_FIELD((void *) func_02059234(), s32 *, 0x480) = 0;
    temp_r0 = (void *) func_02059234();
    M2C_FIELD(temp_r0, s32 *, 0x174) = 0;
    M2C_FIELD(temp_r0, s32 *, 0x178) = 0;
    func_02057794();
    M2C_FIELD(&data_0210e8e0, s8 *, 0x1C) = 0;
    M2C_FIELD(&data_0210e8e0, s8 *, 0x1D) = 0;
    M2C_FIELD(&data_0210e8e0, s16 *, 0x1E) = 0;
    func_020535e4(0);
}
