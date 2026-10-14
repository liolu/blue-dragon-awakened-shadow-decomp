#include "m2c.h"

M2C_UNK func_0205b864();                            /* extern */
M2C_UNK func_0205cb50(void *);                      /* extern */

void func_02066e38(s32 arg0, void *arg1) {
    func_0205cb50(M2C_FIELD(arg1, void **, 0x1C));
    M2C_FIELD(arg1, void **, 0x1C) = NULL;
    func_0205cb50(M2C_FIELD(arg1, void **, 0x2C));
    M2C_FIELD(arg1, void **, 0x2C) = NULL;
    if (M2C_FIELD(arg1, s32 *, 0x3C) != 0) {
        func_0205b864();
        M2C_FIELD(arg1, s32 *, 0x3C) = 0;
    }
    func_0205cb50(arg1);
}
