#include "m2c.h"

M2C_UNK func_02007a2c(s32, M2C_UNK);                /* extern */
M2C_UNK func_02012430(M2C_UNK, M2C_UNK);            /* extern */
s32 func_020124a0(M2C_UNK, M2C_UNK, s32);           /* extern */
void *func_020125bc();                              /* extern */
s32 func_02012630(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */

s32 func_02013a68(M2C_UNK arg0, s32 arg1) {
    s32 temp_r0;
    s32 var_r0;
    void *temp_r6;

    temp_r6 = func_020125bc();
    temp_r0 = func_02012630(2, 7, 9);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_02007a2c(M2C_FIELD(temp_r6, void **, 4) + 0x182, 2);
    if (!(M2C_FIELD(M2C_FIELD(temp_r6, void **, 4), u16 *, 0x182) & arg1 & 0xFFFE)) {
        return 7;
    }
    func_02012430(0xD, arg0);
    var_r0 = func_020124a0(0xD, 1, arg1);
    if (var_r0 == 0) {
        var_r0 = 2;
    }
    return var_r0;
}
