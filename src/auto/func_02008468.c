#include "m2c.h"

M2C_UNK func_0200627c(M2C_UNK, M2C_UNK *);          /* extern */
M2C_UNK func_0200644c(M2C_UNK);                     /* extern */
M2C_UNK func_0200844c(M2C_UNK);                     /* extern */
extern M2C_UNK data_02101cd8;
extern M2C_UNK func_020084f0;

void func_02008468(void) {
    if (M2C_FIELD(&data_02101cd8, u16 *, 0) != 0) {
        return;
    }
    M2C_FIELD(&data_02101cd8, u16 *, 0) = 1U;
    func_0200844c(0);
    M2C_FIELD(&data_02101cd8, s32 *, 8) = 0;
    M2C_FIELD(&data_02101cd8, s32 *, 0xC) = 0;
    M2C_FIELD((void *)0x04000102, s16 *, 0) = 0;
    M2C_FIELD((void *)0x04000102, s16 *, -2) = 0;
    M2C_FIELD((void *)0x04000102, s16 *, 0) = 0xC1;
    func_0200627c(8, &func_020084f0);
    func_0200644c(8);
    M2C_FIELD(&data_02101cd8, s32 *, 4) = 0;
}
