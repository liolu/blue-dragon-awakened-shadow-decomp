#include "m2c.h"

M2C_UNK func_02090ab8(M2C_UNK **);                  /* extern */
M2C_UNK func_02090ca4();                            /* extern */
extern M2C_UNK data_ov000_021eb574;

M2C_UNK **func_02077ea0(M2C_UNK **arg0) {
    *arg0 = &data_ov000_021eb574;
    func_02090ca4();
    func_02090ab8(arg0);
    return arg0;
}
