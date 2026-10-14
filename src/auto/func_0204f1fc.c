#include "m2c.h"

M2C_UNK func_02048c2c();                            /* extern */
M2C_UNK func_02048cb8();                            /* extern */
M2C_UNK func_0204cba8(M2C_UNK, s32, M2C_UNK);       /* extern */
extern M2C_UNK data_0210e8c0;

void func_0204f1fc(void) {
    if (M2C_FIELD(M2C_FIELD(&data_0210e8c0, void **, 4), s32 *, 0x24) != 0) {
        func_02048c2c();
        func_02048cb8();
        func_0204cba8(0, M2C_FIELD(M2C_FIELD(&data_0210e8c0, void **, 4), s32 *, 0x24), 0);
        M2C_FIELD(M2C_FIELD(&data_0210e8c0, void **, 4), s32 *, 0x24) = 0;
    }
    M2C_FIELD(&data_0210e8c0, void **, 4) = NULL;
}
