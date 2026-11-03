#include "m2c.h"

s32 func_ov000_021d223c();                                /* extern */

s32 func_ov006_021fd1ec(void) {
    if (func_ov000_021d223c() == 0) {
        return 1;
    }
    return 0;
}
