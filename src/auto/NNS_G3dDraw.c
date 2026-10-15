#include "engine.h"
#include "m2c.h"

void MIi_CpuClear32(M2C_UNK, M2C_UNK, M2C_UNK);
void G3dDrawInternal_(M2C_UNK, M2C_UNK);
void func_02029988(M2C_UNK, M2C_UNK);

extern s32 NNS_G3dRS;

void NNS_G3dDraw(s32 arg0) {
    u8 sp0[392];
    s32 temp_r1;
    s32 temp_r1_2;
    s32 temp_r1_3;

    if ((M2C_FIELD(arg0, s32 *, 0) & 0x10) == 0x10) {
        MIi_CpuClear32(0, arg0 + 0x3C, 8);
        MIi_CpuClear32(0, arg0 + 0x44, 8);
        MIi_CpuClear32(0, arg0 + 0x4C, 8);
        temp_r1 = M2C_FIELD(arg0, s32 *, 8);
        if (temp_r1 != 0) {
            func_02029988(arg0 + 0x3C, temp_r1);
        }
        temp_r1_2 = M2C_FIELD(arg0, s32 *, 0x10);
        if (temp_r1_2 != 0) {
            func_02029988(arg0 + 0x44, temp_r1_2);
        }
        temp_r1_3 = M2C_FIELD(arg0, s32 *, 0x18);
        if (temp_r1_3 != 0) {
            func_02029988(arg0 + 0x4C, temp_r1_3);
        }
        M2C_FIELD(arg0, s32 *, 0) = (s32) (M2C_FIELD(arg0, s32 *, 0) & ~0x10);
    }
    if (NNS_G3dRS != 0) {
        G3dDrawInternal_(NNS_G3dRS, arg0);
        return;
    }
    NNS_G3dRS = (s32) sp0;
    G3dDrawInternal_((s32) sp0, arg0);
    NNS_G3dRS = 0;
}
