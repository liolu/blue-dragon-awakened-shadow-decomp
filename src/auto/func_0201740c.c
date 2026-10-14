#include "m2c.h"
#include "engine.h"

void func_02017430(M2C_UNK);
void func_0201a034(M2C_UNK);

extern M2C_UNK data_02105490;

void func_0201740c(void) {
    func_0201a034(1);
    M2C_FIELD(&data_02105490, s32 *, 0xC) = 1;
    func_02017430(1);
}
