#include "m2c.h"

M2C_UNK func_02008214(M2C_UNK, M2C_UNK);            /* extern */
s32 func_02008ae0();                                /* extern */
M2C_UNK func_02008af4(s32);                         /* extern */
s32 func_02014f98();                                /* extern */
extern s32 data_02104e80;

void func_02015230(s32 arg0) {
    M2C_UNK var_r1;
    s32 temp_r4;

    temp_r4 = func_02008ae0();
    data_02104e80 = arg0;
    if (func_02014f98() == 0) {
        if (arg0 != 0) {
            var_r1 = 0x1000;
        } else {
            var_r1 = 0x5000;
        }
        func_02008214(0xF000, var_r1);
    }
    func_02008af4(temp_r4);
}
