#include "m2c.h"

void func_0208db74(void *arg0, s16 arg1, s16 arg2) {
    M2C_FIELD(arg0, s16 *, 0x1C)  = arg1;
    M2C_FIELD(arg0, s16 *, 0x1E)  = arg2;
    M2C_FIELD(arg0, s16 *, 0x4CC) = arg1;
    M2C_FIELD(arg0, s16 *, 0x4CE) = arg2;
}
