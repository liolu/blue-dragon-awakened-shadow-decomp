#include "m2c.h"

M2C_UNK func_0202c250(M2C_UNK, void *, M2C_UNK);    /* extern */

void func_0202f554(s32 *arg0) {
    s32 temp_r0;
    s32 var_r4;
    void *temp_r1;

    temp_r0 = *arg0;
    var_r4 = 0;
    if (!(temp_r0 & 4)) {
        var_r4 = 1;
    }
    if ((temp_r0 & 0x20) && !(temp_r0 & 8)) {
        if (var_r4 != 0) {
            func_0202c250(0x1C, ((s8 *)arg0 + 0x4C), 3);
            var_r4 = 0;
        }
        func_0202c250(0x1B, ((s8 *)arg0 + 0x10), 3);
    }
    if (!(*arg0 & 2)) {
        temp_r1 = ((s8 *)arg0 + 0x28);
        if (var_r4 != 0) {
            func_0202c250(0x19, temp_r1, 0xC);
        } else {
            func_0202c250(0x1A, temp_r1, 9);
        }
    } else if (var_r4 != 0) {
        func_0202c250(0x1C, ((s8 *)arg0 + 0x4C), 3);
    }
    if (*arg0 & 1) {
        return;
    }
    func_0202c250(0x1B, ((s8 *)arg0 + 4), 3);
}
