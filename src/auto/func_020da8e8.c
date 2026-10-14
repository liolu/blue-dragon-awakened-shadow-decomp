#include "m2c.h"

extern s32 data_021672ac;

void func_020da8e8(s32 arg0, s8 arg1) {
    if (data_021672ac != 0) {
        M2C_FIELD((data_021672ac + arg0), s8 *, 0x138) = arg1;
    }
}
