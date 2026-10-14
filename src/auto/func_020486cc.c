#include "m2c.h"

M2C_UNK func_020158a0(M2C_UNK *, s32);              /* extern */
s32 func_0201596c(M2C_UNK *, void *, M2C_UNK);      /* extern */

void func_020486cc(void *arg0) {
    u8 sp0[1024];

    M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) & ~1);
    func_020158a0(sp0, 0xEDB88320);
    M2C_FIELD(arg0, s32 *, 0x3C) = func_0201596c(sp0, arg0, 0x3C);
}
