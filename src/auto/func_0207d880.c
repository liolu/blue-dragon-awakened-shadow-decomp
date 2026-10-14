#include "m2c.h"

M2C_UNK func_0207d6cc();                            /* extern */

void func_0207d880(void *arg0, s8 arg1) {
    M2C_FIELD(arg0, s8 *, 0x5C) = arg1;
    if (arg1 != 0) {
        return;
    }
    func_0207d6cc();
}
