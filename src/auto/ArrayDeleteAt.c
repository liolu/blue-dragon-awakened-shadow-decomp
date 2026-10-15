#include "m2c.h"

M2C_UNK FreeElement();                            /* extern */
M2C_UNK ArrayRemoveAt(M2C_UNK, M2C_UNK);            /* extern */

void ArrayDeleteAt(M2C_UNK arg0, M2C_UNK arg1) {
    FreeElement();
    ArrayRemoveAt(arg0, arg1);
}
