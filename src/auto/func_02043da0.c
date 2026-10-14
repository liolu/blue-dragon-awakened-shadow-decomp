#include "m2c.h"

extern M2C_UNK data_0210e5f0;

void func_02043da0(void *arg0) {
    if (M2C_FIELD(&data_0210e5f0, M2C_UNK (**)(void *, void *, void *, u16), 0x28) == NULL) {
        return;
    }
    M2C_FIELD(&data_0210e5f0, M2C_UNK (**)(void *, void *, void *, u16), 0x28)(arg0 + 0x1E, arg0 + 0x18, arg0 + 0x2C, M2C_FIELD(arg0, u16 *, 6));
}
