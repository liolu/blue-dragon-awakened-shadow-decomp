#include "m2c.h"
#include "engine.h"

void func_02007204(M2C_UNK, M2C_UNK);

extern M2C_UNK data_021019a4;

void func_0203cb1c(s32 arg0) {
    if ((u32) arg0 >= 0x20U) {
        return;
    }
    func_02007204(M2C_FIELD(&data_021019a4, s32 *, 4), arg0);
}
