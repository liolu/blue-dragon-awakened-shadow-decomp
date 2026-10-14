#include "m2c.h"

M2C_UNK func_02051790(s32);                         /* extern */
M2C_UNK func_02053484();                            /* extern */
M2C_UNK func_02053980(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 func_02057f34();                                /* extern */
void *func_02059234();                              /* extern */
M2C_UNK func_02059244(M2C_UNK);                     /* extern */
extern M2C_UNK data_0210e8e0;

void func_0205192c(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, s32 arg3, s32 arg4) {
    void *temp_r4;

    func_02053980(2, arg0, arg1, arg2);
    M2C_FIELD(func_02059234(), s32 *, 0x46C) = arg3;
    M2C_FIELD(func_02059234(), s32 *, 0x470) = arg4;
    temp_r4 = func_02059234();
    M2C_FIELD(temp_r4, s32 *, 0xF4) = (s32) M2C_FIELD(func_02059234(), s32 *, 0x200);
    M2C_FIELD(func_02059234(), s32 *, 0x2F0) = 1;
    M2C_FIELD(func_02059234(), s8 *, 0xE) = 0;
    M2C_FIELD(&data_0210e8e0, s8 *, 0x1D) = 0;
    func_02059244(0xA);
    func_02053484();
    if (func_02057f34() != 0) {
        return;
    }
    if (M2C_FIELD(func_02059234(), s32 *, 0x10) != 0) {
        return;
    }
    func_02051790(M2C_FIELD(func_02059234(), s32 *, 0x200));
}
