#include "m2c.h"
#include "engine.h"

void func_02003b58(M2C_UNK);
void func_020092a8(M2C_UNK);

extern s32 data_020e5b44;
extern M2C_UNK data_021018fc;

void func_02005ed4(void) {
    if (data_020e5b44 != -1) {
        func_020092a8(data_020e5b44);
    }
    func_02003b58(M2C_FIELD(&data_021018fc, s32 *, 0xC));
    M2C_FIELD(&data_021018fc, s32 *, 0xC) = 0;
    M2C_FIELD(&data_021018fc, s32 *, 8) = 0;
}
