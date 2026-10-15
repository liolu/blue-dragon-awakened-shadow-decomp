#include "m2c.h"

extern M2C_UNK gGXState;

u16 GX_GetBankForOBJExtPltt(void) {
    return M2C_FIELD(&gGXState, u16 *, 0x10);
}
