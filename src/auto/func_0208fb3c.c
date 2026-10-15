#include "m2c.h"

s32 func_0207d4a4(M2C_UNK);                         /* extern */
s32 func_0208fbbc();                                /* extern */
M2C_UNK CTRDG_SetTaskThreadPriority(M2C_UNK);                     /* extern */
M2C_UNK func_0208fef8();                            /* extern */
extern s32 ctrdgi_task_work;

s32 func_0208fb3c(void) {
    s32 var_r0;

    if (ctrdgi_task_work == 0) {
        var_r0 = func_0207d4a4(0x22C);
        if (var_r0 != 0) {
            var_r0 = func_0208fbbc();
        }
        ctrdgi_task_work = var_r0;
        func_0208fef8();
        CTRDG_SetTaskThreadPriority(0);
        return 1;
    }
    return 0;
}
