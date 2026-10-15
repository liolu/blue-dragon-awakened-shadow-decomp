#include "m2c.h"

M2C_UNK SBQueryEngineThink();                            /* extern */
M2C_UNK SBListThink(s32);                         /* extern */

void ServerBrowserThink(s32 arg0) {
    SBQueryEngineThink();
    SBListThink(arg0 + 0x4C);
}
