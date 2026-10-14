#include "m2c.h"

s32 func_02047e94(M2C_UNK);                         /* extern */
s32 func_02047ea8();                                /* extern */

s32 func_02047ee8(M2C_UNK arg0) {
    s32 var_r0;

    if (func_02047ea8() == 3) {
        if ((func_02047e94(arg0) & 4) == 4) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        return var_r0;
    }
    return 0;
}
