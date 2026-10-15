#include "engine.h"
#include "m2c.h"

void func_0209013c(M2C_UNK, M2C_UNK);

extern s32 ctrdgi_task_work;

void func_020901b8(s32 arg0) {
    if (ctrdgi_task_work == 0) {
        return;
    }
    func_0209013c(ctrdgi_task_work, arg0);
}
