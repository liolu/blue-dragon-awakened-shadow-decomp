#include "m2c.h"

M2C_UNK ArrayFree(s32);                         /* extern */

void gsUdpMsgHandlerFree(void *arg0) {
    ArrayFree(M2C_FIELD(arg0, s32 *, 0x20));
}
