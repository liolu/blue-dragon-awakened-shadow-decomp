#include "m2c.h"

s16 func_02006810();                                /* extern */
M2C_UNK func_02008fc4();                            /* extern */
M2C_UNK func_02011d90();                            /* extern */

void func_02092f30(void *arg0) {
    s16 temp_r0;

    if (M2C_FIELD(arg0, u8 *, 0xC6) != 0) {
        return;
    }
    M2C_FIELD(arg0, u8 *, 0xC6) = 1U;
    func_02011d90();
    temp_r0 = func_02006810();
    if (temp_r0 == -3) {
        func_02008fc4();
    }
    M2C_FIELD(arg0, s16 *, 0xC4) = temp_r0;
}
