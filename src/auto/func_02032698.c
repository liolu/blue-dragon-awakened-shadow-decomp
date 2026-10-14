#include "m2c.h"
#include "engine.h"

void func_0203284c(M2C_UNK);
void func_020329c0(M2C_UNK, M2C_UNK);
void func_02034ecc(M2C_UNK, M2C_UNK, M2C_UNK);

void func_02032698(s32 arg0, s32 arg1) {
    if ((arg0 != 0) && (M2C_FIELD(arg0, u8 *, 0x2C) != 0)) {
        if (arg1 == 0) {
            func_0203284c(arg0);
            return;
        }
        func_02034ecc(arg0 + 0x1C, 0, arg1);
        func_020329c0(arg0, 0);
        M2C_FIELD(arg0, u8 *, 0x2C) = 2U;
    }
}
