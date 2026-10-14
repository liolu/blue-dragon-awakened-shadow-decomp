#include "m2c.h"

M2C_UNK func_020805b4();                            /* extern */

void func_020805f4(void *arg0, s8 arg1, s32 arg2) {
    if ((arg1 != 8) && (arg1 != 0xB) && (arg1 != 0x11) && (arg1 != 0x1B) && (arg1 != 0x20)) {
        M2C_FIELD(arg0, s8 *, 0) = arg1;
        M2C_FIELD(arg0, s32 *, 4) = arg2;
        return;
    }
    M2C_FIELD(arg0, s8 *, 0x1FC) = arg1;
    func_020805b4();
}
