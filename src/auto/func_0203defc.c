#include "m2c.h"

M2C_UNK func_0203c924(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_0203d9f4(void *, M2C_UNK, s32);        /* extern */
M2C_UNK func_0203dcd0(void *);                      /* extern */
M2C_UNK func_0203dd30(void *);                      /* extern */

void func_0203defc(void *arg0, M2C_UNK arg1) {
    func_0203d9f4(arg0, arg1, M2C_FIELD(arg0, s32 *, 0x81C));
    func_0203dcd0(arg0);
    func_0203c924(arg0, 0, 0);
    func_0203dd30(arg0);
    M2C_FIELD(arg0, s8 *, 0x455) = 5;
}
