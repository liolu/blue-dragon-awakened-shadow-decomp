#include "m2c.h"

M2C_UNK func_02044698(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_0204cd8c();                            /* extern */
s32 func_0204d010();                                /* extern */
extern M2C_UNK data_0210e718;

void func_0204ce40(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2, M2C_UNK arg3, s32 arg4) {
    func_0204cd8c();
    if (M2C_FIELD(&data_0210e718, void **, 4) != NULL) {
        M2C_FIELD(M2C_FIELD(&data_0210e718, void **, 4), s8 *, 0xC) = 1;
    }
    if (func_0204d010() != 2) {
        return;
    }
    func_02044698(arg0, arg1, arg2, arg3, arg4);
}
