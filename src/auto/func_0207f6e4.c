#include "m2c.h"

M2C_UNK func_0207d4cc(void *);                      /* extern */
M2C_UNK func_0207e1d0(void *);                      /* extern */
M2C_UNK func_ov000_0218b2e4();                      /* extern */
extern M2C_UNK data_020fd2dc;
extern M2C_UNK data_020fd57c;

void *func_0207f6e4(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020fd57c;
    func_ov000_0218b2e4();
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020fd2dc;
    func_0207e1d0(arg0);
    func_0207d4cc(arg0);
    return arg0;
}
