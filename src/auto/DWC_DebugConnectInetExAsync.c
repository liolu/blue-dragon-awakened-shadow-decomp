#include "m2c.h"

M2C_UNK DWC_AC_SetSpecifyApEx(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK DWC_ConnectInetAsync();                            /* extern */
s32 DWC_GetInetStatus();                                /* extern */
extern M2C_UNK data_0210e718;

void DWC_DebugConnectInetExAsync(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, s32 arg4) {
    DWC_ConnectInetAsync();
    if (M2C_FIELD(&data_0210e718, void **, 4) != NULL) {
        M2C_FIELD(M2C_FIELD(&data_0210e718, void **, 4), s8 *, 0xC) = 1;
    }
    if (DWC_GetInetStatus() != 2) {
        return;
    }
    DWC_AC_SetSpecifyApEx(arg0, arg1, arg2, arg3, arg4);
}
