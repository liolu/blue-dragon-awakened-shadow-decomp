#include "m2c.h"

void *gsUdpEngineGetEngine();                              /* extern */
M2C_UNK gt2Think(s32);                         /* extern */

s32 gsUdpEngineThink(void) {
    void *temp_r0;

    temp_r0 = gsUdpEngineGetEngine();
    if (M2C_FIELD(temp_r0, s32 *, 0xC) == 0) {
        return 3;
    }
    gt2Think(M2C_FIELD(temp_r0, s32 *, 0));
    return 0;
}
