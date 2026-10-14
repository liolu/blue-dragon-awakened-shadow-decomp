#include "m2c.h"

s32 func_0207d4a4(M2C_UNK);                         /* extern */
s32 func_020cf514();                                /* extern */
M2C_UNK func_020cf980(s32);                         /* extern */
extern s32 data_02167164;

void func_020cf498(void) {
    s32 var_r0;

    if (data_02167164 == 0) {
        var_r0 = func_0207d4a4(0xA8);
        if (var_r0 != 0) {
            var_r0 = func_020cf514();
        }
        data_02167164 = var_r0;
    }
    func_020cf980(data_02167164);
}
