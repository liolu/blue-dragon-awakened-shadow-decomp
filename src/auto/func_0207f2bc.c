#include "m2c.h"

M2C_UNK func_0207d4cc(M2C_UNK **);                  /* extern */
M2C_UNK func_0207ea84();                            /* extern */
extern M2C_UNK data_020fd4bc;

M2C_UNK **func_0207f2bc(M2C_UNK **arg0) {
    *arg0 = &data_020fd4bc;
    func_0207ea84();
    func_0207d4cc(arg0);
    return arg0;
}
