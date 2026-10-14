#include "m2c.h"

M2C_UNK func_0206c45c(void *, M2C_UNK, s32);        /* extern */
s32 func_0206eaac(void *, M2C_UNK, s32, s32 *);     /* extern */
s32 func_0206eba0(void *);                          /* extern */

s32 func_0206ee40(void *arg0, M2C_UNK arg1, s32 arg2) {
    s32 sp0;

    if (func_0206eaac(arg0, 5, arg2 + 7 + M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0x44), &sp0) == 0) {
        return 0;
    }
    if (sp0 != 0) {
        return 1;
    }
    func_0206c45c(arg0 + 0x50, arg1, arg2);
    if (func_0206eba0(arg0) != 0) {
        return 1;
    }
    return 0;
}
