#include "m2c.h"

M2C_UNK func_02057f34();                            /* extern */
M2C_UNK func_02057fa8();                            /* extern */
void *func_02059234();                              /* extern */

void func_02055940(M2C_UNK arg0) {
    if (M2C_FIELD(func_02059234(), u8 *, 0x15) == 0) {
        func_02057fa8(arg0);
        return;
    }
    func_02057f34(arg0);
}
