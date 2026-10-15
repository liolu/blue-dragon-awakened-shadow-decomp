#include "m2c.h"

M2C_UNK OS_Terminate();                            /* extern */
M2C_UNK TP_Init();                            /* extern */
s32 TP_GetUserInfo(M2C_UNK *);                       /* extern */
M2C_UNK TP_SetCalibrateParam(M2C_UNK *);                   /* extern */

void func_0207e4c4(void *arg0) {
    u8 sp0[8];

    TP_Init();
    if (TP_GetUserInfo(sp0) == 0) {
        OS_Terminate();
    } else {
        TP_SetCalibrateParam(sp0);
    }
    M2C_FIELD(arg0, s8 *, 0x20) = 1;
}
