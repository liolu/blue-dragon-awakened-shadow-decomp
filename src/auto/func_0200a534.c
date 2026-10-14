#include "m2c.h"

s32 func_0200a424(M2C_UNK);                         /* extern */
M2C_UNK func_0200a5f4(M2C_UNK);                     /* extern */
s32 func_0200a910();                                /* extern */
M2C_UNK func_0200a9b0();                            /* extern */
s32 func_0200a9d8();                                /* extern */
s32 func_0200aa20();                                /* extern */

s32 func_0200a534(s32 arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;

    if (func_0200aa20() == 0) {
        return 0;
    }
    temp_r0_3 = func_0200a9d8();
    if (temp_r0_3 != 0) {
        return temp_r0_3;
    }
    if (!(arg0 & 1)) {
        return 0;
    }
    if (func_0200a910() > 0) {
        do {

        } while (func_0200a424(0) != 0);
        temp_r0_2 = func_0200a9d8();
        if (temp_r0_2 != 0) {
            return temp_r0_2;
        }
        goto block_12;
    }
    func_0200a5f4(1);
block_12:
    func_0200a9b0();
    do {
        func_0200a424(1);
        temp_r0 = func_0200a9d8();
    } while (temp_r0 == 0);
    return temp_r0;
}
