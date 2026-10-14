#include "m2c.h"

s32 func_0208b308(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s32 *, 0x40) != 2) {
        return 0;
    }
    return (arg1 * 0x18) + M2C_FIELD(arg0, s32 *, 0xC);
}
