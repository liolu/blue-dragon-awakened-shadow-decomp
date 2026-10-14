#include "m2c.h"

s32 func_02047e94();                                /* extern */
M2C_UNK func_02047f64(M2C_UNK, s32);                /* extern */

void func_0204801c(M2C_UNK arg0, s32 arg1) {
    s32 var_r1;

    if (arg1 != 0) {
        var_r1 = func_02047e94() | 0x10;
    } else {
        var_r1 = func_02047e94() & ~0x10;
    }
    func_02047f64(arg0, var_r1);
}
