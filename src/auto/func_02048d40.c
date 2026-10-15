#include "m2c.h"

M2C_UNK OS_LockMutex(s32);                         /* extern */
M2C_UNK OS_UnlockMutex(s32);                         /* extern */
extern M2C_UNK data_0210e654;

s32 func_02048d40(void) {
    s32 temp_r4;

    if (M2C_FIELD(&data_0210e654, void **, 8) == NULL) {
        return 0x16;
    }
    OS_LockMutex(M2C_FIELD(&data_0210e654, void **, 8) + 0x13D8);
    temp_r4 = M2C_FIELD(M2C_FIELD(&data_0210e654, void **, 8), s32 *, 0x1004);
    OS_UnlockMutex(M2C_FIELD(&data_0210e654, void **, 8) + 0x13D8);
    return temp_r4;
}
