#include "m2c.h"

extern u16 data_02104360;

s32 func_020125cc(void) {
    if (data_02104360 != 0) {
        return 0;
    }
    return 3;
}
