#include "m2c.h"

M2C_UNK func_02090954(void *, M2C_UNK, s32);        /* extern */
M2C_UNK func_ov000_021baa4c(void *, M2C_UNK, s32, M2C_UNK, s32); /* extern */

void func_020907b4(void *arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3) {
    s32 temp_r1;

    if (M2C_FIELD(arg0, u8 *, 0x1B4) == 0) {
        return;
    }
    temp_r1                                              = M2C_FIELD(arg0, s32 *, 0x1B8) + M2C_FIELD(arg0, s32 *, 0x1C4);
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x420) = arg3;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 0x428) = -1;
    func_ov000_021baa4c(M2C_FIELD(arg0, void **, 0), 0xA, (s32) (temp_r1 + ((u32) (temp_r1 >> 2) >> 0x1D)) >> 3, arg2, 0);
    func_02090954(arg0 + 0x18C, arg1,
                  M2C_FIELD(arg0, s32 *, 0x1BC) + (M2C_FIELD(arg0, s32 *, 0x1B8) + M2C_FIELD(arg0, s32 *, 0x1C4)));
    M2C_FIELD(arg0, s32 *, 0x1C4) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C4) + 0x70);
}
