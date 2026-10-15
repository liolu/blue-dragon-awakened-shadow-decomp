#include "m2c.h"

M2C_UNK ServerBrowserHalt();                            /* extern */
M2C_UNK SBServerListClear(s32);                         /* extern */

void ServerBrowserClear(s32 arg0) {
    ServerBrowserHalt();
    SBServerListClear(arg0 + 0x4C);
}
