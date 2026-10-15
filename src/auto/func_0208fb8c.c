#include "m2c.h"

M2C_UNK func_0207d4cc();                            /* extern */
extern s32 ctrdgi_task_work;

void func_0208fb8c(void) {
    if (ctrdgi_task_work == 0) {
        return;
    }
    if (ctrdgi_task_work != 0) {
        func_0207d4cc();
    }
    ctrdgi_task_work = 0;
}
