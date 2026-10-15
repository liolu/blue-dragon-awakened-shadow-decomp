#include "engine.h"
#include "m2c.h"

void func_020900e4(M2C_UNK, M2C_UNK);

extern s32 ctrdgi_task_work;

void func_02090194(s32 arg0) {
    if (ctrdgi_task_work == 0) {
        return;
    }
    func_020900e4(ctrdgi_task_work, arg0);
}
