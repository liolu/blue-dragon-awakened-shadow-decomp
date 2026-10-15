#include "m2c.h"

M2C_UNK ArrayInsertAt(s32 *, M2C_UNK, s32);         /* extern */

void ArrayAppend(s32 *arg0, M2C_UNK arg1) {
    if (arg0 == NULL) {
        return;
    }
    ArrayInsertAt(arg0, arg1, *arg0);
}
