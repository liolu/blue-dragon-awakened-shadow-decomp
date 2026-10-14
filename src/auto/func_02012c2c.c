#include "m2c.h"

M2C_UNK func_02007a2c(s32, M2C_UNK);                /* extern */
M2C_UNK func_02009898(s32, s32, M2C_UNK);           /* extern */
void *func_020125bc();                              /* extern */
s32 func_020125cc();                                /* extern */

s32 func_02012c2c(s32 arg0) {
    s32 temp_r0;
    void *temp_r4;

    temp_r4 = func_020125bc();
    temp_r0 = func_020125cc();
    if (temp_r0 != 0) {
        return temp_r0;
    }
    if (arg0 == 0) {
        return 6;
    }
    func_02007a2c(M2C_FIELD(temp_r4, s32 *, 4), 0x7D0);
    func_02009898(M2C_FIELD(temp_r4, s32 *, 4), arg0, 0x7D0);
    return 0;
}
