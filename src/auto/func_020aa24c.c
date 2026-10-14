#include "m2c.h"

M2C_UNK func_020240c0(s32, s32);                    /* extern */
s32 func_020244fc();                                /* extern */
s32 func_020245b8();                                /* extern */
s32 func_02024600(s32, s32);                        /* extern */
M2C_UNK func_ov000_021bdc9c(M2C_UNK);               /* extern */

void func_020aa24c(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x30) = arg1;
    M2C_FIELD(arg0, s8 *, 0x3B) = 1;
    M2C_FIELD(arg0, s8 *, 0x3D) = 0;
    M2C_FIELD(arg0, s8 *, 0x3E) = 0;
    M2C_FIELD(arg0, s8 *, 0x3F) = 0;
    if (M2C_FIELD(arg0, u8 *, 0x36) == 0) {
        return;
    }
    func_ov000_021bdc9c(0x100);
    func_020240c0(func_02024600(0x43E10000, func_020245b8()), 0x43800000);
    M2C_FIELD(arg0, s32 *, 0x58) = (s32) (0x294 - func_020244fc());
    M2C_FIELD(arg0, s8 *, 0x37) = 0;
}
