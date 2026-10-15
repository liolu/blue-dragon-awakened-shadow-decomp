#include "m2c.h"

M2C_UNK ArrayFree();                         /* extern */
s32 ArrayLength();                             /* extern */
s32 *ArrayNth();                       /* extern */
M2C_UNK SBReleaseStr();                 /* extern */

void FreeKeyList(void *arg0) {
    s32 var_r4;

    if (M2C_FIELD(arg0, s32 *, 8) == 0) {
        return;
    }
    var_r4 = 0;
    if (ArrayLength() > 0) {
        do {
            SBReleaseStr(arg0, *ArrayNth(M2C_FIELD(arg0, s32 *, 8), var_r4));
            var_r4 += 1;
        } while (var_r4 < ArrayLength(M2C_FIELD(arg0, s32 *, 8)));
    }
    ArrayFree(M2C_FIELD(arg0, s32 *, 8));
    M2C_FIELD(arg0, s32 *, 8) = 0;
}
