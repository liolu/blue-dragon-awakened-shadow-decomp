#include "m2c.h"

M2C_UNK OS_LockMutex(void *);                      /* extern */
M2C_UNK OS_UnlockMutex(void *);                      /* extern */
extern void *data_0210e678;

void func_0204c460(s32 arg0) {
    OS_LockMutex(data_0210e678 + 0x11DC);
    M2C_FIELD(data_0210e678, s32 *, 0x1000) = arg0;
    OS_UnlockMutex(data_0210e678 + 0x11DC);
}
