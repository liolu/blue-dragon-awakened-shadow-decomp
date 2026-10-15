#include "m2c.h"

M2C_UNK WM_SetPortCallback(u16, M2C_UNK, M2C_UNK);       /* extern */

s32 WM_EndDataSharing(void *arg0) {
    if (arg0 == NULL) {
        return 6;
    }
    if (M2C_FIELD(arg0, u16 *, 0x80E) == 0) {
        return 3;
    }
    WM_SetPortCallback(M2C_FIELD(arg0, u16 *, 0x816), 0, 0);
    M2C_FIELD(arg0, u16 *, 0x80E) = 0U;
    M2C_FIELD(arg0, s16 *, 0x81C) = 0;
    return 0;
}
