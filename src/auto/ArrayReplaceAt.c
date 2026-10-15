#include "m2c.h"

M2C_UNK FreeElement(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK SetElement(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */

void ArrayReplaceAt(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2) {
    FreeElement(arg0, arg2);
    SetElement(arg0, arg1, arg2);
}
