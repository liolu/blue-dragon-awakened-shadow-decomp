#include "m2c.h"

M2C_UNK func_020d1620();                            /* extern */

void func_020d1684(void *arg0, void *arg1) {
    func_020d1620();
    M2C_FIELD(arg0, s8 *, 0x18) = (s8) M2C_FIELD(arg1, s8 *, 0x18);
    M2C_FIELD(arg0, u8 *, 0x19) = (u8) M2C_FIELD(arg1, u8 *, 0x19);
    M2C_FIELD(arg0, u8 *, 0x1A) = (u8) M2C_FIELD(arg1, u8 *, 0x1A);
    M2C_FIELD(arg0, u8 *, 0x1B) = (u8) M2C_FIELD(arg1, u8 *, 0x1B);
    M2C_FIELD(arg0, s8 *, 0x1E) = (s8) M2C_FIELD(arg1, s8 *, 0x1E);
    M2C_FIELD(arg0, u16 *, 0x1C) = (u16) M2C_FIELD(arg1, u16 *, 0x1C);
}
