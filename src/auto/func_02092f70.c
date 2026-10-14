#include "m2c.h"

M2C_UNK func_02006878(u16);                         /* extern */

void func_02092f70(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0xC7) != 0) {
        return;
    }
    if (M2C_FIELD(arg0, u8 *, 0xC6) == 0) {
        return;
    }
    M2C_FIELD(arg0, u8 *, 0xC7) = 1U;
    func_02006878(M2C_FIELD(arg0, u16 *, 0xC4));
}
