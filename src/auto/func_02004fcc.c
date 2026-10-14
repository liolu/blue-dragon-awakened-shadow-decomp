#include "m2c.h"
#include "engine.h"

void func_020090e0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_0200979c(M2C_UNK, M2C_UNK, M2C_UNK);

extern s32 data_020e5b44;

void func_02004fcc(s32 arg0, s32 arg1, s32 arg2) {
    if ((data_020e5b44 != -1) && ((u32) arg2 > 0x1CU)) {
        func_020090e0(data_020e5b44, arg0, arg1 + 0x05000000, arg2);
        return;
    }
    func_0200979c(arg0, arg1 + 0x05000000, arg2);
}
