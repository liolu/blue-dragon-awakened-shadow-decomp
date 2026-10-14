#include "m2c.h"

extern void *data_021670a8;

void func_020b59cc(void) {
    if (data_021670a8 == NULL) {
        return;
    }
    if (M2C_FIELD(data_021670a8, u8 *, 0x20) == 0) {
        M2C_FIELD(data_021670a8, u8 *, 0x20) = 1U;
    }
}
