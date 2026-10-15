#include "m2c.h"

M2C_UNK FreeElement(void *, s32);                 /* extern */
M2C_UNK gsifree(void *);                      /* extern */

void ArrayFree(void *arg0) {
    s32 var_r4;

    var_r4 = 0;
    if ((s32) M2C_FIELD(arg0, s32 *, 0) > 0) {
        do {
            FreeElement(arg0, var_r4);
            var_r4 += 1;
        } while (var_r4 < (s32) M2C_FIELD(arg0, s32 *, 0));
    }
    gsifree(M2C_FIELD(arg0, void **, 0x14));
    gsifree(arg0);
}
