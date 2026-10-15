#include "m2c.h"

s32 DWCi_BM_SetWiFiInfo(M2C_UNK *, M2C_UNK);              /* extern */
s32 DWCi_AUTH_GetNewWiFiInfo(M2C_UNK *);                       /* extern */

s32 DWCi_AUTH_MakeWiFiID(M2C_UNK arg0) {
    u8 sp0[20];

    if (DWCi_AUTH_GetNewWiFiInfo(sp0) == 0) {
        return 0;
    }
    if (DWCi_BM_SetWiFiInfo(sp0, arg0) != 0) {
        return 1;
    }
    return 0;
}
