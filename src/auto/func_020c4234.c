#include "m2c.h"

M2C_UNK func_0207d4cc(M2C_UNK **);                  /* extern */
M2C_UNK func_020c427c();                            /* extern */
extern M2C_UNK data_02100fe8;

M2C_UNK **func_020c4234(M2C_UNK **arg0) {
    *arg0 = &data_02100fe8;
    func_020c427c();
    func_0207d4cc(arg0);
    return arg0;
}
