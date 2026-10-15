#include "m2c.h"

s32 func_ov000_021bec20(M2C_UNK *);                 /* extern */
extern M2C_UNK data_02110430;
extern M2C_UNK data_ov000_021f4924;

void func_0207dc04(void) {
    M2C_FIELD(&data_02110430, s32 *, 4) =
        (s32) (M2C_FIELD(&data_02110430, s32 *, 4) + func_ov000_021bec20(&data_ov000_021f4924));
}
