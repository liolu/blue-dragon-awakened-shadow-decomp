#include "m2c.h"

M2C_UNK func_0207c344(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK data_02110134;
extern M2C_UNK data_021672bc;

void func_020dce1c(s32 arg0, s32 arg1) {
    M2C_FIELD(&data_021672bc, s32 *, 4) = arg0;
    M2C_FIELD(&data_021672bc, s32 *, 0) = arg1;
    func_0207c344(&data_02110134, 0x17, 0);
    M2C_FIELD(&data_02110134, s8 *, 0x108) = 1;
}
