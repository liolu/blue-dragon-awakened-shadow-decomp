#include "m2c.h"

M2C_UNK func_020ae7e0(void *);                      /* extern */
M2C_UNK func_020ae894();                            /* extern */

void *func_020ae77c(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x14) = 0x1194;
    M2C_FIELD(arg0, s32 *, 0x18) = 0x384;
    M2C_FIELD(arg0, s8 *, 0x1C)  = 3;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    func_020ae894(arg0);
    func_020ae7e0(arg0);
    return arg0;
}
