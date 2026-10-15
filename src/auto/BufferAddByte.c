#include "m2c.h"

void BufferAddByte(s8 **arg0, s8 arg1, s32 *arg2) {
    **arg0 = arg1;
    *arg2 += 1;
    *arg0 += 1;
}
