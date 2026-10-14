#include "m2c.h"

M2C_UNK func_02077d90(M2C_UNK **, M2C_UNK);         /* extern */
M2C_UNK func_0207cb80(M2C_UNK **);                  /* extern */
extern M2C_UNK data_020fd160;

M2C_UNK **func_02077f50(M2C_UNK **arg0) {
    *arg0 = &data_020fd160;
    func_02077d90(arg0, 1);
    func_0207cb80(arg0);
    return arg0;
}
