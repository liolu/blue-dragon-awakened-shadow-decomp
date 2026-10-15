#include "m2c.h"

M2C_UNK qsort(s32, s32, s32, M2C_UNK);      /* extern */

void ArraySort(void *arg0, M2C_UNK arg1) {
    qsort(M2C_FIELD(arg0, s32 *, 0x14), M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 8), arg1);
}
