#include "m2c.h"

M2C_UNK DWCi_SetError(M2C_UNK, s32);                /* extern */
s32 func_0204e430();                                /* extern */
s32 func_020592f4();                                /* extern */
s32 func_020593e8(s32, M2C_UNK, M2C_UNK);           /* extern */
s32 func_0206d2fc(s32, M2C_UNK, M2C_UNK, s32);      /* extern */

void func_02059cc4(s32 arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3) {
    s32 temp_r0;
    s32 temp_r4;

    temp_r0 = func_0204e430();
    temp_r4 = temp_r0;
    if (arg3 != 0) {
        if ((func_020592f4() != 0) && (func_0206d2fc(temp_r4, arg1, arg2, arg3) == 0)) {
            return;
        }
        if (func_020593e8(temp_r4, arg1, arg2) != 0) {
            return;
        }
        DWCi_SetError(6, 0xFFFE82A2);
        return;
    }
    func_0206d2fc(temp_r0, arg1, arg2, arg3);
}
