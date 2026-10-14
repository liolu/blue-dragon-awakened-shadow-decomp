#include "m2c.h"

M2C_UNK func_ov000_021c0d10(M2C_UNK *, s32, u8, u8, s32); /* extern */
extern M2C_UNK data_ov000_021f4d24;

s32 func_020846dc(void *arg0) {
    func_ov000_021c0d10(&data_ov000_021f4d24, M2C_FIELD(arg0, s32 *, 0), (u8) M2C_FIELD(arg0, s32 *, 4), (u8) M2C_FIELD(arg0, s32 *, 8), (s32) (u8) M2C_FIELD(arg0, s32 *, 0xC));
    return 0;
}
