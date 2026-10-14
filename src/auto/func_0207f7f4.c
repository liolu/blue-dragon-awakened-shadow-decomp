#include "m2c.h"

M2C_UNK func_0207d4cc();                            /* extern */

void func_0207f7f4(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x2C) == 0) {
        return;
    }
    func_0207d4cc();
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
}
