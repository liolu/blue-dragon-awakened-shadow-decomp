#include "m2c.h"

M2C_UNK func_02008b50(s32);                         /* extern */
s32 func_0200f7e4(M2C_UNK, M2C_UNK);                /* extern */
s32 func_0200fed4(M2C_UNK);                         /* extern */
s32 func_0200fef4();                                /* extern */

void func_020100a8(void) {
    func_02008b50(0x360000);
    if (func_0200fef4() == 1) {
        return;
    }
    if (func_0200f7e4(2, 0) != 0) {
        do {
            func_02008b50(0xA3A47);
        } while (func_0200f7e4(2, 0) != 0);
    }
    if (func_0200fed4(1) != 0) {
        return;
    }
    do {
        func_02008b50(0xA);
    } while (func_0200fed4(1) == 0);
}
