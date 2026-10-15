#include "m2c.h"

M2C_UNK func_0207d4cc();                            /* extern */

void ACSSBADX_DestroyAdxt(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 4) == 0) {
        return;
    }
    func_0207d4cc();
    M2C_FIELD(arg0, s32 *, 4) = 0;
}
