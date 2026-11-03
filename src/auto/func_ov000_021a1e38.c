#include "m2c.h"

s32 func_ov000_021a1770();                                /* extern */

s32 func_ov000_021a1e38(void) {
    if (func_ov000_021a1770() != 0) {
        return 1;
    }
    return 0;
}
