#include "m2c.h"

extern M2C_UNK data_0210e708;

void func_0204cb08(s32 arg0, s32 arg1) {
    if (M2C_FIELD(&data_0210e708, s32 *, 0) != 9) {
        M2C_FIELD(&data_0210e708, s32 *, 0) = arg0;
        M2C_FIELD(&data_0210e708, s32 *, 4) = arg1;
    }
}
