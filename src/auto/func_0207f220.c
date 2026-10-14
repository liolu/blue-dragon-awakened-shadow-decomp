#include "m2c.h"

M2C_UNK func_0207e918();                            /* extern */
M2C_UNK func_0207ea84(void *);                      /* extern */
extern M2C_UNK data_020fd4bc;
extern M2C_UNK data_020fd4e4;

void *func_0207f220(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020fd4e4;
    func_0207e918();
    M2C_FIELD(arg0, M2C_UNK **, 8) = &data_020fd4bc;
    func_0207ea84(arg0 + 8);
    return arg0;
}
