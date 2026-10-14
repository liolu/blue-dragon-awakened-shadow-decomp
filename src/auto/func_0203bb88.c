#include "m2c.h"

s32 func_020352cc();                                /* extern */
s32 func_0203b6c4(s32);                             /* extern */
M2C_UNK func_0203b6f8(s32);                         /* extern */
M2C_UNK func_0203ba00();                            /* extern */
s32 func_0203bae0();                                /* extern */
M2C_UNK func_02043ee8(M2C_UNK);                     /* extern */
extern s32 data_0210e26c;

s32 func_0203bb88(void) {
    s32 var_r4;

    if (data_0210e26c != 0) {
        var_r4 = func_0203bae0();
        if (var_r4 == 0) {
            func_0203b6f8(data_0210e26c);
            if (func_0203b6c4(data_0210e26c) != 0) {
                data_0210e26c = 0;
            }
            var_r4 = -0x1A;
        }
        func_0203ba00();
    } else if (func_020352cc() == 0) {
        var_r4 = -0x1A;
    } else {
        func_02043ee8(0);
        var_r4 = 0;
    }
    return var_r4;
}
