#include "m2c.h"

M2C_UNK func_020049b0();                            /* extern */
M2C_UNK func_02028c40();                            /* extern */

void func_0202c3c0(void) {
    func_020049b0();
    func_02028c40();
    *(s32 *)0x04000600 = (*(s32 *)0x04000600 & ~0xC0000000) | 0x80000000;
}
