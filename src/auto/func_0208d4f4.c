#include "m2c.h"

M2C_UNK func_ov000_021ba730(void *, s32, s32);      /* extern */

void func_0208d4f4(void *arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4) {
    func_ov000_021ba730(arg0 + 0x28, M2C_FIELD(arg0, s16 *, 0x20) - (arg1 + arg3), M2C_FIELD(arg0, s16 *, 0x22) - (arg2 + arg4));
    M2C_FIELD(arg0, s16 *, 0x4AC) = arg1;
    M2C_FIELD(arg0, s16 *, 0x4AE) = arg3;
    M2C_FIELD(arg0, s16 *, 0x4B0) = arg2;
    M2C_FIELD(arg0, s16 *, 0x4B2) = arg4;
}
