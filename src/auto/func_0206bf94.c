#include "m2c.h"

M2C_UNK func_020068c0(M2C_UNK *, M2C_UNK *, M2C_UNK, s32); /* extern */
s32 func_0206bd44(M2C_UNK, s32);                    /* extern */
M2C_UNK func_0206be7c(M2C_UNK, M2C_UNK *, M2C_UNK, M2C_UNK, s32); /* extern */
extern M2C_UNK data_020fbc18;

void func_0206bf94(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, s32 arg4) {
    u8 sp4[64];

    func_020068c0(sp4, &data_020fbc18, arg1, func_0206bd44(arg0, arg4));
    func_0206be7c(arg0, sp4, arg2, arg3, arg4);
}
