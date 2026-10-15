#include "m2c.h"

M2C_UNK WMi_InitializeEx(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

void WM_Initialize(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2) {
    WMi_InitializeEx(arg0, arg1, arg2, 0);
}
