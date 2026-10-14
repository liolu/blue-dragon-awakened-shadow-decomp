#include "m2c.h"

s32 func_02008ae0();                                /* extern */
M2C_UNK func_02008af4(s32);                         /* extern */
void *func_02042410();                              /* extern */
s32 func_0204425c();                                /* extern */

s32 func_02044198(void) {
    s32 temp_r4;
    s32 var_r5;
    void *temp_r0;

    temp_r4 = func_02008ae0();
    temp_r0 = func_02042410();
    var_r5 = 0;
    if ((temp_r0 != NULL) && (M2C_FIELD(temp_r0, s32 *, 0x2260) == 9)) {
        var_r5 = func_0204425c();
    }
    func_02008af4(temp_r4);
    return var_r5;
}
