#include "m2c.h"

s32 SOC_Send();                                /* extern */
M2C_UNK CheckRcode(s32, M2C_UNK);                /* extern */

void send(void) {
    CheckRcode(SOC_Send(), -1);
}
