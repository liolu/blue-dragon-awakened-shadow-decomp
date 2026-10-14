#include "m2c.h"

M2C_UNK func_0205b864(s32);                         /* extern */
void *func_0205cf2c();                              /* extern */
M2C_UNK func_0206d114(s32);                         /* extern */

s32 func_0205dc84(void) {
    void *temp_r0;

    temp_r0 = func_0205cf2c();
    if (M2C_FIELD(temp_r0, s32 *, 0xC) == 0) {
        return 3;
    }
    func_0206d114(M2C_FIELD(temp_r0, s32 *, 0));
    func_0205b864(M2C_FIELD(temp_r0, s32 *, 8));
    func_0205b864(M2C_FIELD(temp_r0, s32 *, 4));
    M2C_FIELD(temp_r0, s32 *, 0xC) = 0;
    return 0;
}
