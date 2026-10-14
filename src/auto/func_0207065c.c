#include "m2c.h"

M2C_UNK func_0205b864();                            /* extern */
extern s32 data_0210f8f0;

void func_0207065c(void) {
    if (data_0210f8f0 == 0) {
        return;
    }
    func_0205b864();
    data_0210f8f0 = 0;
}
