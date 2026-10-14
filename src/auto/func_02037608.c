#include "m2c.h"

M2C_UNK func_020070e0(s32);                         /* extern */
M2C_UNK func_0200714c();                            /* extern */
void *func_02036c04();                              /* extern */

void func_02037608(void) {
    void *temp_r0;

    temp_r0 = func_02036c04();
    if (temp_r0 == NULL) {
        return;
    }
    func_0200714c();
    M2C_FIELD(temp_r0, s8 *, 8) = 0;
    if ((u32) (M2C_FIELD(temp_r0, s32 *, 4) - 1) > 1U) {
        return;
    }
    M2C_FIELD(temp_r0, s32 *, 4) = 0;
    func_020070e0(M2C_FIELD(temp_r0, s32 *, 0));
}
