#include "m2c.h"

M2C_UNK func_020be81c();                            /* extern */
extern M2C_UNK data_02100e30;

M2C_UNK **func_020c13ec(M2C_UNK **arg0) {
    *arg0 = &data_02100e30;
    func_020be81c();
    return arg0;
}
