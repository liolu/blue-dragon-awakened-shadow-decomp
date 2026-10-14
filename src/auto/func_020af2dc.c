#include "m2c.h"

M2C_UNK func_020af320(void *);                      /* extern */
M2C_UNK func_020af3d0();                            /* extern */

void *func_020af2dc(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x14) = 0xD2F0;
    func_020af3d0();
    func_020af320(arg0);
    return arg0;
}
