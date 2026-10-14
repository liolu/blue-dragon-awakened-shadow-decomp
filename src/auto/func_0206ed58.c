#include "m2c.h"

M2C_UNK func_0206c45c(void *, M2C_UNK, s32);        /* extern */
s32 func_0206eaac(void *, M2C_UNK, s32, s32 *);     /* extern */
s32 func_0206eba0(void *);                          /* extern */

s32 func_0206ed58(void *arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3) {
    s32 sp0;

    if (func_0206eaac(arg0, 3, arg3 + 0x27 + M2C_FIELD(M2C_FIELD(arg0, void **, 8), s32 *, 0x44), &sp0) == 0) {
        return 0;
    }
    if (sp0 != 0) {
        return 1;
    }
    func_0206c45c(arg0 + 0x50, arg1, 0x20);
    func_0206c45c(arg0 + 0x50, arg2, arg3);
    if (func_0206eba0(arg0) != 0) {
        return 1;
    }
    return 0;
}
