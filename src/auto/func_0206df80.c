#include "m2c.h"

s32 func_0205c600();                                /* extern */

void func_0206df80(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x90) != 0) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x90) = 1;
    M2C_FIELD(arg0, s32 *, 0x94) = func_0205c600();
}
