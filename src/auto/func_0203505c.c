#include "m2c.h"

M2C_UNK func_0200714c();                            /* extern */
M2C_UNK func_020072b4();                            /* extern */
extern M2C_UNK data_0210ca1c;

void func_0203505c(void) {
    if (M2C_FIELD(&data_0210ca1c, s32 *, 0x24) == 0) {
        func_0200714c();
        return;
    }
    func_020072b4();
}
