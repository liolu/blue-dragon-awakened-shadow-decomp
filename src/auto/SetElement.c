#include "m2c.h"

M2C_UNK memcpy(s32, M2C_UNK, s32);           /* extern */
s32 ArrayNth(void *, M2C_UNK);                 /* extern */

void SetElement(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    memcpy(ArrayNth(arg0, arg2), arg1, M2C_FIELD(arg0, s32 *, 8));
}
