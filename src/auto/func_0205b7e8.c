#include "m2c.h"

M2C_UNK func_02017b34(s32, M2C_UNK, s32);           /* extern */
s32 func_0205b8b4(void *, M2C_UNK);                 /* extern */

void func_0205b7e8(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    func_02017b34(func_0205b8b4(arg0, arg2), arg1, M2C_FIELD(arg0, s32 *, 8));
}
