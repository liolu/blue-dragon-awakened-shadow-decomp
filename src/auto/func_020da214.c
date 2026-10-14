#include "m2c.h"

M2C_UNK func_02077f50(s32);                         /* extern */
M2C_UNK func_020da184(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_020da240();                            /* extern */
extern M2C_UNK data_02167280;

s32 func_020da214(s32 arg0) {
    func_020da240();
    func_020da184(&data_02167280, 1);
    func_02077f50(arg0 + 8);
    return arg0;
}
