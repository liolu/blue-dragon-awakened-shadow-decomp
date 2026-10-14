#include "m2c.h"

s32 func_0203bd34();                                /* extern */
extern M2C_UNK data_0210ca7c;

s32 func_0203bd00(s32 arg0, s32 arg1) {
    if (func_0203bd34() == 0) {
        return -0x27;
    }
    M2C_FIELD(&data_0210ca7c, s32 *, 0) = arg0;
    M2C_FIELD(&data_0210ca7c, s32 *, 4) = arg1;
    return 0;
}
