#include "m2c.h"

M2C_UNK func_020bd8dc();                            /* extern */

void func_020bd8f4(void *arg0, s32 arg1) {
    func_020bd8dc();
    M2C_FIELD(arg0, s32 *, 0x20) = arg1;
}
