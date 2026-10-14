#include "m2c.h"

M2C_UNK func_0207d1a8(M2C_UNK *, s32);              /* extern */
extern M2C_UNK data_02110288;
extern M2C_UNK data_02110348;

void func_0207cd2c(void) {
    func_0207d1a8(&data_02110348, M2C_FIELD(&data_02110288, s32 *, 0x14));
    M2C_FIELD(&data_02110288, s32 *, 0x14) = 0;
}
