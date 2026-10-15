#include "m2c.h"

M2C_UNK FreeHead();                            /* extern */
M2C_UNK FreeTail(M2C_UNK);                     /* extern */

void NNS_FndFreeToFrmHeap(M2C_UNK arg0, s32 arg1) {
    if (arg1 & 1) {
        FreeHead();
    }
    if (!(arg1 & 2)) {
        return;
    }
    FreeTail(arg0);
}
