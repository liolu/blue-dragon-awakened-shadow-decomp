#include "m2c.h"

extern s32 data_0210bd70;

s32 func_020336f4(s32 arg0) {
    s32 temp_r2;

    temp_r2 = data_0210bd70;
    data_0210bd70 = arg0;
    return temp_r2;
}
