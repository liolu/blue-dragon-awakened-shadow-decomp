#include "m2c.h"

M2C_UNK func_0207dfac();                            /* extern */
extern M2C_UNK data_020fd374;
extern M2C_UNK data_02110248;

M2C_UNK **func_0207cb80(M2C_UNK **arg0) {
    s32 temp_r1;

    *arg0 = &data_020fd374;
    temp_r1 = M2C_FIELD(&data_02110248, s32 *, 4) - 1;
    M2C_FIELD(&data_02110248, s32 *, 4) = temp_r1;
    if (temp_r1 == 0) {
        func_0207dfac();
    }
    return arg0;
}
