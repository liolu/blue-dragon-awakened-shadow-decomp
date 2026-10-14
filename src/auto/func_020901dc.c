#include "m2c.h"

extern void *data_02164f00;

void func_020901dc(s8 arg0) {
    if (data_02164f00 != NULL) {
        M2C_FIELD(data_02164f00, s8 *, 0x1B6) = arg0;
    }
}
