#include "m2c.h"

M2C_UNK func_02005e34();                            /* extern */
M2C_UNK func_02005e68(void *, u32, s32);            /* extern */
M2C_UNK func_02005ed4();                            /* extern */

void func_020284ac(void *arg0, s32 arg1) {
    if (arg1 != 0) {
        func_02005e34();
    }
    func_02005e68(arg0 + M2C_FIELD(arg0, s32 *, 0x38), (u32) (M2C_FIELD(arg0, s32 *, 0x2C) << 0x10) >> 0xD, M2C_FIELD(arg0, u16 *, 0x30) * 8);
    M2C_FIELD(arg0, u16 *, 0x32) = (u16) (M2C_FIELD(arg0, u16 *, 0x32) | 1);
    if (arg1 == 0) {
        return;
    }
    func_02005ed4();
}
