#include "m2c.h"

M2C_UNK func_02007a2c(s32, M2C_UNK);                /* extern */
M2C_UNK func_02012430(M2C_UNK, M2C_UNK);            /* extern */
s32 func_020124a0(M2C_UNK, M2C_UNK);                /* extern */
void *func_020125bc();                              /* extern */
s32 func_02012630(M2C_UNK, M2C_UNK);                /* extern */

s32 func_0201407c(M2C_UNK arg0) {
    s32 temp_r0;
    s32 var_r0;
    void *temp_r4;

    temp_r4 = func_020125bc();
    temp_r0 = func_02012630(1, 0xB);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_02007a2c(M2C_FIELD(temp_r4, void **, 4) + 0x10, 4);
    if (M2C_FIELD(M2C_FIELD(temp_r4, void **, 4), s32 *, 0x10) == 0) {
        return 3;
    }
    func_02012430(0x13, arg0);
    var_r0 = func_020124a0(0x13, 0);
    if (var_r0 == 0) {
        var_r0 = 2;
    }
    return var_r0;
}
