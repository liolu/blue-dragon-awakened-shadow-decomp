#include "m2c.h"

M2C_UNK func_02009978(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_020dbe68();                            /* extern */

void func_020dc3b0(void *arg0) {
    func_020dbe68();
    func_02009978(arg0 + 0xD0, 0, 0x80);
    func_02009978(arg0 + 0x150, 0, 0x80);
    func_02009978(arg0 + 0x1D0, 0, 0x80);
    M2C_FIELD(arg0, volatile s32 *, 0xC4) = (s32) (arg0 + 0xD0);
    M2C_FIELD(arg0, void **, 0xC0) = (void *) (arg0 + 0x150);
    M2C_FIELD(arg0, void **, 0xC8) = (void *) (arg0 + 0x1D0);
}
