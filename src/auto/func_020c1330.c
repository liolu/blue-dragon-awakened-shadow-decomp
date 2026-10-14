#include "m2c.h"

M2C_UNK func_020bd0c4(s32, M2C_UNK);                /* extern */
s32 func_020bf738();                                /* extern */

void func_020c1330(void *arg0, M2C_UNK arg1) {
    if (func_020bf738() == 0) {
        return;
    }
    func_020bd0c4(M2C_FIELD(M2C_FIELD(arg0, void **, 0xC), s32 *, 0xC), arg1);
}
