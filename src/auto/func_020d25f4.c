#include "m2c.h"

M2C_UNK func_020d283c();                            /* extern */
M2C_UNK func_020d2e0c();                            /* extern */
extern M2C_UNK data_021671d0;

void func_020d25f4(void) {
    if (M2C_FIELD(&data_021671d0, s32 *, 0x14) != 0) {
        func_020d283c();
    }
    func_020d2e0c();
}
