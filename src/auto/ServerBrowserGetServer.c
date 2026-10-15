#include "m2c.h"

M2C_UNK SBServerListNth(s32);                         /* extern */

void ServerBrowserGetServer(s32 arg0) {
    SBServerListNth(arg0 + 0x4C);
}
