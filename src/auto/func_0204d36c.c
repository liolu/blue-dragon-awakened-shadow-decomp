#include "m2c.h"

s32 func_02042344();                                /* extern */
u32 func_020445d4();                                /* extern */
M2C_UNK func_0204cb08(M2C_UNK, s32);                /* extern */
M2C_UNK func_0204cef4();                            /* extern */
s32 func_0204d334();                                /* extern */

s32 func_0204d36c(void) {
    u32 var_r4;

    func_0204cef4();
    if (func_0204d334() != 0) {
        var_r4 = func_020445d4();
        if ((var_r4 == 0xFF) || (var_r4 > 0x63U)) {
            var_r4 = 0x63;
        }
        if (func_02042344() == 0xB) {
            func_0204cb08(9, 0xFFFF298C - var_r4);
        } else {
            func_0204cb08(8, 0xFFFF2D10 - var_r4);
        }
        return 1;
    }
    return 0;
}
