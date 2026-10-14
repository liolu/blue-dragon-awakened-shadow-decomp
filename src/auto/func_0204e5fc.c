#include "m2c.h"

extern void *data_0210e738;

void func_0204e5fc(s32 arg0) {
    M2C_FIELD(data_0210e738, s32 *, 0x28) = (s32) M2C_FIELD(data_0210e738, s32 *, 0x24);
    M2C_FIELD(data_0210e738, s32 *, 0x24) = arg0;
}
