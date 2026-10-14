#include "m2c.h"

M2C_UNK func_0207e1d0();                            /* extern */
extern M2C_UNK data_020fd2dc;
extern M2C_UNK data_020fd770;

void *func_02081744(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020fd770;
    M2C_FIELD(arg0, s8 *, 0x20) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020fd2dc;
    func_0207e1d0(arg0);
    return arg0;
}
