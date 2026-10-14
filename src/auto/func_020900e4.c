#include "m2c.h"

M2C_UNK func_02009a34(void *, void *, M2C_UNK);     /* extern */

void func_020900e4(void *arg0, void *arg1) {
    M2C_FIELD(arg1, s8 *, 0) = (s8) M2C_FIELD(arg0, s32 *, 0x1FC);
    func_02009a34(arg0 + 0x200, arg1 + 2, 0xC);
    M2C_FIELD(arg1, s8 *, 1) = (s8) M2C_FIELD(arg0, s32 *, 0x20C);
    func_02009a34(arg0 + 0x210, arg1 + 0xE, 0xC);
    M2C_FIELD(arg1, s8 *, 0x1B) = (s8) M2C_FIELD(arg0, s32 *, 0x21C);
    func_02009a34(arg0 + 0x220, arg1 + 0x1C, 0xC);
}
