#include "m2c.h"
#include "engine.h"

void func_02009070(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_020097ec(M2C_UNK, M2C_UNK, M2C_UNK);

extern s32 data_020e5b44;

void func_02005128(s32 arg0, s32 arg1, s32 arg2) {
    if ((data_020e5b44 != -1) && ((u32) arg2 > 0x30U)) {
        func_02009070(data_020e5b44, arg0, arg1 + 0x07000000, arg2);
        return;
    }
    func_020097ec(arg0, arg1 + 0x07000000, arg2);
}
