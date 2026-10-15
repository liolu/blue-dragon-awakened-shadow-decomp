#include "m2c.h"

s32 ArrayLength(s32);                             /* extern */
s32 gti2ReceivedCallback(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
s32 gti2ReceiveFilterCallback(void *, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */

s32 gti2HandleAppUnreliable(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_r0;
    s32 var_r0;

    temp_r0 = M2C_FIELD(arg0, s32 *, 0xC);
    if ((temp_r0 != 5) && (temp_r0 != 6)) {
        return 1;
    }
    if (ArrayLength(M2C_FIELD(arg0, s32 *, 0x9C)) != 0) {
        if (gti2ReceiveFilterCallback(arg0, 0, arg1, arg2, 0) != 0) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        return var_r0;
    }
    if (gti2ReceivedCallback(arg0, arg1, arg2, 0) != 0) {
        return 1;
    }
    return 0;
}
