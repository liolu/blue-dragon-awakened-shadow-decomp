#include "m2c.h"

M2C_UNK func_020bf86c(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_020c4334(void *);                      /* extern */
extern M2C_UNK data_ov000_021f4950;

void func_020c6f44(void *arg0) {
    s32 temp_r0;

    if (M2C_FIELD(&data_ov000_021f4950, u8 *, 0x30) != 0) {
        M2C_FIELD(arg0, s32 *, 0x230) = 0x258;
    }
    M2C_FIELD(arg0, s16 *, 0x148) = 0x258;
    func_020c4334(arg0);
    M2C_FIELD(arg0, s32 *, 0x144) = 0;
    M2C_FIELD(arg0, s32 *, 0x134) = -1;
    M2C_FIELD(arg0, s32 *, 0x218) = -1;
    M2C_FIELD(arg0, s16 *, 0x21C) = -1;
    M2C_FIELD(arg0, s32 *, 0x214) = 0x50;
    M2C_FIELD(arg0, s8 *, 0x14C)  = 0;
    M2C_FIELD(arg0, s32 *, 0x130) = 0;
    temp_r0                       = M2C_FIELD(arg0, s32 *, 8);
    if (temp_r0 != 0) {
        func_020bf86c(temp_r0, 1, 1);
    }
    M2C_FIELD(arg0, s32 *, 0x234) = 0;
}
