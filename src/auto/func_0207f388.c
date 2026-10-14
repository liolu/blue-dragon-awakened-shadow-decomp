#include "m2c.h"

M2C_UNK func_020c33e4();                            /* extern */
extern M2C_UNK data_020fd678;

void *func_0207f388(void *arg0) {
    func_020c33e4();
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020fd678;
    M2C_FIELD(arg0, s32 *, 0x2C) = 0;
    M2C_FIELD(arg0, s32 *, 0x30) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = -1;
    return arg0;
}
