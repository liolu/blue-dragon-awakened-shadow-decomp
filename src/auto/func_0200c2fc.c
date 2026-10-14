#include "m2c.h"

M2C_UNK func_0200b41c(void *, s32);                 /* extern */
s32 func_0200b478(void *, s32);                     /* extern */
s32 func_0200c054(s32);                             /* extern */
M2C_UNK func_0200c268();                            /* extern */

s32 func_0200c2fc(void *arg0) {
    func_0200b41c(arg0, func_0200b478(arg0, M2C_FIELD(arg0, s32 *, 0x10)));
    if (func_0200c054(M2C_FIELD(arg0, s32 *, 8)) != 0) {
        func_0200c268();
    }
    if (M2C_FIELD(arg0, s32 *, 0x14) == 0) {
        return 1;
    }
    return 0;
}
