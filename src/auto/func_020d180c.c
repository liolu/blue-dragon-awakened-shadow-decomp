#include "m2c.h"

M2C_UNK MI_CpuCopy8(s32, M2C_UNK *, M2C_UNK);     /* extern */
M2C_UNK func_ov000_02198acc(s32, u8);               /* extern */
M2C_UNK func_ov000_02198cac(s32, u8);               /* extern */
void *func_ov000_02198ce4(s32, u8);                 /* extern */
M2C_UNK func_ov000_021be20c(M2C_UNK *, M2C_UNK *);  /* extern */
s32 func_ov000_021d62c4(s32, u16);                  /* extern */
extern M2C_UNK data_021013e0;
extern M2C_UNK data_02101408;
extern M2C_UNK data_0210147c;
extern s32 data_ov000_021ee214;
extern void *data_ov000_021f6270;

M2C_UNK *func_020d180c(void *arg0) {
    s8 temp_r2;
    u16 temp_r4_2;
    u8 temp_r4;

    temp_r2 = M2C_FIELD(arg0, s8 *, 0x67);
    if (((s32) temp_r2 <= -1) || ((s32) temp_r2 > 0x17) || (M2C_FIELD(arg0, u16 *, 0x64) == 0)) {
        func_ov000_021be20c(&data_021013e0, &data_0210147c);
        return &data_021013e0;
    }
    temp_r4 = *((u8 *) ((s8 *) &data_02101408 + (temp_r2 * 5)));
    if (temp_r4 != 0) {
        func_ov000_02198acc(data_ov000_021ee214 + 0x30, temp_r4);
        temp_r4_2 = M2C_FIELD(func_ov000_02198ce4(data_ov000_021ee214 + 0x30, temp_r4), u16 *, 0x2A);
        func_ov000_02198cac(data_ov000_021ee214 + 0x30, temp_r4);
        MI_CpuCopy8(func_ov000_021d62c4(M2C_FIELD(data_ov000_021f6270, s32 *, 0x3C), temp_r4_2), &data_021013e0, 0x28);
    }
    return &data_021013e0;
}
