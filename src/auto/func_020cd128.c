#include "m2c.h"

M2C_UNK func_020cb8f4(void *);                      /* extern */
M2C_UNK func_020ce900(void *);                      /* extern */
s32 func_ov000_021bec20(M2C_UNK *);                 /* extern */
extern M2C_UNK data_ov000_021f4924;

void func_020cd128(void *arg0) {
    s32 temp_r0;

    if (M2C_FIELD(arg0, s32 *, 0x130) != 5) {
        return;
    }
    if (M2C_FIELD(arg0, u8 *, 0xFC) == 0) {
        temp_r0 = M2C_FIELD(arg0, s32 *, 0x13C) - func_ov000_021bec20(&data_ov000_021f4924);
        M2C_FIELD(arg0, s32 *, 0x13C) = temp_r0;
        if (temp_r0 < 0) {
            M2C_FIELD(arg0, s32 *, 0x13C) = 0;
        }
    }
    func_020ce900(arg0);
    if (M2C_FIELD(arg0, u8 *, 0x148) != 2) {
        return;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x13C) > 0) {
        return;
    }
    func_020cb8f4(arg0);
}
