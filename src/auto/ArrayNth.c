#include "m2c.h"

s32 ArrayNth(void *arg0, s32 arg1) {
    if ((arg1 < 0) || (arg1 >= (s32) M2C_FIELD(arg0, s32 *, 0))) {
        return 0;
    }
    return (M2C_FIELD(arg0, s32 *, 8) * arg1) + M2C_FIELD(arg0, s32 *, 0x14);
}
