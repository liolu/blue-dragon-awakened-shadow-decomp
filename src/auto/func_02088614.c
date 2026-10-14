#include "m2c.h"

s32 func_ov000_021ca71c();                          /* extern */
s32 func_ov000_021ca74c();                          /* extern */

s32 func_02088614(void) {
    if ((func_ov000_021ca71c() != 0) || (func_ov000_021ca74c() != 0)) {
        return 1;
    }
    return 0;
}
