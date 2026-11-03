#include "m2c.h"

M2C_UNK func_ov000_021bcd14(M2C_UNK **);                  /* extern */
M2C_UNK func_ov000_021bcf44();                            /* extern */
extern M2C_UNK data_020fe2d4;

M2C_UNK **func_ov000_021bdae4(M2C_UNK **arg0) {
    *arg0 = &data_020fe2d4;
    func_ov000_021bcf44();
    func_ov000_021bcd14(arg0);
    return arg0;
}
