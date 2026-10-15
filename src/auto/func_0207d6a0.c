#include "m2c.h"

M2C_UNK func_0207d6cc();                            /* extern */

void func_0207d6a0(void *arg0) {
    M2C_FIELD(arg0, s8 *, 0x5C)  = 1;
    M2C_FIELD(arg0, s8 *, 0x5E)  = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    func_0207d6cc(arg0);
    M2C_FIELD(arg0, s8 *, 0x20) = 1;
}
