#include "m2c.h"

M2C_UNK DWC_Alloc(M2C_UNK, M2C_UNK);            /* extern */

void DWCi_GsMalloc(M2C_UNK arg0) {
    DWC_Alloc(5, arg0);
}
