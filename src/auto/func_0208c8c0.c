#include "m2c.h"
#include "engine.h"

void func_020825cc(M2C_UNK, M2C_UNK);

extern s32 data_02164e04;
extern M2C_UNK data_02164ee4;

void func_0208c8c0(void) {
    if (M2C_FIELD(&data_02164ee4, s32 *, 0x10) == 0) {
        return;
    }
    func_020825cc(data_02164e04, M2C_FIELD(&data_02164ee4, s32 *, 0x10));
    M2C_FIELD(&data_02164ee4, s32 *, 0x10) = 0;
    M2C_FIELD(&data_02164ee4, s16 *, 0) = 0;
}
