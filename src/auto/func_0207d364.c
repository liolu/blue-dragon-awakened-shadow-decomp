#include "m2c.h"

M2C_UNK func_0207cc1c();                            /* extern */
extern M2C_UNK data_02110288;

s32 func_0207d364(void) {
    if (M2C_FIELD(&data_02110288, s32 *, 4) == 0) {
        func_0207cc1c();
    }
    return M2C_FIELD(&data_02110288, s32 *, 4);
}
