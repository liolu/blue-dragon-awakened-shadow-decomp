#include "m2c.h"

M2C_UNK func_ov000_021ba730(void *, s32, s32);      /* extern */

void func_0208d4ac(void *arg0, s16 arg1, s16 arg2) {
    func_ov000_021ba730(arg0 + 0x28, arg1 - (M2C_FIELD(arg0, s16 *, 0x4AC) + M2C_FIELD(arg0, s16 *, 0x4AE)),
                        arg2 - (M2C_FIELD(arg0, s16 *, 0x4B0) + M2C_FIELD(arg0, s16 *, 0x4B2)));
    M2C_FIELD(arg0, s16 *, 0x20) = arg1;
    M2C_FIELD(arg0, s16 *, 0x22) = arg2;
}
