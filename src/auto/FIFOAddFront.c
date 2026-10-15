#include "m2c.h"

void FIFOAddFront(void *arg0, void *arg1) {
    M2C_FIELD(arg1, void **, 0x24) = (void *) M2C_FIELD(arg0, void **, 0);
    M2C_FIELD(arg0, void **, 0)    = arg1;
    if (M2C_FIELD(arg0, void **, 4) == NULL) {
        M2C_FIELD(arg0, void **, 4) = arg1;
    }
    M2C_FIELD(arg0, s32 *, 8) = (s32) (M2C_FIELD(arg0, s32 *, 8) + 1);
}
