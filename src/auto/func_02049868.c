#include "m2c.h"

M2C_UNK func_02049890(M2C_UNK, M2C_UNK *);          /* extern */
M2C_UNK DWCi_BM_GetWiFiInfo(M2C_UNK *);                   /* extern */

void func_02049868(M2C_UNK arg0) {
    u8 sp0[20];

    DWCi_BM_GetWiFiInfo(sp0);
    func_02049890(arg0, sp0);
}
