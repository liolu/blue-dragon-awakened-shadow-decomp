#include "m2c.h"

M2C_UNK OS_YieldThread();                            /* extern */
M2C_UNK OS_Sleep();                            /* extern */
extern M2C_UNK wfailed;

void yield_thread(void) {
    if (M2C_FIELD(&wfailed, s32 *, 0x24) == 0) {
        OS_YieldThread();
        return;
    }
    OS_Sleep();
}
