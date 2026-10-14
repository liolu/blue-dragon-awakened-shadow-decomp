#include "m2c.h"

M2C_UNK func_ov000_021bac94(void *, s32, s32, u8, s32, s32); /* extern */
extern void *data_ov000_021f6270;

void func_0208d308(void *arg0) {
    u8 temp_r2;

    if (M2C_FIELD(arg0, s32 *, 0x18) != 1) {
        return;
    }
    temp_r2 = M2C_FIELD(arg0, u8 *, 0x26);
    if ((s32) (temp_r2 & 1) <= 0) {
        return;
    }
    if (((s32) (temp_r2 & 0x10) <= 0) && (M2C_FIELD(data_ov000_021f6270, u8 *, 0x34) != 0)) {
        return;
    }
    func_ov000_021bac94(arg0 + 0x28, M2C_FIELD(arg0, s16 *, 0x1C) + M2C_FIELD(arg0, s16 *, 0x4AC), M2C_FIELD(arg0, s16 *, 0x1E) + M2C_FIELD(arg0, s16 *, 0x4B0), (u8) ((s32) (M2C_FIELD(arg0, u8 *, 0x27) & 0x30) >> 4), 0, 0);
}
