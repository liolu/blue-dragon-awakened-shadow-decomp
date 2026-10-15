#include "engine.h"
#include "m2c.h"

void func_020d8500(M2C_UNK, M2C_UNK);

extern M2C_UNK data_0216722c;

void func_020d8548(s32 arg0) {
    if (M2C_FIELD(&data_0216722c, s32 *, 8) == 0) {
        return;
    }
    func_020d8500(M2C_FIELD(&data_0216722c, s32 *, 8), arg0);
}
