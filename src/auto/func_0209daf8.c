#include "m2c.h"

M2C_UNK func_02081004(s32);                         /* extern */
M2C_UNK func_0208a3dc(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_0209dc84(M2C_UNK, M2C_UNK);            /* extern */
extern s32 data_02164e04;

void func_0209daf8(void) {
    func_0208a3dc(1, 0);
    func_02081004(data_02164e04 + 0x2C);
    func_0209dc84(0x13, 0);
}
