#include "m2c.h"

M2C_UNK func_02009978(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_020158a0(M2C_UNK *, s32);              /* extern */
s32 func_0201596c(M2C_UNK *, void *, M2C_UNK);      /* extern */
M2C_UNK func_02047f7c(void *, M2C_UNK);             /* extern */
M2C_UNK func_020483e0(void *);                      /* extern */

void func_02048364(void *arg0, s32 arg1) {
    u8 sp0[1024];

    func_02009978(arg0, 0, 0x40);
    M2C_FIELD(arg0, s32 *, 0) = 0x40;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = arg1;
    func_020483e0(arg0 + 4);
    func_02047f7c(arg0 + 0x10, 0);
    func_020158a0(sp0, 0xEDB88320);
    M2C_FIELD(arg0, s32 *, 0x3C) = func_0201596c(sp0, arg0, 0x3C);
    M2C_FIELD(arg0, s32 *, 0x20) = (s32) (M2C_FIELD(arg0, s32 *, 0x20) | 1);
}
