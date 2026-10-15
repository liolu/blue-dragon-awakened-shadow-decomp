#include "m2c.h"

M2C_UNK strncpy(s32, M2C_UNK *, M2C_UNK);     /* extern */
extern M2C_UNK data_020fa8b4;

void func_020598a0(void *arg0, s16 arg1, s32 arg2) {
    strncpy(arg0 + 6, &data_020fa8b4, 2);
    M2C_FIELD(arg0, s16 *, 4) = arg1;
    M2C_FIELD(arg0, s32 *, 0) = arg2;
}
