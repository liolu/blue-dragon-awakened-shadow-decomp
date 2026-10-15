#include "m2c.h"

M2C_UNK MI_CpuFill8(void *, M2C_UNK, s32);        /* extern */
s32 func_0204757c();                                /* extern */
void *DWC_Alloc(M2C_UNK, s32);                  /* extern */
extern M2C_UNK data_0210e648;

s32 func_020478a0(s32 arg0, s32 arg1) {
    void *temp_r0;

    M2C_FIELD(&data_0210e648, void **, 4) = DWC_Alloc(1, func_0204757c());
    temp_r0                               = DWC_Alloc(1, 0x794);
    M2C_FIELD(&data_0210e648, void **, 0) = temp_r0;
    MI_CpuFill8(temp_r0, 0, 0x794);
    M2C_FIELD(M2C_FIELD(&data_0210e648, void **, 0), s32 *, 0)     = arg0;
    M2C_FIELD(M2C_FIELD(&data_0210e648, void **, 0), s32 *, 0x790) = arg1;
    M2C_FIELD(&data_0210e648, s32 *, 8)                            = 0;
    return 1;
}
