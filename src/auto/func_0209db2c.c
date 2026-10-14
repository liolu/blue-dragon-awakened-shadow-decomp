#include "m2c.h"

M2C_UNK func_02081004(s32);                         /* extern */
M2C_UNK func_0208a3dc(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0209dc84(M2C_UNK, M2C_UNK);            /* extern */
extern s32 data_02164e04;

s32 func_0209db2c(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x5C) != 3) {
        return 0;
    }
    func_0208a3dc(0x36, 0);
    func_02081004(data_02164e04 + 0x2C);
    func_0209dc84(1, 0);
    M2C_FIELD(arg0, s32 *, 0x5C) = 4;
    return 1;
}
