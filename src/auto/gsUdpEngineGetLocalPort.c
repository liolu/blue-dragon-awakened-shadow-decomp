#include "m2c.h"

void *gsUdpEngineGetEngine();                              /* extern */

u16 gsUdpEngineGetLocalPort(void) {
    void *temp_r0;

    temp_r0 = gsUdpEngineGetEngine();
    if (M2C_FIELD(temp_r0, s32 *, 0xC) != 0) {
        return M2C_FIELD(temp_r0, u16 *, 0x38);
    }
    return 0U;
}
