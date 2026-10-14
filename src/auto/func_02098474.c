#include "m2c.h"

s32 func_0207d4a4(M2C_UNK);                         /* extern */
s32 func_02098460();                                /* extern */
extern s32 data_0216581c;

void func_02098474(void) {
    s32 var_r0;

    if (data_0216581c != 0) {
        return;
    }
    var_r0 = func_0207d4a4(0x680);
    if (var_r0 != 0) {
        var_r0 = func_02098460();
    }
    data_0216581c = var_r0;
}
