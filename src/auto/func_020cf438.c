#include "m2c.h"

s32 func_0207d4a4(M2C_UNK);                         /* extern */
s32 func_020cf514();                                /* extern */
s32 func_020cf814(s32, s32);                        /* extern */
extern s32 data_02167164;

s32 func_020cf438(s32 arg0) {
    s32 var_r0;

    if ((arg0 < 0) || (arg0 >= 0x14)) {
        return -1;
    }
    if (data_02167164 == 0) {
        var_r0 = func_0207d4a4(0xA8);
        if (var_r0 != 0) {
            var_r0 = func_020cf514();
        }
        data_02167164 = var_r0;
    }
    return func_020cf814(data_02167164, arg0);
}
