#include "m2c.h"

s32 func_ov000_021d2228();                                /* extern */

s32 func_ov000_021d223c(void) {
    if (func_ov000_021d2228() != 0) {
        return 1;
    }
    return 0;
}
