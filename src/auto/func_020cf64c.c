#include "m2c.h"

M2C_UNK func_02077f50(void *);                      /* extern */
M2C_UNK func_0207d4cc(void *);                      /* extern */
M2C_UNK func_0207e1d0(void *);                      /* extern */
M2C_UNK func_ov000_021c09a0(M2C_UNK *, s32);        /* extern */
extern M2C_UNK data_020fd2dc;
extern M2C_UNK data_021012c4;
extern M2C_UNK data_ov000_021f4d24;

void *func_020cf64c(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_021012c4;
    func_ov000_021c09a0(&data_ov000_021f4d24, M2C_FIELD(arg0, s32 *, 0x28));
    func_02077f50(arg0 + 0x88);
    func_02077f50(arg0 + 0x68);
    func_02077f50(arg0 + 0x48);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020fd2dc;
    func_0207e1d0(arg0);
    func_0207d4cc(arg0);
    return arg0;
}
