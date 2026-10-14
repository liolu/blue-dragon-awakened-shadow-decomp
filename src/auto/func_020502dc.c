#include "m2c.h"

s32 func_02048738(s32, s32);                        /* extern */
s32 func_0204f190();                                /* extern */
extern M2C_UNK data_0210e8cc;

s32 func_020502dc(s32 arg0) {
    s32 temp_r0;
    s32 temp_r4;

    temp_r4 = M2C_FIELD(M2C_FIELD(&data_0210e8cc, void **, 0xC), s32 *, 0x18);
    if (temp_r4 == 0) {
        return 0;
    }
    temp_r0 = func_02048738(func_0204f190(), (arg0 * 0xC) + temp_r4);
    if ((temp_r0 != 0) && (temp_r0 != -1)) {
        return temp_r0;
    }
    return 0;
}
