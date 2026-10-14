#include "m2c.h"

s32 *func_0205b8b4(s32);                            /* extern */
M2C_UNK func_0205ba28(s32, M2C_UNK);                /* extern */
M2C_UNK func_02075a64(void *, s32);                 /* extern */

void func_02075a98(void *arg0, M2C_UNK arg1) {
    s32 temp_r4;

    temp_r4 = *func_0205b8b4(M2C_FIELD(arg0, s32 *, 4));
    M2C_FIELD(arg0, M2C_UNK (**)(void *, M2C_UNK, s32, s32), 0x488)(arg0, 2, temp_r4, M2C_FIELD(arg0, s32 *, 0x494));
    func_0205ba28(M2C_FIELD(arg0, s32 *, 4), arg1);
    func_02075a64(arg0, temp_r4);
}
