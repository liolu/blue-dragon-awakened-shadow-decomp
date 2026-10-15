#include "m2c.h"

s32 SOC_Close();                                /* extern */
M2C_UNK CheckRcode(s32, M2C_UNK);                /* extern */

void closesocket(void) {
    CheckRcode(SOC_Close(), -1);
}
