#include "m2c.h"

M2C_UNK func_020097d0(M2C_UNK, void *, M2C_UNK);    /* extern */
extern s32 data_020f8c68;
extern s32 data_020f8c6c;
extern s32 data_020f8c70;

void func_0202808c(void *arg0, s32 arg1) {
    func_020097d0(0, arg0, 0x54);
    M2C_FIELD(arg0, s32 *, 0xC) = (s32) data_020f8c70;
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) data_020f8c6c;
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) data_020f8c68;
    M2C_FIELD(arg0, s32 *, 4) = arg1;
}
