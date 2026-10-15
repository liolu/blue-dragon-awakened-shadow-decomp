#include "m2c.h"

s32 SOC_Socket();                                /* extern */
M2C_UNK CheckRcode(s32, M2C_UNK);                /* extern */

void socket(void) {
    CheckRcode(SOC_Socket(), -1);
}
