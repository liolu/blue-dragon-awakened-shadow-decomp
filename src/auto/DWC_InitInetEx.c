#include "m2c.h"

M2C_UNK MI_CpuFill8(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK CPS_SetSslHandshakePriority(M2C_UNK);                     /* extern */
extern M2C_UNK data_0210e718;

void DWC_InitInetEx(void *arg0, s16 arg1, s32 arg2, M2C_UNK arg3) {
    if (M2C_FIELD(&data_0210e718, void **, 4) != NULL) {
        return;
    }
    MI_CpuFill8(arg0, 0, 0x64);
    M2C_FIELD(arg0, s16 *, 8)             = arg1;
    M2C_FIELD(arg0, s16 *, 0xA)           = 1;
    M2C_FIELD(arg0, s16 *, 4)             = 1;
    M2C_FIELD(arg0, s16 *, 6)             = 0;
    M2C_FIELD(arg0, s8 *, 0xC)            = 0;
    M2C_FIELD(arg0, s32 *, 0x10)          = 0;
    M2C_FIELD(&data_0210e718, void **, 4) = arg0;
    CPS_SetSslHandshakePriority(arg3);
}
