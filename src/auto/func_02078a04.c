#include "m2c.h"

M2C_UNK func_02078a24();                            /* extern */
extern M2C_UNK data_020fd29c;

M2C_UNK **func_02078a04(M2C_UNK **arg0) {
    *arg0 = &data_020fd29c;
    func_02078a24();
    return arg0;
}
