#include "m2c.h"

M2C_UNK func_0204cba8(M2C_UNK, s32, M2C_UNK);       /* extern */
M2C_UNK func_020515ec();                            /* extern */
M2C_UNK func_02057794();                            /* extern */
void *func_02059234();                              /* extern */
M2C_UNK func_02059244(M2C_UNK);                     /* extern */
M2C_UNK func_020750b4(s32);                         /* extern */
extern M2C_UNK data_0210e8e0;

void func_02053a28(void) {
    if (func_02059234() == NULL) {
        return;
    }
    if (M2C_FIELD(func_02059234(), s32 *, 0xE4) != 0) {
        if (M2C_FIELD(&data_0210e8e0, s32 *, 0x18) != 0) {
            M2C_FIELD(&data_0210e8e0, s32 *, 0x14) = 1;
        } else {
            func_020750b4(M2C_FIELD(func_02059234(), s32 *, 0xE4));
            M2C_FIELD(func_02059234(), s32 *, 0xE4) = 0;
        }
    }
    func_020515ec();
    func_02059244(0);
    if (M2C_FIELD(&data_0210e8e0, s32 *, 8) != 0) {
        func_0204cba8(4, M2C_FIELD(&data_0210e8e0, s32 *, 8), 0);
        M2C_FIELD(&data_0210e8e0, s32 *, 8) = 0;
    }
    func_02057794();
    M2C_FIELD(func_02059234(), s8 *, 0x18) = 1;
}
