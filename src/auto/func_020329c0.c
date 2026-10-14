#include "m2c.h"

M2C_UNK func_02027390(M2C_UNK *, void *);           /* extern */
M2C_UNK func_020327a8(M2C_UNK *, void *);           /* extern */
M2C_UNK func_020327f8(void *);                      /* extern */
extern M2C_UNK data_0210add8;

void func_020329c0(void *arg0, s8 arg1) {
    M2C_UNK *temp_r4;

    temp_r4 = M2C_FIELD(arg0, M2C_UNK **, 4);
    if (temp_r4 != NULL) {
        func_02027390(temp_r4, arg0);
        M2C_FIELD(arg0, M2C_UNK **, 4) = NULL;
    }
    func_02027390(&data_0210add8, arg0);
    M2C_FIELD(arg0, s8 *, 0x3D) = arg1;
    if (temp_r4 != NULL) {
        func_020327a8(temp_r4, arg0);
    }
    func_020327f8(arg0);
}
