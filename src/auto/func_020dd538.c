#include "m2c.h"

M2C_UNK func_02009978(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_020dd198();                            /* extern */

void func_020dd538(void *arg0) {
    func_020dd198();
    func_02009978(arg0 + 0xCC, 0, 0x100);
    func_02009978(arg0 + 0x1CC, 0, 0x100);
    func_02009978(arg0 + 0x2CC, 0, 0x100);
    M2C_FIELD(arg0, volatile s32 *, 0xC0) = (s32) (arg0 + 0xCC);
    M2C_FIELD(arg0, void **, 0xBC) = (void *) (arg0 + 0x1CC);
    M2C_FIELD(arg0, void **, 0xC4) = (void *) (arg0 + 0x2CC);
}
