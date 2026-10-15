#include "m2c.h"

M2C_UNK MIi_CpuClear16(M2C_UNK, s32, M2C_UNK);       /* extern */
M2C_UNK MIi_CpuClear32(M2C_UNK, s32, M2C_UNK);       /* extern */
M2C_UNK MI_CpuFill8(s32, M2C_UNK, M2C_UNK);       /* extern */
s16 func_0204d568(M2C_UNK);                         /* extern */
M2C_UNK func_0204e5e0();                            /* extern */
void *func_02059234();                              /* extern */
M2C_UNK func_02059244(M2C_UNK);                     /* extern */

void func_020535e4(s32 arg0) {
    void *temp_r0;
    void *temp_r0_2;
    void *temp_r0_3;
    void *temp_r0_4;
    void *temp_r0_5;
    void *temp_r0_6;
    void *temp_r0_7;
    void *temp_r4;
    void *temp_r5;

    M2C_FIELD(func_02059234(), s8 *, 0xC)    = 0;
    M2C_FIELD(func_02059234(), s8 *, 0x17C)  = 0;
    temp_r5                                  = func_02059234();
    M2C_FIELD(temp_r5, s16 *, 0x17E)         = func_0204d568(0x10000);
    M2C_FIELD(func_02059234(), s32 *, 0x180) = 0;
    temp_r0                                  = func_02059234();
    M2C_FIELD(temp_r0, s32 *, 0x184)         = 0;
    M2C_FIELD(temp_r0, s32 *, 0x188)         = 0;
    temp_r0_2                                = func_02059234();
    M2C_FIELD(temp_r0_2, s32 *, 0x18C)       = 0;
    M2C_FIELD(temp_r0_2, s32 *, 0x190)       = 0;
    M2C_FIELD(func_02059234(), s8 *, 0x1A4)  = 0;
    M2C_FIELD(func_02059234(), s8 *, 0x1A9)  = 0;
    M2C_FIELD(func_02059234(), s8 *, 0x1AA)  = 0;
    M2C_FIELD(func_02059234(), s8 *, 0x1AB)  = 0;
    M2C_FIELD(func_02059234(), s8 *, 0x1AC)  = 0;
    M2C_FIELD(func_02059234(), s8 *, 0x1A7)  = 0;
    M2C_FIELD(func_02059234(), s8 *, 0x1A8)  = 0;
    M2C_FIELD(func_02059234(), s16 *, 0x1B2) = 0;
    M2C_FIELD(func_02059234(), s16 *, 0x1B4) = 0;
    M2C_FIELD(func_02059234(), s32 *, 0x1B8) = 0;
    temp_r0_3                                = func_02059234();
    M2C_FIELD(temp_r0_3, s32 *, 0x1E0)       = 0;
    M2C_FIELD(temp_r0_3, s32 *, 0x1E4)       = 0;
    temp_r0_4                                = func_02059234();
    M2C_FIELD(temp_r0_4, s32 *, 0x1F0)       = 0;
    M2C_FIELD(temp_r0_4, s32 *, 0x1F4)       = 0;
    MIi_CpuClear32(0, func_02059234() + 0x3CC, 0x98);
    if (arg0 == 2) {
        temp_r4                        = func_02059234();
        M2C_FIELD(temp_r4, u8 *, 0x14) = (u8) M2C_FIELD(func_02059234(), u8 *, 0xD);
        if (M2C_FIELD(func_02059234(), u8 *, 0x15) == 3) {
            func_02059244(1);
            return;
        }
        if (M2C_FIELD(func_02059234(), u8 *, 0x15) != 2) {
            return;
        }
        func_02059244(0xA);
        return;
    }
    M2C_FIELD(func_02059234(), s8 *, 0xD)    = 0;
    M2C_FIELD(func_02059234(), s8 *, 0xE)    = 0;
    M2C_FIELD(func_02059234(), s8 *, 0x14)   = 0;
    M2C_FIELD(func_02059234(), s8 *, 0x17)   = 0;
    M2C_FIELD(func_02059234(), s32 *, 0x20)  = 0;
    M2C_FIELD(func_02059234(), s32 *, 0xE8)  = 0;
    M2C_FIELD(func_02059234(), s8 *, 0x1A5)  = 0;
    M2C_FIELD(func_02059234(), s16 *, 0x1B0) = 0;
    M2C_FIELD(func_02059234(), s32 *, 0x1BC) = 0;
    temp_r0_5                                = func_02059234();
    M2C_FIELD(temp_r0_5, s32 *, 0x1C0)       = 0;
    M2C_FIELD(temp_r0_5, s32 *, 0x1C4)       = 0;
    M2C_FIELD(func_02059234(), s32 *, 0x1C8) = 0;
    temp_r0_6                                = func_02059234();
    M2C_FIELD(temp_r0_6, s32 *, 0x1CC)       = 0;
    M2C_FIELD(temp_r0_6, s32 *, 0x1D0)       = 0;
    M2C_FIELD(func_02059234(), s32 *, 0x1D4) = 0;
    M2C_FIELD(func_02059234(), s32 *, 0x204) = 0;
    M2C_FIELD(func_02059234(), s32 *, 0x208) = 0;
    M2C_FIELD(func_02059234(), s32 *, 0x2F0) = 0;
    func_0204e5e0();
    MIi_CpuClear32(0, func_02059234() + 0x24, 0x80);
    MIi_CpuClear16(0, func_02059234() + 0xA4, 0x40);
    MIi_CpuClear32(0, func_02059234() + 0xF4, 0x80);
    MIi_CpuClear32(0, func_02059234() + 0x194, 0xC);
    MIi_CpuClear32(0, func_02059234() + 0x210, 0x80);
    MIi_CpuClear16(0, func_02059234() + 0x290, 0x40);
    MI_CpuFill8(func_02059234() + 0x2D0, 0, 0x20);
    MIi_CpuClear32(0, func_02059234() + 0x348, 0x84);
    if (arg0 == 1) {
        if (M2C_FIELD(func_02059234(), u8 *, 0x15) == 0) {
            func_02059244(3);
            return;
        }
        if (M2C_FIELD(func_02059234(), u8 *, 0x15) != 1) {
            return;
        }
        func_02059244(4);
        return;
    }
    M2C_FIELD(func_02059234(), s8 *, 0x15)   = 0;
    M2C_FIELD(func_02059234(), s8 *, 0x16)   = 0;
    M2C_FIELD(func_02059234(), s8 *, 0x18)   = 0;
    M2C_FIELD(func_02059234(), s32 *, 0x20C) = 0;
    M2C_FIELD(func_02059234(), s8 *, 0x1A6)  = 0;
    M2C_FIELD(func_02059234(), s8 *, 0x1AE)  = 0;
    M2C_FIELD(func_02059234(), s8 *, 0x1AD)  = 0;
    temp_r0_7                                = func_02059234();
    M2C_FIELD(temp_r0_7, s32 *, 0x1F8)       = 0;
    M2C_FIELD(temp_r0_7, s32 *, 0x1FC)       = 0;
    M2C_FIELD(func_02059234(), s32 *, 0x46C) = 0;
    M2C_FIELD(func_02059234(), s32 *, 0x470) = 0;
}
