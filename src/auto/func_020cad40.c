#include "m2c.h"

M2C_UNK func_020afbac(M2C_UNK *, s32);              /* extern */
M2C_UNK func_020afc28(M2C_UNK *, s32);              /* extern */
M2C_UNK func_020c425c(void *);                      /* extern */
M2C_UNK func_020da214(void *);                      /* extern */
extern M2C_UNK data_02101228;
extern M2C_UNK data_02166810;
extern M2C_UNK data_02166c54;

void *func_020cad40(void *arg0) {
    s32 temp_r4;

    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02101228;
    temp_r4 = M2C_FIELD(arg0, s32 *, 8);
    func_020afbac(&data_02166810, temp_r4);
    func_020afc28(&data_02166c54, temp_r4);
    func_020da214(arg0 + 0x168);
    func_020c425c(arg0);
    return arg0;
}
