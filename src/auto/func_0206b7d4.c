#include "m2c.h"

s32 func_0201bd3c();                                /* extern */
void *func_0205b8b4(s32, s32);                      /* extern */
M2C_UNK func_0206b614(M2C_UNK, M2C_UNK *);          /* extern */
s32 func_0206b6a0(M2C_UNK, s32, M2C_UNK);           /* extern */
M2C_UNK func_0206bb4c(s32, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
extern M2C_UNK data_020fbbac;
extern M2C_UNK data_020fbbb8;
extern M2C_UNK data_0210f240;

void func_0206b7d4(M2C_UNK arg0) {
    M2C_UNK var_r1;
    s32 temp_r0;
    s32 temp_r4;

    func_0206b614(arg0, &data_020fbbb8);
    temp_r4 = func_0201bd3c();
    func_0206b614(arg0, &data_020fbbac);
    temp_r0 = func_0206b6a0(3, func_0201bd3c(), 0);
    if (temp_r0 == -1) {
        return;
    }
    M2C_FIELD(func_0205b8b4(M2C_FIELD(&data_0210f240, s32 *, 0x14), temp_r0), s32 *, 8) = temp_r4;
    if (temp_r4 > 0) {
        var_r1 = 1;
    } else {
        var_r1 = 0;
    }
    func_0206bb4c(temp_r0, var_r1, 0, 0, 0);
}
