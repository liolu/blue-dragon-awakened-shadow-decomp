#include "m2c.h"

M2C_UNK func_0201747c(M2C_UNK);                     /* extern */
M2C_UNK func_02026c0c();                            /* extern */
extern M2C_UNK data_02105490;

void func_02017430(M2C_UNK arg0) {
    if (M2C_FIELD(&data_02105490, s32 *, 0xC) == 0) {
        func_02026c0c();
        if (M2C_FIELD(&data_02105490, M2C_UNK (**)(), 4) != NULL) {
            M2C_FIELD(&data_02105490, M2C_UNK (**)(), 4)();
            M2C_FIELD(&data_02105490, M2C_UNK (**)(), 4) = NULL;
        }
    }
    func_0201747c(arg0);
}
