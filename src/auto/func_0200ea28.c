#include "m2c.h"

M2C_UNK func_0200b100();                            /* extern */
M2C_UNK func_0200b20c(M2C_UNK, M2C_UNK *);          /* extern */
s32 func_0200b258(M2C_UNK, M2C_UNK);                /* extern */
extern M2C_UNK data_021039b0;
extern M2C_UNK func_0200e7a8;

void func_0200ea28(void) {
    if (M2C_FIELD(&data_021039b0, u16 *, 0) != 0) {
        return;
    }
    M2C_FIELD(&data_021039b0, u16 *, 0) = 1U;
    func_0200b100();
    M2C_FIELD(&data_021039b0, s16 *, 0x10) = 0;
    M2C_FIELD(&data_021039b0, s32 *, 4) = 0;
    M2C_FIELD(&data_021039b0, s32 *, 0x14) = 0;
    M2C_FIELD(&data_021039b0, s16 *, 0x36) = 0;
    M2C_FIELD(&data_021039b0, s16 *, 0x34) = 0;
    M2C_FIELD(&data_021039b0, s16 *, 0x3A) = 0;
    M2C_FIELD(&data_021039b0, s16 *, 0x38) = 0;
    do {

    } while (func_0200b258(6, 1) == 0);
    func_0200b20c(6, &func_0200e7a8);
}
