#include "m2c.h"

s32 func_02099c64(s32 arg0, s32 arg1) {
    if ((arg1 < 0) || (arg1 >= 2)) {
        return 0;
    }
    return (arg1 * 0x38) + (arg0 + 4);
}
