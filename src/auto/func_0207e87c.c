#include "m2c.h"

M2C_UNK func_02027a70();                            /* extern */
M2C_UNK func_0207d4cc();                            /* extern */

void func_0207e87c(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xC) != 0) {
        func_02027a70();
    }
    if (M2C_FIELD(arg0, s32 *, 0x10) == 0) {
        return;
    }
    func_0207d4cc();
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
}
