#include "m2c.h"

M2C_UNK OS_JoinThread(void *);                      /* extern */
M2C_UNK OS_LockMutex(s32);                         /* extern */
M2C_UNK OS_UnlockMutex(void *);                      /* extern */
M2C_UNK func_0204a0fc();                            /* extern */
extern M2C_UNK data_0210e654;

void func_02048c2c(void) {
    if (M2C_FIELD(&data_0210e654, void **, 8) == NULL) {
        return;
    }
    OS_LockMutex(M2C_FIELD(&data_0210e654, void **, 8) + 0x13D8);
    M2C_FIELD(M2C_FIELD(&data_0210e654, void **, 8), s32 *, 0x13F0) = 1;
    OS_UnlockMutex(M2C_FIELD(&data_0210e654, void **, 8) + 0x13D8);
    if (M2C_FIELD(M2C_FIELD(&data_0210e654, void **, 8), s32 *, 0x1314) != 0) {
        func_0204a0fc();
    }
    if (M2C_FIELD(M2C_FIELD(&data_0210e654, void **, 8), s32 *, 0x1384) == 0) {
        return;
    }
    OS_JoinThread(M2C_FIELD(&data_0210e654, void **, 8) + 0x1318);
}
