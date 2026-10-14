#include "m2c.h"

void *func_0202d254(void *arg0, u32 arg1) {
    if ((arg0 != NULL) && (arg1 < (u32) M2C_FIELD(arg0, u8 *, 7))) {
        return arg0 + M2C_FIELD(arg0, u16 *, 0xA) + (arg1 * 0x10);
    }
    return NULL;
}
