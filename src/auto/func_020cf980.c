#include "m2c.h"

M2C_UNK func_02078404(void *, s32, M2C_UNK, M2C_UNK, s32, s32); /* extern */
s32 func_ov000_021c0650(M2C_UNK *, s32, M2C_UNK);   /* extern */
M2C_UNK func_ov000_021c09a0(M2C_UNK *, s32);        /* extern */
extern M2C_UNK data_021012a8;
extern M2C_UNK data_ov000_021f4d24;

s32 func_020cf980(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x2C) != 0) {
        func_ov000_021c09a0(&data_ov000_021f4d24, M2C_FIELD(arg0, s32 *, 0x28));
    }
    func_02078404(arg0 + 0x48, M2C_FIELD(&data_021012a8, s32 *, 4), 0, 0, 0x10, 0);
    M2C_FIELD(arg0, s32 *, 0x28) = func_ov000_021c0650(&data_ov000_021f4d24, M2C_FIELD(arg0, s32 *, 0x54), 0);
    M2C_FIELD(arg0, u8 *, 0x2C)  = 1U;
    M2C_FIELD(arg0, s32 *, 0x30) = 2;
    M2C_FIELD(arg0, s32 *, 0x34) = 3;
    M2C_FIELD(arg0, s32 *, 0x38) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = -1;
    M2C_FIELD(arg0, s32 *, 0x3C) = 0x50;
    M2C_FIELD(arg0, s32 *, 0x40) = 0x320;
    M2C_FIELD(arg0, s32 *, 0x44) = 0x50;
    return M2C_FIELD(arg0, s32 *, 0x28);
}
