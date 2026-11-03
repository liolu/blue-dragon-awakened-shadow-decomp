#include "m2c.h"

M2C_UNK strcpy(s32, s32);                    /* extern */

void func_ov000_021c5d38(void *arg0) {
    strcpy(M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 4));
}
