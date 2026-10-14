#include "m2c.h"

M2C_UNK func_0208c9b8(void *);                      /* extern */
M2C_UNK func_ov000_021b6ec0(void *);                /* extern */

void func_0208db48(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x18) != 0) {
        func_ov000_021b6ec0(arg0 + 0x4B8);
    }
    func_0208c9b8(arg0);
}
