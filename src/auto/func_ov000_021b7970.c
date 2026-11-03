#include "m2c.h"

M2C_UNK func_ov000_021b7498(M2C_UNK **);                  /* extern */
M2C_UNK func_ov000_021b777c();                            /* extern */
extern M2C_UNK data_ov000_021ea854;

M2C_UNK **func_ov000_021b7970(M2C_UNK **arg0) {
    *arg0 = &data_ov000_021ea854;
    func_ov000_021b777c();
    func_ov000_021b7498(arg0);
    return arg0;
}
