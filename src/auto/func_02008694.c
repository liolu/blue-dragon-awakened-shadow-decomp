#include "m2c.h"
#include "engine.h"

M2C_UNK func_0200647c(M2C_UNK);
void func_0200844c(M2C_UNK);

extern M2C_UNK data_02101ce8;

void func_02008694(void) {
    if (M2C_FIELD(&data_02101ce8, u16 *, 0) != 0) {
        return;
    }
    M2C_FIELD(&data_02101ce8, u16 *, 0) = 1U;
    func_0200844c(1);
    M2C_FIELD(&data_02101ce8, s32 *, 4) = 0;
    M2C_FIELD(&data_02101ce8, s32 *, 8) = 0;
    func_0200647c(0x10);
}
