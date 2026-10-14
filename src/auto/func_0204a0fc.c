#include "m2c.h"

M2C_UNK func_02006fe4(void *);                      /* extern */
M2C_UNK func_020077e8(void *);                      /* extern */
M2C_UNK func_0200786c(void *);                      /* extern */

void func_0204a0fc(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x1000) != 0xFF) {
        return;
    }
    func_020077e8(arg0 + 0x1BF8);
    M2C_FIELD(arg0, s32 *, 0x1C10) = 1;
    func_0200786c(arg0 + 0x1BF8);
    if (M2C_FIELD(arg0, s32 *, 0x1BA4) == 0) {
        return;
    }
    func_02006fe4(arg0 + 0x1B38);
}
