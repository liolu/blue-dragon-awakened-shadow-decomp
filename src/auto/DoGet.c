#include "m2c.h"

void *DoGet(void *arg0) {
    if (arg0 == NULL) {
        return NULL;
    }
    if (M2C_FIELD(arg0, s32 *, 4) == 2) {
        return M2C_FIELD(arg0, void **, 0xC);
    }
    return arg0 + 0xC;
}
