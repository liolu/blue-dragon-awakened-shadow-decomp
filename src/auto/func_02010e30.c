#include "m2c.h"

M2C_UNK func_02008fc4();                            /* extern */
s32 func_02010e20();                                /* extern */

void func_02010e30(void) {
    if (func_02010e20() != 0) {
        return;
    }
    func_02008fc4();
}
