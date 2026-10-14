#include "m2c.h"

M2C_UNK func_02006744();                            /* extern */
M2C_UNK func_02008af4(s32);                         /* extern */

void func_020151bc(s32 arg0, void *arg1) {
    if (M2C_FIELD(arg1, s32 *, 0) == 0) {
        func_02006744(arg0);
    }
    func_02008af4(M2C_FIELD(arg1, s32 *, 4));
}
