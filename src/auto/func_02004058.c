#include "m2c.h"

M2C_UNK func_0200333c(u16);                         /* extern */
extern u16 data_021018c4;

u16 func_02004058(u16 *arg0) {
    u16 temp_r4;

    temp_r4 = *arg0;
    *arg0 = 0;
    data_021018c4 |= temp_r4;
    func_0200333c(temp_r4);
    return temp_r4;
}
