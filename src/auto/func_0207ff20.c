#include "m2c.h"

M2C_UNK func_0207d4cc(M2C_UNK **);                  /* extern */
M2C_UNK func_020be81c();                            /* extern */
extern M2C_UNK data_02100e30;

M2C_UNK **func_0207ff20(M2C_UNK **arg0) {
    *arg0 = &data_02100e30;
    func_020be81c();
    func_0207d4cc(arg0);
    return arg0;
}
