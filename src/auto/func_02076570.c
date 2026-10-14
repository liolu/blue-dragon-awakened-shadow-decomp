#include "m2c.h"

M2C_UNK func_0205b864();                         /* extern */
s32 func_0205b8ac();                             /* extern */
s32 *func_0205b8b4();                       /* extern */
M2C_UNK func_02075c50();                 /* extern */

void func_02076570(void *arg0) {
    s32 var_r4;

    if (M2C_FIELD(arg0, s32 *, 8) == 0) {
        return;
    }
    var_r4 = 0;
    if (func_0205b8ac() > 0) {
        do {
            func_02075c50(arg0, *func_0205b8b4(M2C_FIELD(arg0, s32 *, 8), var_r4));
            var_r4 += 1;
        } while (var_r4 < func_0205b8ac(M2C_FIELD(arg0, s32 *, 8)));
    }
    func_0205b864(M2C_FIELD(arg0, s32 *, 8));
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
