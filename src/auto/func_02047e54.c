#include "m2c.h"

M2C_UNK func_02047de4(void *, M2C_UNK, M2C_UNK, s32); /* extern */

void func_02047e54(void *arg0, s32 arg1, M2C_UNK arg2) {
    func_02047de4(arg0, arg2, 0, 0x7FF);
    M2C_FIELD(arg0, s32 *, 4) = arg1;
}
