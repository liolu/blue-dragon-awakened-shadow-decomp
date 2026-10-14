#include "m2c.h"

M2C_UNK func_0200d138();                            /* extern */
extern s32 data_02103938;

void func_0200cb18(s32 arg0) {
    if (data_02103938 != 0) {
        return;
    }
    data_02103938 = 1;
    func_0200d138(arg0);
}
