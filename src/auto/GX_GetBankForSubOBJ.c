#include "m2c.h"

extern M2C_UNK gGXState;

u16 GX_GetBankForSubOBJ(void) {
    return M2C_FIELD(&gGXState, u16 *, 0x14);
}
