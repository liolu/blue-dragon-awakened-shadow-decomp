#include "m2c.h"

s32 *func_0203bf34();                               /* extern */

void func_0203bf18(s32 arg0, void *arg1) {
    s32 *temp_r0;

    temp_r0 = func_0203bf34();
    if (temp_r0 != NULL) {
        *temp_r0 = M2C_FIELD(arg1, s32 *, 0x7C);
    }
}
