#include "m2c.h"

s32 PXI_SendWordByFifo(M2C_UNK, s32, M2C_UNK);           /* extern */

void OSi_SendToPxi(s32 arg0) {
    do {

    } while (PXI_SendWordByFifo(0xC, arg0 << 8, 0) != 0);
}
