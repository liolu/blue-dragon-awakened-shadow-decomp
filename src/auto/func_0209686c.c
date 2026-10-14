#include "m2c.h"

M2C_UNK func_02096934(void *, M2C_UNK);             /* extern */
M2C_UNK func_ov000_021c5070();                      /* extern */

void func_0209686c(void *arg0) {
    func_02096934(arg0, 1);
    if (M2C_FIELD(arg0, s32 *, 0x34) == 0) {
        return;
    }
    func_ov000_021c5070();
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
}
