#include "m2c.h"

M2C_UNK func_02026e14(s32, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK func_ov000_0217aca8(s32);                   /* extern */
M2C_UNK func_ov000_0217b300(s32);                   /* extern */
M2C_UNK func_ov000_0217b6b4(s32);                   /* extern */
M2C_UNK func_ov000_0217c6dc();                      /* extern */
extern M2C_UNK func_020b1ebc;

s32 func_020be0ec(s32 arg0) {
    func_ov000_0217c6dc(arg0);
    func_ov000_0217b6b4(arg0 + 0x280);
    func_ov000_0217b300(arg0 + 0xF0);
    func_02026e14(arg0 + 0xF4, 4, 0xC, &func_020b1ebc);
    func_ov000_0217aca8(arg0 + 0x1C);
    func_02026e14(arg0 + 0x1C, 4, 0xC, &func_020b1ebc);
    return arg0;
}
