#include "m2c.h"

M2C_UNK MI_CpuCopy8(s32, M2C_UNK *, M2C_UNK);     /* extern */
s32 func_ov000_021d62c4(s32, M2C_UNK);              /* extern */
extern u8 data_021670ac;
extern M2C_UNK data_021670b0;
extern M2C_UNK data_021670c8;
extern M2C_UNK data_021670e0;
extern M2C_UNK data_021670f8;
extern void *data_ov000_021f6270;

void func_020bca98(void) {
    s32 temp_r4;

    if (data_021670ac != 0) {
        return;
    }
    temp_r4 = M2C_FIELD(data_ov000_021f6270, s32 *, 0x3C);
    MI_CpuCopy8(func_ov000_021d62c4(temp_r4, 0xE), &data_021670b0, 0x18);
    MI_CpuCopy8(func_ov000_021d62c4(temp_r4, 0xF), &data_021670c8, 0x18);
    MI_CpuCopy8(func_ov000_021d62c4(temp_r4, 0x10), &data_021670e0, 0x18);
    MI_CpuCopy8(func_ov000_021d62c4(temp_r4, 0x11), &data_021670f8, 0x18);
    data_021670ac = 1;
}
