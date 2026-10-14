#include "m2c.h"

M2C_UNK func_ov000_021ba708();                      /* extern */
M2C_UNK func_ov000_021bcf44(void *);                /* extern */

void func_0209046c(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0) == 0) {
        return;
    }
    func_ov000_021ba708();
    M2C_FIELD(arg0, s8 *, 0x1B4) = 0;
    func_ov000_021bcf44(arg0 + 0x24);
}
