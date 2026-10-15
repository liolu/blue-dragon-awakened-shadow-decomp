#include "m2c.h"

M2C_UNK SBServerFree(s32 *);                       /* extern */
s32 SBServerGetNext(s32);                             /* extern */

void SBFreeDeadList(void *arg0) {
    s32 sp0;
    s32 var_r5;

    var_r5 = M2C_FIELD(arg0, s32 *, 0x7D8);
    if (var_r5 == 0) {
        return;
    }
    sp0 = var_r5;
    if (var_r5 != 0) {
        do {
            var_r5 = SBServerGetNext(var_r5);
            SBServerFree(&sp0);
            sp0 = var_r5;
        } while (var_r5 != 0);
    }
    M2C_FIELD(arg0, s32 *, 0x7D8) = 0;
}
