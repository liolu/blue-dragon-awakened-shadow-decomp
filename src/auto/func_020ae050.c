#include "m2c.h"

M2C_UNK func_020adb0c(void *, s16);                 /* extern */
M2C_UNK func_ov000_021c09a0(M2C_UNK *);             /* extern */
extern M2C_UNK data_0216674c;
extern M2C_UNK data_ov000_021f4d24;

void func_020ae050(void *arg0) {
    u8 temp_r3;

    if (M2C_FIELD(arg0, s32 *, 0x10) == -1) {
        return;
    }
    func_ov000_021c09a0(&data_ov000_021f4d24);
    M2C_FIELD(arg0, s32 *, 0x10) = -1;
    temp_r3 = M2C_FIELD(arg0, u8 *, 0x14);
    func_020adb0c((M2C_UNK *)((s8 *)&data_0216674c + (temp_r3 * 0x10)), M2C_FIELD((arg0 + (temp_r3 * 2)), s16 *, 0x2A));
    M2C_FIELD((arg0 + (M2C_FIELD(arg0, u8 *, 0x14) * 2)), s16 *, 0x2A) = 0;
}
