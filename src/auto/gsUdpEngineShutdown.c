#include "m2c.h"

M2C_UNK ArrayFree(s32);                         /* extern */
void *gsUdpEngineGetEngine();                              /* extern */
M2C_UNK gt2CloseSocket(s32);                         /* extern */

s32 gsUdpEngineShutdown(void) {
    void *temp_r0;

    temp_r0 = gsUdpEngineGetEngine();
    if (M2C_FIELD(temp_r0, s32 *, 0xC) == 0) {
        return 3;
    }
    gt2CloseSocket(M2C_FIELD(temp_r0, s32 *, 0));
    ArrayFree(M2C_FIELD(temp_r0, s32 *, 8));
    ArrayFree(M2C_FIELD(temp_r0, s32 *, 4));
    M2C_FIELD(temp_r0, s32 *, 0xC) = 0;
    return 0;
}
