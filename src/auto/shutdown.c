#include "m2c.h"

s32 SOC_Shutdown();                                /* extern */
M2C_UNK CheckRcode(s32, M2C_UNK);                /* extern */

void shutdown(void) {
    CheckRcode(SOC_Shutdown(), -1);
}
