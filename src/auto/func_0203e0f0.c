#include "m2c.h"

M2C_UNK MI_CpuCopy8(void *, void *, M2C_UNK);     /* extern */
s32 memcmp(s32, M2C_UNK *, M2C_UNK);         /* extern */
M2C_UNK func_0203df38(void *, M2C_UNK *, M2C_UNK);  /* extern */
M2C_UNK func_0203e014(void *, M2C_UNK *, M2C_UNK);  /* extern */

void func_0203e0f0(void *arg0, s32 arg1) {
    u8 sp0[20];

    MI_CpuCopy8(arg0 + 0x3A4, arg0 + 0x3FC, 0x58);
    func_0203df38(arg0, sp0, 1);
    MI_CpuCopy8(arg0 + 0x3FC, arg0 + 0x3A4, 0x58);
    if (memcmp(arg1, sp0, 0x10) != 0) {
        M2C_FIELD(arg0, s8 *, 0x455) = 9;
        return;
    }
    MI_CpuCopy8(arg0 + 0x2EC, arg0 + 0x348, 0x5C);
    func_0203e014(arg0, sp0, 1);
    MI_CpuCopy8(arg0 + 0x348, arg0 + 0x2EC, 0x5C);
    if (memcmp(arg1 + 0x10, sp0, 0x14) != 0) {
        M2C_FIELD(arg0, s8 *, 0x455) = 9;
        return;
    }
    M2C_FIELD(arg0, s8 *, 0x455) = 6;
}
