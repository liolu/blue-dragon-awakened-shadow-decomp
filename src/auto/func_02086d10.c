#include "m2c.h"

s32 func_0208a680(s32);                             /* extern */
s32 func_020bec48();                                /* extern */

s32 func_02086d10(s32 *arg0) {
    s32 var_r4;

    var_r4 = -1;
    if (func_0208a680(*arg0) != 0) {
        var_r4 = func_020bec48();
    }
    return var_r4;
}
