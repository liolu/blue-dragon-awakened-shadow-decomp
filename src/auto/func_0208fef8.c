#include "m2c.h"

M2C_UNK func_0208ff30(s32, s32);                    /* extern */
extern s32 ctrdgi_task_work;

void func_0208fef8(void) {
    s32 var_r5;

    if (ctrdgi_task_work == 0) {
        return;
    }
    var_r5 = 0;
    do {
        func_0208ff30(ctrdgi_task_work, var_r5);
        var_r5 += 1;
    } while (var_r5 < 3);
}
