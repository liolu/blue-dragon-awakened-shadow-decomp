#include "m2c.h"

s32 current_time();                                /* extern */

void gti2SetPendingAck(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x90) != 0) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x90) = 1;
    M2C_FIELD(arg0, s32 *, 0x94) = current_time();
}
