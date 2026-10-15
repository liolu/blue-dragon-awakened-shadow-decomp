#include "m2c.h"

s32 strlen(M2C_UNK);                         /* extern */
M2C_UNK gpiSendOrBufferStringLenToPeer(M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */

void gpiSendOrBufferString(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2) {
    gpiSendOrBufferStringLenToPeer(arg0, arg1, arg2, strlen(arg2));
}
