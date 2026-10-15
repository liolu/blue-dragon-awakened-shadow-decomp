#include "m2c.h"

M2C_UNK memcpy(s32, s32, s32);               /* extern */
s32 strlen(s32);                             /* extern */

void gti2BufferWriteData(void *arg0, s32 arg1, s32 arg2) {
    s32 var_r5;

    var_r5 = arg2;
    if ((arg1 != 0) && (var_r5 != 0)) {
        if (var_r5 == -1) {
            var_r5 = strlen(arg1);
        }
        memcpy(M2C_FIELD(arg0, s32 *, 0) + M2C_FIELD(arg0, s32 *, 8), arg1, var_r5);
        M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) + var_r5);
    }
}
