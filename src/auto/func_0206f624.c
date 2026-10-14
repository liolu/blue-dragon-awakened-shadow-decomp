#include "m2c.h"

M2C_UNK func_0205b864(s32);                         /* extern */
M2C_UNK func_0205bd64(s32);                         /* extern */
M2C_UNK func_0205c0e0(s32);                         /* extern */
M2C_UNK func_0205c5fc();                            /* extern */
M2C_UNK func_0205cb50(void *);                      /* extern */

void func_0206f624(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x1C) != 0) {
        M2C_FIELD(arg0, s32 *, 0x14) = 1;
        return;
    }
    func_0205c0e0(M2C_FIELD(arg0, s32 *, 0));
    func_0205bd64(M2C_FIELD(arg0, s32 *, 0xC));
    func_0205b864(M2C_FIELD(arg0, s32 *, 0x10));
    func_0205cb50(arg0);
    func_0205c5fc();
}
