#include "m2c.h"

M2C_UNK func_0200714c();                            /* extern */
M2C_UNK func_02036d7c(void *, M2C_UNK);             /* extern */
M2C_UNK func_02036d90(void *, M2C_UNK);             /* extern */

void func_02038190(void *arg0) {
    u8 temp_r1;

    func_0200714c();
    temp_r1 = M2C_FIELD(arg0, u8 *, 8);
    if ((u32) (u8) (temp_r1 + 0xFD) <= 1U) {
        func_02036d90(arg0, 0x19);
        M2C_FIELD(arg0, u8 *, 8) = 7U;
        return;
    }
    if (temp_r1 == 0) {
        return;
    }
    func_02036d7c(arg0, 0x1A);
}
