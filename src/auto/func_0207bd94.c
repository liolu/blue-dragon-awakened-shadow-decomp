#include "m2c.h"

M2C_UNK func_0207bcb8();                            /* extern */
M2C_UNK func_0207bd14();                      /* extern */
M2C_UNK func_0207bd70();                            /* extern */

void func_0207bd94(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x10C) == 0) {
        if (M2C_FIELD(arg0, s32 *, 0x110) == M2C_FIELD(arg0, s32 *, 0x40)) {
            func_0207bd14(arg0);
            return;
        }
        func_0207bcb8(arg0);
        func_0207bd14(arg0);
        return;
    }
    func_0207bd70(arg0);
    func_0207bd14(arg0);
}
