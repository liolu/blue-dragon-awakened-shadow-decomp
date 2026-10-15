#include "m2c.h"

s32 ArrayLength();                                /* extern */
M2C_UNK ArrayDeleteAt(M2C_UNK, s32);                /* extern */

void ArrayClear(M2C_UNK arg0) {
    s32 var_r4;

    var_r4 = ArrayLength() - 1;
    if (var_r4 < 0) {
        return;
    }
    do {
        ArrayDeleteAt(arg0, var_r4);
        var_r4 -= 1;
    } while (var_r4 >= 0);
}
