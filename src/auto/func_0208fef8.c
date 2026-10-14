#include "m2c.h"

M2C_UNK func_0208ff30(s32, s32);                    /* extern */
extern s32 data_02164efc;

void func_0208fef8(void) {
    s32 var_r5;

    if (data_02164efc == 0) {
        return;
    }
    var_r5 = 0;
    do {
        func_0208ff30(data_02164efc, var_r5);
        var_r5 += 1;
    } while (var_r5 < 3);
}
