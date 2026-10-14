#include "m2c.h"

M2C_UNK func_0207065c();                            /* extern */
extern M2C_UNK data_0210e8e0;

void func_020515ec(void) {
    if (M2C_FIELD(&data_0210e8e0, s32 *, 0x10) != 0) {
        M2C_FIELD(&data_0210e8e0, s32 *, 0xC) = 1;
        return;
    }
    func_0207065c();
}
