#include "m2c.h"

M2C_UNK func_020a2eac(s32, M2C_UNK, M2C_UNK);       /* extern */
extern s32 data_02165948;

void func_020a5658(M2C_UNK arg0, M2C_UNK arg1) {
    if (data_02165948 == 0) {
        return;
    }
    func_020a2eac(data_02165948 + 0x323E, arg0, arg1);
}
