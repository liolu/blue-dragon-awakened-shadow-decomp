#include "m2c.h"

M2C_UNK func_020805b4(void *, s8, s32);             /* extern */
M2C_UNK func_020805f4(void *, M2C_UNK, M2C_UNK);    /* extern */

void func_02080584(void *arg0) {
    func_020805b4(arg0, M2C_FIELD(arg0, s8 *, 0), M2C_FIELD(arg0, s32 *, 4));
    func_020805f4(arg0, -1, -1);
}
