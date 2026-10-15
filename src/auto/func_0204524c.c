#include "m2c.h"

M2C_UNK func_020449a8(M2C_UNK);                     /* extern */
s32 func_02044a60();                                /* extern */
s32 func_02045290();                                /* extern */
s32 func_02045388();                                /* extern */

s32 func_0204524c(void) {
    s32 var_r4;

    var_r4 = func_02044a60();
    func_020449a8(0x10);
    switch (var_r4) {                               /* irregular */
        case 7:
            var_r4 = func_02045290();
            break;
        case 8:
            var_r4 = func_02045388();
            break;
    }
    return var_r4;
}
