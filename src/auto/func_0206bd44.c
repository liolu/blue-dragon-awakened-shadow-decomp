#include "m2c.h"

s32 *ArrayNth(s32);                            /* extern */
extern M2C_UNK serverreqs;

s32 func_0206bd44(void *arg0, s32 arg1) {
    void *var_r0;

    var_r0 = arg0;
    if (var_r0 == NULL) {
        var_r0 = M2C_FIELD(&serverreqs, void **, 0xC);
    }
    if (var_r0 == NULL) {
        return arg1;
    }
    return *ArrayNth(M2C_FIELD(var_r0, s32 *, 0x20));
}
