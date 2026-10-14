#include "m2c.h"

M2C_UNK func_02027cbc();                            /* extern */
M2C_UNK func_02027cd0(M2C_UNK);                     /* extern */

void func_02027d74(M2C_UNK arg0, s32 arg1) {
    if (arg1 & 1) {
        func_02027cbc();
    }
    if (!(arg1 & 2)) {
        return;
    }
    func_02027cd0(arg0);
}
