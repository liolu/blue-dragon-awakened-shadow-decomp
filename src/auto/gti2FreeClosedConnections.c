#include "m2c.h"

s32 ArrayLength(s32);                             /* extern */
s32 *ArrayNth(s32, s32);                       /* extern */
M2C_UNK gti2FreeSocketConnection(s32);                         /* extern */

void gti2FreeClosedConnections(void *arg0) {
    s32 var_r4;

    var_r4 = ArrayLength(M2C_FIELD(arg0, s32 *, 0x10)) - 1;
    if (var_r4 < 0) {
        return;
    }
    do {
        gti2FreeSocketConnection(*ArrayNth(M2C_FIELD(arg0, s32 *, 0x10), var_r4));
        var_r4 -= 1;
    } while (var_r4 >= 0);
}
