#include "engine.h"
#include "m2c.h"

void func_0208fe60(M2C_UNK, M2C_UNK);

extern s32 ctrdgi_task_work;

void CTRDG_SetTaskThreadPriority(s32 arg0) {
    if (ctrdgi_task_work == 0) {
        return;
    }
    func_0208fe60(ctrdgi_task_work, arg0);
}
