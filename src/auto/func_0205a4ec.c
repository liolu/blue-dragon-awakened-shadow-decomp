#include "m2c.h"

M2C_UNK func_02009a34(M2C_UNK, s32 *, M2C_UNK);     /* extern */
s32 func_0205a550();                                /* extern */

s32 func_0205a4ec(M2C_UNK arg0, M2C_UNK arg1) {
    s32 sp4;
    s32 sp0;

    if (func_0205a550() == 0) {
        return 0;
    }
    func_02009a34(arg0, &sp4, 4);
    func_02009a34(arg1, &sp0, 4);
    if (sp4 & ~sp0) {
        return 1;
    }
    return 0;
}
