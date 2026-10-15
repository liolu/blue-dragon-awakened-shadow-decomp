#include "m2c.h"

M2C_UNK OS_LockMutex(void *);                      /* extern */
M2C_UNK OS_UnlockMutex(void *);                      /* extern */
extern void *data_0210e678;

s32 func_0204b46c(void) {
    s32 temp_r4;

    OS_LockMutex(data_0210e678 + 0x11DC);
    temp_r4 = M2C_FIELD(data_0210e678, s32 *, 0x1000);
    OS_UnlockMutex(data_0210e678 + 0x11DC);
    return temp_r4;
}
