#include "m2c.h"

M2C_UNK func_ov000_021c5070();                      /* extern */
M2C_UNK func_ov000_021c5424();                      /* extern */

void func_020da240(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        func_ov000_021c5424();
    }
    if (M2C_FIELD(arg0, s32 *, 0) != 0) {
        func_ov000_021c5070();
    }
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
}
