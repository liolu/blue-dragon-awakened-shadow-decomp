#include "m2c.h"

M2C_UNK func_020d2684();                            /* extern */
extern M2C_UNK data_021671d0;

void func_020d25d4(void) {
    if (M2C_FIELD(&data_021671d0, s32 *, 0x14) == 0) {
        return;
    }
    func_020d2684();
}
