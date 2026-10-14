#include "m2c.h"

s32 func_0206c64c(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0206d010();                            /* extern */
s32 func_0206d5bc();                                /* extern */
s32 func_0206f200(void *);                          /* extern */

s32 func_0206db04(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 var_r0;

    if (M2C_FIELD(arg0, s32 *, 0xC) != 1) {
        if (func_0206d5bc() != 0) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        return var_r0;
    }
    func_0206d010(arg0);
    if (func_0206f200(arg0) == 0) {
        return 0;
    }
    if (func_0206c64c(arg0, 2, arg1, arg2) != 0) {
        return 1;
    }
    return 0;
}
