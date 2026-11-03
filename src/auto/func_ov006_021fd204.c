#include "m2c.h"

s32 func_ov000_021d223c();                                /* extern */

s32 func_ov006_021fd204(void) {
    if (func_ov000_021d223c() == 0) {
        return 120;
    }
    return 0;
}
