#include "m2c.h"

M2C_UNK func_0207d4cc(M2C_UNK **);                  /* extern */
M2C_UNK func_ov000_021aeb68();                            /* extern */
extern M2C_UNK data_ov000_021ea568;

M2C_UNK **func_ov000_021afa60(M2C_UNK **arg0) {
    *arg0 = &data_ov000_021ea568;
    func_ov000_021aeb68();
    func_0207d4cc(arg0);
    return arg0;
}
