#include "m2c.h"

void func_020bcc78(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, s32 *, 0x10) = arg1;
    if ((s32) M2C_FIELD(arg0, s32 *, 8) > arg1) {
        M2C_FIELD(arg0, s32 *, 8) = arg1;
    }
}
