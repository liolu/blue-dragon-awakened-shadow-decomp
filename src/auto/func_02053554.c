#include "m2c.h"

M2C_UNK DWC_Free(M2C_UNK, s32, M2C_UNK);       /* extern */
M2C_UNK func_02057794();                            /* extern */
M2C_UNK func_02059224(M2C_UNK);                     /* extern */
extern M2C_UNK data_0210e8e0;

void func_02053554(void) {
    func_02059224(0);
    if (M2C_FIELD(&data_0210e8e0, s32 *, 8) != 0) {
        DWC_Free(4, M2C_FIELD(&data_0210e8e0, s32 *, 8), 0);
        M2C_FIELD(&data_0210e8e0, s32 *, 8) = 0;
    }
    func_02057794();
    if (M2C_FIELD(&data_0210e8e0, s32 *, 0) != 0) {
        DWC_Free(4, M2C_FIELD(&data_0210e8e0, s32 *, 0), 0);
        M2C_FIELD(&data_0210e8e0, s32 *, 0) = 0;
    }
    M2C_FIELD(&data_0210e8e0, s8 *, 0x1C) = 0;
    M2C_FIELD(&data_0210e8e0, s8 *, 0x1D) = 0;
}
