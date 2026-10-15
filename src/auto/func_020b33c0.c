#include "m2c.h"

M2C_UNK func_02077f14(s32);                         /* extern */
M2C_UNK func_ov000_021bcc60();                      /* extern */

void *func_020b33c0(void *arg0) {
    func_ov000_021bcc60();
    func_02077f14(arg0 + 0x140);
    M2C_FIELD(arg0, s8 *, 0x120)    = 1;
    M2C_FIELD(arg0, s8 *, 0x121)    = 1;
    M2C_FIELD(arg0, s16 *, 0x122)   = 0x100;
    M2C_FIELD(arg0, void **, 0x128) = (void *) (arg0 + 0x12C);
    M2C_FIELD(arg0, s16 *, 0x12C)   = 1;
    M2C_FIELD(arg0, s16 *, 0x12E)   = 1;
    M2C_FIELD(arg0, s8 *, 0x130)    = 0;
    M2C_FIELD(arg0, s8 *, 0x131)    = 0;
    M2C_FIELD(arg0, s8 *, 0x132)    = 0x20;
    M2C_FIELD(arg0, s8 *, 0x133)    = 0x20;
    M2C_FIELD(arg0, s16 *, 0x134)   = 0x18;
    M2C_FIELD(arg0, s16 *, 0x136)   = 0x18;
    M2C_FIELD(arg0, s16 *, 0x138)   = 0;
    M2C_FIELD(arg0, s32 *, 0x160)   = -1;
    M2C_FIELD(arg0, s32 *, 0x164)   = -1;
    return arg0;
}
