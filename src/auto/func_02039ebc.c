#include "m2c.h"

extern void *data_020f8f00;
extern M2C_UNK data_0210e2a0;

s32 func_02039ebc(void) {
    if ((s32) M2C_FIELD(&data_0210e2a0, s32 *, 0x20) < (s32) M2C_FIELD(&data_0210e2a0, s32 *, 0x18)) {
        return -1;
    }
    M2C_FIELD(data_020f8f00, M2C_UNK (**)(s32), 0x1C)(M2C_FIELD(&data_0210e2a0, s32 *, 0));
    M2C_FIELD(&data_0210e2a0, s32 *, 0) = 0;
    return 0;
}
