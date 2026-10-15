#include "m2c.h"

M2C_UNK SBEngineHaltUpdates(s32);                         /* extern */
M2C_UNK SBServerListDisconnect(s32);                         /* extern */

void ServerBrowserHalt(s32 arg0) {
    SBServerListDisconnect(arg0 + 0x4C);
    SBEngineHaltUpdates(arg0);
}
