#include "m2c.h"

M2C_UNK DWC_AllocEx(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */

void DWC_Alloc(M2C_UNK arg0, M2C_UNK arg1) {
    DWC_AllocEx(arg0, arg1, 0x20);
}
