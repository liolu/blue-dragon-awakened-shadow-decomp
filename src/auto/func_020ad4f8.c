#include "m2c.h"

M2C_UNK func_020ad53c(void *);                      /* extern */
M2C_UNK func_020ad5f4();                            /* extern */

void *func_020ad4f8(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x14) = 0x4650;
    func_020ad5f4();
    func_020ad53c(arg0);
    return arg0;
}
