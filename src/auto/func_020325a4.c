#include "m2c.h"
#include "engine.h"

M2C_UNK func_020273f0(M2C_UNK, M2C_UNK);
void func_020321cc(M2C_UNK);
void func_020327a8(M2C_UNK, M2C_UNK);
void func_0203284c(M2C_UNK);
M2C_UNK func_02032884(M2C_UNK);

extern M2C_UNK data_0210b224;

s32 func_020325a4(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r6;

    temp_r6 = (arg1 * 0x24) + (s32) &data_0210b224;
    if (*(M2C_UNK *)arg0 != 0) {
        func_020321cc(arg0);
    }
    if ((u32) M2C_FIELD(temp_r6, u16 *, 8) >= (u32) M2C_FIELD(temp_r6, u32 *, 0x18)) {
        temp_r0_2 = func_020273f0(temp_r6, 0);
        if (temp_r0_2 == 0) {
            return 0;
        }
        if (arg2 < (s32) M2C_FIELD(temp_r0_2, u8 *, 0x3D)) {
            return 0;
        }
        func_0203284c(temp_r0_2);
        goto block_8;
    }
block_8:
    temp_r0 = func_02032884(arg2);
    if (temp_r0 == 0) {
        return 0;
    }
    func_020327a8(temp_r6, temp_r0);
    *(M2C_UNK *)temp_r0 = arg0;
    *(M2C_UNK *)arg0 = temp_r0;
    return temp_r0;
}
