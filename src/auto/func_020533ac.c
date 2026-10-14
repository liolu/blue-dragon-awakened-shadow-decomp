#include "m2c.h"

void *func_02059234();                              /* extern */

s32 func_020533ac(s32 *arg0) {
    if (func_02059234() == NULL) {
        return 0;
    }
    *arg0 = func_02059234() + 0x2D0;
    return M2C_FIELD(func_02059234(), u8 *, 0xD) + 1;
}
