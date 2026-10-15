#include "m2c.h"

M2C_UNK func_0207d4cc(void *);                      /* extern */
M2C_UNK func_020b61b8();                            /* extern */
extern M2C_UNK data_02100bf8;

void *func_020b6088(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02100bf8;
    func_020b61b8();
    M2C_FIELD(arg0, s8 *, 0x18)  = 0;
    M2C_FIELD(arg0, s16 *, 0x12) = 0;
    func_0207d4cc(arg0);
    return arg0;
}
