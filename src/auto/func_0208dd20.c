#include "m2c.h"

M2C_UNK func_0208c610();                            /* extern */

void func_0208dd20(void *arg0) {
    func_0208c610();
    if (M2C_FIELD(arg0, s32 *, 0x194) == 4) {
        M2C_FIELD(arg0, s32 *, 0x194) = 3;
    }
}
