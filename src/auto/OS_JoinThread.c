#include "m2c.h"

M2C_UNK OS_SleepThread(void *);                      /* extern */
s32 OS_DisableInterrupts();                                /* extern */
M2C_UNK OS_RestoreInterrupts(s32);                         /* extern */

void OS_JoinThread(void *arg0) {
    s32 temp_r4;

    temp_r4 = OS_DisableInterrupts();
    if (M2C_FIELD(arg0, s32 *, 0x64) != 2) {
        OS_SleepThread(arg0 + 0x9C);
    }
    OS_RestoreInterrupts(temp_r4);
}
