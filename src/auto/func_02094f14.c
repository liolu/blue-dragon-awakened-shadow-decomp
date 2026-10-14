#include "m2c.h"

M2C_UNK func_02026e14(s32, M2C_UNK, s32, M2C_UNK *); /* extern */
M2C_UNK func_ov000_021bdae4(s32);                   /* extern */
extern M2C_UNK func_020949c8;

s32 func_02094f14(s32 arg0) {
    func_ov000_021bdae4(arg0 + 0x2C10);
    func_02026e14(arg0, 0xA, 0x468, &func_020949c8);
    return arg0;
}
