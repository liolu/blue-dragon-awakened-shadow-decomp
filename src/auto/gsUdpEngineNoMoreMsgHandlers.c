#include "m2c.h"

s32 ArrayLength(s32);                             /* extern */
void *gsUdpEngineGetEngine();                              /* extern */

s32 gsUdpEngineNoMoreMsgHandlers(void) {
    void *temp_r0;

    temp_r0 = gsUdpEngineGetEngine();
    if (M2C_FIELD(temp_r0, s32 *, 0xC) == 0) {
        return 1;
    }
    if (ArrayLength(M2C_FIELD(temp_r0, s32 *, 8)) == 0) {
        return 1;
    }
    return 0;
}
