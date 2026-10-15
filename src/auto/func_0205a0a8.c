#include "m2c.h"

M2C_UNK func_0204e430();                            /* extern */
s32 gt2GetOutgoingBufferFreeSpace();                                /* extern */

s32 func_0205a0a8(void) {
    s32 var_r0;

    func_0204e430();
    var_r0 = gt2GetOutgoingBufferFreeSpace() + 0xFFFFFDF9;
    if (var_r0 <= 0) {
        var_r0 = 0;
    }
    return var_r0;
}
