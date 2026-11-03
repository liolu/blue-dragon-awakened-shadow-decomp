#include "m2c.h"

M2C_UNK func_0207d4cc(M2C_UNK **);                  /* extern */
M2C_UNK func_ov000_0217ab10();                            /* extern */
extern M2C_UNK data_ov000_021e8dd0;

M2C_UNK **func_ov000_0218f558(M2C_UNK **arg0) {
    *arg0 = &data_ov000_021e8dd0;
    func_ov000_0217ab10();
    func_0207d4cc(arg0);
    return arg0;
}
