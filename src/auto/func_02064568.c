#include "m2c.h"

M2C_UNK gpiAppendStringToBuffer(void **, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK gpiAppendIntToBuffer(void **, M2C_UNK, s32);       /* extern */
extern M2C_UNK data_020fb308;
extern M2C_UNK data_020fb320;
extern M2C_UNK data_020fb32c;
extern M2C_UNK data_020fb334;

s32 func_02064568(void **arg0, M2C_UNK arg1) {
    void *temp_r4;

    temp_r4 = *arg0;
    if ((s32) M2C_FIELD(temp_r4, s32 *, 0x5E8) > 0) {
        gpiAppendStringToBuffer(arg0, arg1, &data_020fb308);
        gpiAppendIntToBuffer(arg0, arg1, M2C_FIELD(temp_r4, s32 *, 0x198));
        gpiAppendStringToBuffer(arg0, arg1, M2C_FIELD(temp_r4, M2C_UNK **, 0x5E0));
        gpiAppendStringToBuffer(arg0, arg1, &data_020fb320);
        gpiAppendIntToBuffer(arg0, arg1, M2C_FIELD(temp_r4, s32 *, 0x1A4));
        gpiAppendStringToBuffer(arg0, arg1, &data_020fb32c);
        M2C_FIELD(temp_r4, s32 *, 0x5E8) = 0;
    }
    if ((s32) M2C_FIELD(temp_r4, s32 *, 0x5F8) > 0) {
        gpiAppendStringToBuffer(arg0, arg1, &data_020fb334);
        gpiAppendIntToBuffer(arg0, arg1, M2C_FIELD(temp_r4, s32 *, 0x198));
        gpiAppendStringToBuffer(arg0, arg1, M2C_FIELD(temp_r4, M2C_UNK **, 0x5F0));
        gpiAppendStringToBuffer(arg0, arg1, &data_020fb32c);
        M2C_FIELD(temp_r4, s32 *, 0x5F8) = 0;
    }
    return 0;
}
