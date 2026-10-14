#include "m2c.h"

M2C_UNK func_020d1a1c(void *);                      /* extern */

void func_020d1f8c(void *arg0) {
    if (M2C_FIELD(arg0, s8 *, 0x95C) == -1) {
        return;
    }
    func_020d1a1c(arg0 + 0x960);
}
