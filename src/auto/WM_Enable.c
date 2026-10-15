#include "m2c.h"

M2C_UNK WMi_EnableEx(M2C_UNK, M2C_UNK);            /* extern */

void WM_Enable(M2C_UNK arg0) {
    WMi_EnableEx(arg0, 0);
}
