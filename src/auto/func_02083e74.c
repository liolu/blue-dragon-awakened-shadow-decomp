#include "m2c.h"

M2C_UNK func_0208b150(s32, u16);                    /* extern */

s32 func_02083e74(void *arg0) {
    s32 var_r1;

    var_r1 = M2C_FIELD(arg0, s32 *, 4);
    if (var_r1 > 0x1F) {
        var_r1 = 0x1F;
    }
    func_0208b150(M2C_FIELD(arg0, s32 *, 0), (u16) var_r1);
    return 0;
}
