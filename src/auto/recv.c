#include "m2c.h"

s32 SOC_Recv();                                /* extern */
M2C_UNK CheckRcode(s32, M2C_UNK);                /* extern */

void recv(void) {
    CheckRcode(SOC_Recv(), -1);
}
