#include "m2c.h"

s32 func_0205b8ac();                             /* extern */
M2C_UNK func_0205b8b4();                    /* extern */
M2C_UNK func_02071064();                     /* extern */
extern s32 data_0210f8f0;

void func_02071334(void) {
    s32 var_r5;

    if ((data_0210f8f0 == 0) || (func_0205b8ac() == 0)) {
        func_02071064(0);
        return;
    }
    var_r5 = func_0205b8ac(data_0210f8f0) - 1;
    if (var_r5 < 0) {
        return;
    }
    do {
        func_0205b8b4(data_0210f8f0, var_r5);
        func_02071064();
        var_r5 -= 1;
    } while (var_r5 >= 0);
}
