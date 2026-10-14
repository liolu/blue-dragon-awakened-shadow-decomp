#include "m2c.h"

M2C_UNK func_020c322c();                            /* extern */

void func_020bfec4(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x74) & 4) {
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0x10) == 0) {
        return;
    }
    func_020c322c();
}
