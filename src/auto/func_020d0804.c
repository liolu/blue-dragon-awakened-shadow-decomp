#include "m2c.h"

void func_020d0804(s32 arg0, s32 arg1) {
    if (arg1 != -1) {
        M2C_FIELD((arg0 + (arg1 * 8)), s32 *, 0xF04) = 0;
    }
}
