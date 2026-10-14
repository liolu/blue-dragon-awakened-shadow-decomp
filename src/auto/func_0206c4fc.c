#include "m2c.h"

M2C_UNK func_0206f624(void *);                      /* extern */

s32 func_0206c4fc(void *arg0) {
    if (arg0 == NULL) {
        return 1;
    }
    if (M2C_FIELD(arg0, M2C_UNK (**)(), 0x24) == NULL) {
        return 1;
    }
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) + 1);
    M2C_FIELD(arg0, M2C_UNK (**)(), 0x24)(arg0);
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) - 1);
    if ((M2C_FIELD(arg0, s32 *, 0x14) != 0) && (M2C_FIELD(arg0, s32 *, 0x1C) == 0)) {
        func_0206f624(arg0);
        return 0;
    }
    return 1;
}
