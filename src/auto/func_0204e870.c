#include "m2c.h"

M2C_UNK func_0204e5fc(M2C_UNK);                     /* extern */
M2C_UNK func_02050388();                            /* extern */
extern void *data_0210e738;

void func_0204e870(s32 arg0, s32 arg1) {
    M2C_UNK (*temp_r3)(s32, s32, s32);

    if (arg0 == 0) {
        M2C_FIELD(data_0210e738, s32 *, 0x64) = arg1;
        func_0204e5fc(3);
        func_02050388();
    } else {
        func_0204e5fc(0);
    }
    temp_r3 = M2C_FIELD(data_0210e738, M2C_UNK (**)(s32, s32, s32), 0x70);
    if (temp_r3 == NULL) {
        return;
    }
    temp_r3(arg0, arg1, M2C_FIELD(data_0210e738, s32 *, 0x74));
}
