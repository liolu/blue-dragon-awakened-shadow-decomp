#include "m2c.h"

M2C_UNK func_0207c42c(M2C_UNK *, void *, M2C_UNK);  /* extern */
M2C_UNK func_0209daf8();                            /* extern */
s32 func_0209db2c(void *);                          /* extern */
extern M2C_UNK data_02110134;
extern u8 data_02167174;
extern M2C_UNK func_0209da64;

void func_0209da88(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x69) == 0) {
        return;
    }
    func_0209daf8(arg0);
    M2C_FIELD(arg0, s32 *, 0x5C) = 3;
    if (func_0209db2c(arg0) == 0) {
        return;
    }
    M2C_FIELD(arg0, M2C_UNK **, 0x4C) = &func_0209da64;
    M2C_FIELD(arg0, s32 *, 0x48) = 0;
    data_02167174 |= 1;
    func_0207c42c(&data_02110134, arg0, 1);
}
