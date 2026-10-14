#include "m2c.h"

M2C_UNK func_0202c250(M2C_UNK, void *, M2C_UNK);    /* extern */

void func_0202f498(s32 *arg0) {
    s32 temp_r0;

    temp_r0 = *arg0;
    if (!(temp_r0 & 4)) {
        if (!(temp_r0 & 2)) {
            func_0202c250(0x19, ((s8 *)arg0 + 0x28), 0xC);
        } else {
            func_0202c250(0x1C, ((s8 *)arg0 + 0x4C), 3);
        }
    } else if (!(temp_r0 & 2)) {
        func_0202c250(0x1A, ((s8 *)arg0 + 0x28), 9);
    }
    if (*arg0 & 1) {
        return;
    }
    func_0202c250(0x1B, ((s8 *)arg0 + 4), 3);
}
