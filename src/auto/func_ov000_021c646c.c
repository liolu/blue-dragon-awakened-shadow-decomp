#include "m2c.h"

M2C_UNK func_0207d4cc(M2C_UNK **);                  /* extern */
M2C_UNK func_ov000_021e41f0();                            /* extern */
extern M2C_UNK data_ov000_021eb780;

M2C_UNK **func_ov000_021c646c(M2C_UNK **arg0) {
    *arg0 = &data_ov000_021eb780;
    func_ov000_021e41f0();
    func_0207d4cc(arg0);
    return arg0;
}
