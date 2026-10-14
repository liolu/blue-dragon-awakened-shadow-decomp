#include "m2c.h"

s32 func_020c6d30();                                /* extern */

s32 func_020d94ac(s32 *arg0) {
    if (*arg0 == 0) {
        return 0;
    }
    if (func_020c6d30() > 0) {
        return 1;
    }
    return 0;
}
