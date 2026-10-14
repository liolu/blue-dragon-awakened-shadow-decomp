#include "m2c.h"

M2C_UNK func_020810f0(s32, M2C_UNK);                /* extern */
M2C_UNK func_ov000_021d98a4(s32);                   /* extern */
extern s32 data_02164e04;
extern s32 data_ov000_021f6270;

void func_020970f4(void *arg0) {
    if (!(M2C_FIELD(arg0, u16 *, 0x2C) & 8)) {
        return;
    }
    func_020810f0(data_02164e04 + 0x2C, 0x1B4);
    func_ov000_021d98a4(data_ov000_021f6270);
    M2C_FIELD(arg0, u16 *, 0x2C) = (u16) (M2C_FIELD(arg0, u16 *, 0x2C) & ~8);
}
