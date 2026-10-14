#include "m2c.h"

M2C_UNK func_0200647c(M2C_UNK);                     /* extern */
extern M2C_UNK data_02101cf4;

void func_02008a84(void) {
    if (M2C_FIELD(&data_02101cf4, u16 *, 0) != 0) {
        return;
    }
    M2C_FIELD(&data_02101cf4, u16 *, 0) = 1U;
    M2C_FIELD(&data_02101cf4, s32 *, 0xC) = 0;
    M2C_FIELD(&data_02101cf4, s32 *, 0x10) = 0;
    func_0200647c(4);
    M2C_FIELD(&data_02101cf4, s32 *, 8) = 0;
    M2C_FIELD(&data_02101cf4, s32 *, 4) = 0;
}
