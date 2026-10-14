#include "m2c.h"

M2C_UNK func_02027288(void *, s32);                 /* extern */
s32 func_02027d40(s32, M2C_UNK, M2C_UNK);           /* extern */
M2C_UNK func_02033d98();                            /* extern */

s32 func_02033ddc(s32 *arg0) {
    s32 temp_r0;

    temp_r0 = func_02027d40(*arg0, 0x14, 4);
    if (temp_r0 == 0) {
        return 0;
    }
    func_02033d98();
    func_02027288(((s8 *)arg0 + 4), temp_r0);
    return 1;
}
