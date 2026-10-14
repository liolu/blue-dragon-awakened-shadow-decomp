#include "m2c.h"

s32 func_0207c638(M2C_UNK *, M2C_UNK);              /* extern */
M2C_UNK func_ov000_021e5e54(s32);                   /* extern */
extern M2C_UNK data_02110134;
extern M2C_UNK data_021672cc;

void func_020ddb08(void) {
    if (func_0207c638(&data_02110134, 0) != 0) {
        return;
    }
    func_ov000_021e5e54(M2C_FIELD(&data_021672cc, s32 *, 4));
}
