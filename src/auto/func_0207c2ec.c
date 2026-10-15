#include "m2c.h"

M2C_UNK func_0207be50();                            /* extern */

void func_0207c2ec(void *arg0) {
    M2C_UNK (*temp_r0)();
    M2C_UNK (*temp_r1)(void *);

    func_0207be50();
    temp_r0 = M2C_FIELD(arg0, M2C_UNK(**)(), 0x50);
    if (temp_r0 != NULL) {
        temp_r0();
    }
    temp_r1 = M2C_FIELD(arg0, M2C_UNK(**)(void *), 0x54);
    if (temp_r1 != NULL) {
        temp_r1(arg0 + 0xDC);
    }
    M2C_FIELD(arg0, M2C_UNK(**)(), 0x50)       = NULL;
    M2C_FIELD(arg0, M2C_UNK(**)(void *), 0x54) = NULL;
}
