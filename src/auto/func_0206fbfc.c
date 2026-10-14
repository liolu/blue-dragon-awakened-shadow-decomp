#include "m2c.h"

s32 func_0205b8ac(s32);                             /* extern */
s32 *func_0205b8b4(s32, s32);                       /* extern */
M2C_UNK func_0206f890(s32);                         /* extern */

void func_0206fbfc(void *arg0) {
    s32 var_r4;

    var_r4 = func_0205b8ac(M2C_FIELD(arg0, s32 *, 0x10)) - 1;
    if (var_r4 < 0) {
        return;
    }
    do {
        func_0206f890(*func_0205b8b4(M2C_FIELD(arg0, s32 *, 0x10), var_r4));
        var_r4 -= 1;
    } while (var_r4 >= 0);
}
