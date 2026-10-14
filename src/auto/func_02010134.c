#include "m2c.h"

M2C_UNK func_0200b100();                            /* extern */
M2C_UNK func_0200b20c(M2C_UNK, M2C_UNK *);          /* extern */
s32 func_0200b258(M2C_UNK, M2C_UNK);                /* extern */
extern M2C_UNK data_02103a18;
extern M2C_UNK func_020103a8;

void func_02010134(void) {
    if (M2C_FIELD(&data_02103a18, u16 *, 0) != 0) {
        return;
    }
    M2C_FIELD(&data_02103a18, u16 *, 0) = 1U;
    M2C_FIELD(&data_02103a18, s32 *, 0xC) = 0;
    M2C_FIELD(&data_02103a18, s32 *, 0x10) = 0;
    M2C_FIELD(&data_02103a18, s32 *, 0x28) = 0;
    M2C_FIELD(&data_02103a18, s32 *, 0x14) = 0;
    M2C_FIELD(&data_02103a18, s32 *, 0x18) = 0;
    func_0200b100();
    do {

    } while (func_0200b258(5, 1) == 0);
    func_0200b20c(5, &func_020103a8);
}
