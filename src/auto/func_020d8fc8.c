#include "m2c.h"

s32 func_020c47fc();                                /* extern */

s32 func_020d8fc8(s32 *arg0) {
    if (*arg0 == 0) {
        return 0xA;
    }
    return func_020c47fc();
}
