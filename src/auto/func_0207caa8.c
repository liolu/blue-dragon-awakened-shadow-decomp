#include "m2c.h"

extern M2C_UNK data_020fd374;
extern M2C_UNK data_02110248;
extern M2C_UNK data_02110268;

void func_0207caa8(void *arg0, s32 arg1) {
    M2C_FIELD(arg0, M2C_UNK **, 0)      = &data_020fd374;
    M2C_FIELD(arg0, s32 *, 4)           = 0;
    M2C_FIELD(&data_02110248, s32 *, 4) = (s32) (M2C_FIELD(&data_02110248, s32 *, 4) + 1);
    if (M2C_FIELD(&data_02110248, u8 *, 0) != 0) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 4)                           = (s32) * ((M2C_UNK *) ((s8 *) &data_02110268 + (arg1 * 4)));
    *((M2C_UNK *) ((s8 *) &data_02110268 + (arg1 * 4))) = arg0;
    M2C_FIELD(arg0, s8 *, 8)                            = 0;
}
