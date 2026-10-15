#include "m2c.h"

M2C_UNK SBServerListCount(s32);                         /* extern */

void ServerBrowserCount(s32 arg0) {
    SBServerListCount(arg0 + 0x4C);
}
