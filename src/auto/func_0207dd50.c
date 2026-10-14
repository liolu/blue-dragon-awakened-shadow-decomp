#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_02110430;

void func_0207dd50(s32 arg0, s32 arg1) {
    if ((arg0 == 0) && (arg1 == 0)) {
        M2C_FIELD(&data_02110430, u8 *, 1) = 0U;
        return;
    }
    if (arg0 != 0) {
        M2C_FIELD(&data_02110430, u8 *, 1) = (u8) (M2C_FIELD(&data_02110430, u8 *, 1) | (1 << (u8) arg1));
        return;
    }
    M2C_FIELD(&data_02110430, u8 *, 1) = (u8) (M2C_FIELD(&data_02110430, u8 *, 1) & ~(1 << (u8) arg1));
}
