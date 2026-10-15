#include "m2c.h"

M2C_UNK func_0207d4cc(void *);                      /* extern */
M2C_UNK func_020afbac(M2C_UNK *, s32);              /* extern */
M2C_UNK func_020afc28(M2C_UNK *, s32);              /* extern */
M2C_UNK func_020c425c(void *);                      /* extern */
extern M2C_UNK data_02101118;
extern M2C_UNK data_02166810;
extern M2C_UNK data_02166c54;

void *func_020c6ef4(void *arg0) {
    s32 temp_r4;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02101118;
    temp_r4                        = M2C_FIELD(arg0, s32 *, 8);
    func_020afbac(&data_02166c54, temp_r4);
    func_020afc28(&data_02166810, temp_r4);
    func_020c425c(arg0);
    func_0207d4cc(arg0);
    return arg0;
}
