#include "m2c.h"

extern void *data_0210f060;

s32 func_02059860(s32 arg0) {
    if (data_0210f060 == NULL) {
        return 0;
    }
    M2C_FIELD(data_0210f060, s32 *, 0x600) = arg0;
    return 1;
}
