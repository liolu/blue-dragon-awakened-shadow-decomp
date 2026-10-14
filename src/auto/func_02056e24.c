#include "m2c.h"

void *func_02059234();                              /* extern */
M2C_UNK func_0206d420(s32);                         /* extern */

void func_02056e24(void) {
    M2C_FIELD(func_02059234(), s8 *, 0x1A8) = 2;
    func_0206d420(*M2C_FIELD(func_02059234(), s32 **, 4));
    M2C_FIELD(func_02059234(), s8 *, 0x1A8) = 0;
}
