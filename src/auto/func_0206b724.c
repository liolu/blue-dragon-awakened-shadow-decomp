#include "m2c.h"

s32 func_0201bd3c();                                /* extern */
void *func_0205b8b4(s32, s32);                      /* extern */
s32 func_0206b614(M2C_UNK, M2C_UNK *);              /* extern */
s32 func_0206b6a0(M2C_UNK, s32, M2C_UNK);           /* extern */
M2C_UNK func_0206bb4c(s32, M2C_UNK, M2C_UNK, s32, s32); /* extern */
extern M2C_UNK data_020fbba4;
extern M2C_UNK data_020fbbac;
extern M2C_UNK data_020fbbb0;
extern M2C_UNK data_0210f240;

void func_0206b724(M2C_UNK arg0) {
    M2C_UNK var_r1;
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r5;
    s32 temp_r6;

    func_0206b614(arg0, &data_020fbba4);
    temp_r5 = func_0201bd3c();
    func_0206b614(arg0, &data_020fbbac);
    temp_r4 = func_0201bd3c();
    temp_r6 = func_0206b614(arg0, &data_020fbbb0);
    temp_r0 = func_0206b6a0(0, temp_r4, 0);
    if (temp_r0 == -1) {
        return;
    }
    M2C_FIELD(func_0205b8b4(M2C_FIELD(&data_0210f240, s32 *, 0x14), temp_r0), s32 *, 8) = temp_r5;
    if (temp_r5 > 0) {
        var_r1 = 1;
    } else {
        var_r1 = 0;
    }
    func_0206bb4c(temp_r0, var_r1, 0, temp_r6, 0);
}
