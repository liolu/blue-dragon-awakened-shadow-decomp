#include "m2c.h"

M2C_UNK func_0208fd8c(s32);                         /* extern */
extern s32 *ctrdgi_task_work;

void func_0208fbcc(void) {
    if (ctrdgi_task_work == NULL) {
        func_0208fd8c(1);
        return;
    }
    func_0208fd8c(*ctrdgi_task_work);
}
