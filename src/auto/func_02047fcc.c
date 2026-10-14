#include "m2c.h"

s32 func_02047e94();                                /* extern */
M2C_UNK func_02047f64(M2C_UNK, s32);                /* extern */

void func_02047fcc(M2C_UNK arg0) {
    func_02047f64(arg0, func_02047e94() & ~0x3C);
}
