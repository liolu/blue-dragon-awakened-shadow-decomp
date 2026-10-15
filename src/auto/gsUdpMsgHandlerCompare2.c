#include "m2c.h"

M2C_UNK memcmp(s32, s32, M2C_UNK);           /* extern */

void gsUdpMsgHandlerCompare2(s32 arg0, s32 arg1) {
    memcmp(arg0 + 0x10, arg1 + 0x10, 0x10);
}
