#include "m2c.h"

M2C_UNK func_0207e1d0(void *);                      /* extern */
M2C_UNK func_02080f08(void *);                      /* extern */
extern M2C_UNK data_020fd2dc;
extern M2C_UNK data_020fd784;

void *func_0208226c(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020fd784;
    M2C_FIELD(arg0, s8 *, 0x20)    = 0;
    func_02080f08(arg0 + 0x2C);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020fd2dc;
    func_0207e1d0(arg0);
    return arg0;
}
