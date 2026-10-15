#include "m2c.h"

void *gsUdpEngineGetEngine();                              /* extern */

s32 gsUdpEngineIsInitialized(void) {
    return M2C_FIELD(gsUdpEngineGetEngine(), s32 *, 0xC);
}
