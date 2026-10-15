#include "m2c.h"

extern M2C_UNK gGXState;

u16 GX_GetBankForOBJ(void) {
    return M2C_FIELD(&gGXState, u16 *, 4);
}
