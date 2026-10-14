#include "m2c.h"

M2C_UNK func_ov000_021bb274(void *);                /* extern */
s32 func_ov000_021bb2d4();                          /* extern */

void func_02097ec8(void *arg0) {
    if (func_ov000_021bb2d4() != 0) {
        func_ov000_021bb274(arg0);
    }
    if (M2C_FIELD(arg0, s32 *, 0xA8) != 0) {
        M2C_FIELD(arg0, s32 *, 0xA8) = 0;
        M2C_FIELD(arg0, s32 *, 0xAC) = 0;
    }
}
