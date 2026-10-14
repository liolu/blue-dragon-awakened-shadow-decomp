#include "m2c.h"

M2C_UNK func_020427cc(s16, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
extern void *data_0210e5ec;

void func_02042788(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3) {
    s16 temp_r0;

    temp_r0 = M2C_FIELD(data_0210e5ec, s16 *, 0x2280);
    M2C_FIELD(data_0210e5ec, s16 *, 0x2280) = 0;
    func_020427cc(temp_r0, arg0, arg1, arg2, arg3);
}
