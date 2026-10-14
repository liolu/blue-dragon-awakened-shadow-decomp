#include "m2c.h"

M2C_UNK func_0205b864();                            /* extern */
M2C_UNK func_0205cb50();                      /* extern */

void func_0206d06c(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x38) != 0) {
        func_0205cb50();
    }
    if (M2C_FIELD(arg0, s32 *, 0x44) != 0) {
        func_0205cb50();
    }
    if (M2C_FIELD(arg0, s32 *, 0x50) != 0) {
        func_0205cb50();
    }
    if (M2C_FIELD(arg0, s32 *, 0x5C) != 0) {
        func_0205b864();
    }
    if (M2C_FIELD(arg0, s32 *, 0x60) != 0) {
        func_0205b864();
    }
    if (M2C_FIELD(arg0, s32 *, 0x98) != 0) {
        func_0205b864();
    }
    if (M2C_FIELD(arg0, s32 *, 0x9C) != 0) {
        func_0205b864();
    }
    func_0205cb50(arg0);
}
