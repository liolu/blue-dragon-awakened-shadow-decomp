#include "m2c.h"

M2C_UNK func_0207d4cc(M2C_UNK **);                  /* extern */
M2C_UNK func_0207e1d0(M2C_UNK **);                  /* extern */
M2C_UNK func_020b2f5c();                            /* extern */
extern M2C_UNK data_020fd2dc;
extern M2C_UNK data_020ff020;

M2C_UNK **func_020b3204(M2C_UNK **arg0) {
    *arg0 = &data_020ff020;
    func_020b2f5c();
    *arg0 = &data_020fd2dc;
    func_0207e1d0(arg0);
    func_0207d4cc(arg0);
    return arg0;
}
