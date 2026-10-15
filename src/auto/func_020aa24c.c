#include "m2c.h"

M2C_UNK _fdiv(s32, s32);                    /* extern */
s32 _ffix();                                /* extern */
s32 _ffltu();                                /* extern */
s32 _fmul(s32, s32);                        /* extern */
M2C_UNK func_ov000_021bdc9c(M2C_UNK);               /* extern */

void func_020aa24c(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x30) = arg1;
    M2C_FIELD(arg0, s8 *, 0x3B)  = 1;
    M2C_FIELD(arg0, s8 *, 0x3D)  = 0;
    M2C_FIELD(arg0, s8 *, 0x3E)  = 0;
    M2C_FIELD(arg0, s8 *, 0x3F)  = 0;
    if (M2C_FIELD(arg0, u8 *, 0x36) == 0) {
        return;
    }
    func_ov000_021bdc9c(0x100);
    _fdiv(_fmul(0x43E10000, _ffltu()), 0x43800000);
    M2C_FIELD(arg0, s32 *, 0x58) = (s32) (0x294 - _ffix());
    M2C_FIELD(arg0, s8 *, 0x37)  = 0;
}
