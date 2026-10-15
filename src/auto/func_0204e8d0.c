#include "m2c.h"

M2C_UNK func_0204e5fc();                            /* extern */
extern void *data_0210e738;

void func_0204e8d0(M2C_UNK arg0, M2C_UNK arg1) {
    if (M2C_FIELD(data_0210e738, s32 *, 0x28) != 4) {
        func_0204e5fc();
    }
    M2C_FIELD(data_0210e738, M2C_UNK(**)(M2C_UNK, M2C_UNK, s32), 0x78)(arg0, arg1, M2C_FIELD(data_0210e738, s32 *, 0x7C));
}
