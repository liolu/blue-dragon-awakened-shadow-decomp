#include "m2c.h"

M2C_UNK func_ov000_021a08e0();                            /* extern */
extern M2C_UNK data_ov000_021e9d48;

M2C_UNK **func_ov000_021a3048(M2C_UNK **arg0) {
    *arg0 = &data_ov000_021e9d48;
    func_ov000_021a08e0();
    return arg0;
}
