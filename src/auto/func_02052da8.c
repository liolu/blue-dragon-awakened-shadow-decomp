#include "m2c.h"

void *func_02059234();                              /* extern */
M2C_UNK func_02071c70(s32);                         /* extern */

void func_02052da8(void) {
    if (M2C_FIELD(func_02059234(), u8 *, 0x15) == 2) {
        return;
    }
    M2C_FIELD(func_02059234(), s8 *, 0x14) = 0;
    M2C_FIELD(func_02059234(), s8 *, 0x16) = 0;
    func_02071c70(M2C_FIELD(func_02059234(), s32 *, 0x10));
}
