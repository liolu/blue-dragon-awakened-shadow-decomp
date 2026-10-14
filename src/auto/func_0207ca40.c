#include "m2c.h"

M2C_UNK func_0207d4cc(M2C_UNK **);                  /* extern */
M2C_UNK func_0207e1d0();                            /* extern */
extern M2C_UNK data_020fd2dc;

M2C_UNK **func_0207ca40(M2C_UNK **arg0) {
    *arg0 = &data_020fd2dc;
    func_0207e1d0();
    func_0207d4cc(arg0);
    return arg0;
}
