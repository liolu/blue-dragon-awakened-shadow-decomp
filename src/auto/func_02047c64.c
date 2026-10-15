#include "m2c.h"

M2C_UNK DWC_Free(M2C_UNK, s32, M2C_UNK);       /* extern */
extern M2C_UNK data_0210e648;

void func_02047c64(void) {
    if (M2C_FIELD(&data_0210e648, s32 *, 4) != 0) {
        DWC_Free(1, M2C_FIELD(&data_0210e648, s32 *, 4), 0);
        M2C_FIELD(&data_0210e648, s32 *, 4) = 0;
    }
    if (M2C_FIELD(&data_0210e648, s32 *, 0) == 0) {
        return;
    }
    DWC_Free(1, M2C_FIELD(&data_0210e648, s32 *, 0), 0);
    M2C_FIELD(&data_0210e648, s32 *, 0) = 0;
}
