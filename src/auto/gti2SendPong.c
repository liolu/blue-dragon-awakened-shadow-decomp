#include "m2c.h"

M2C_UNK gti2ConnectionSendData();                            /* extern */

void gti2SendPong(s32 arg0, void *arg1, s32 arg2) {
    M2C_FIELD(arg1, s8 *, 2) = 0x67;
    gti2ConnectionSendData(arg0, arg1, arg2);
}
