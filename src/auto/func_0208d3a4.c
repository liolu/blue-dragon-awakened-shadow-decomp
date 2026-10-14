#include "m2c.h"

M2C_UNK func_0208b940(void *);                      /* extern */
M2C_UNK func_0208d598(void *);                      /* extern */

void func_0208d3a4(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0x4A8) = 0;
    M2C_FIELD(arg0, u8 *, 0x27) = (u8) (M2C_FIELD(arg0, u8 *, 0x27) & ~2);
    func_0208b940(arg0 + 0x28);
    func_0208d598(arg0);
}
