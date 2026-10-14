#include "m2c.h"

M2C_UNK func_02052de4(M2C_UNK, u16, M2C_UNK);       /* extern */
void *func_02059c74();                              /* extern */

void func_0205a06c(M2C_UNK arg0, M2C_UNK arg1) {
    u16 temp_r1;
    void *temp_r0;

    temp_r0 = func_02059c74();
    M2C_FIELD(temp_r0, u8 *, 0x1D) = (u8) M2C_FIELD(temp_r0, u8 *, 0x1E);
    temp_r1 = M2C_FIELD(temp_r0, u16 *, 0x22);
    if ((temp_r1 != 2) && (temp_r1 != 3) && (temp_r1 != 4)) {
        return;
    }
    func_02052de4(arg0, temp_r1, arg1);
}
