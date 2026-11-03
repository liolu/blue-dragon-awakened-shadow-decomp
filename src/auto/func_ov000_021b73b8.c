#include "m2c.h"

M2C_UNK func_ov000_021b46fc(s32);                         /* extern */
M2C_UNK func_ov000_021ba82c(s32);                         /* extern */

s32 func_ov000_021b73b8(s32 arg0) {
    func_ov000_021ba82c(arg0 + 0x28);
    func_ov000_021b46fc(arg0);
    return arg0;
}
