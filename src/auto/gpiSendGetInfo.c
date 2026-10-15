#include "m2c.h"

M2C_UNK gpiAppendStringToBuffer(void **, void *, M2C_UNK *);  /* extern */
M2C_UNK gpiAppendIntToBuffer(void **, void *, s32);        /* extern */
extern M2C_UNK data_020fb1f4;
extern M2C_UNK data_020fb32c;
extern M2C_UNK data_020fb474;
extern M2C_UNK data_020fb48c;

s32 gpiSendGetInfo(void **arg0, s32 arg1, s32 arg2) {
    void *temp_r4;

    temp_r4 = *arg0;
    gpiAppendStringToBuffer(arg0, temp_r4 + 0x210, &data_020fb474);
    gpiAppendIntToBuffer(arg0, temp_r4 + 0x210, M2C_FIELD(temp_r4, s32 *, 0x198));
    gpiAppendStringToBuffer(arg0, temp_r4 + 0x210, &data_020fb1f4);
    gpiAppendIntToBuffer(arg0, temp_r4 + 0x210, arg1);
    gpiAppendStringToBuffer(arg0, temp_r4 + 0x210, &data_020fb48c);
    gpiAppendIntToBuffer(arg0, temp_r4 + 0x210, arg2);
    gpiAppendStringToBuffer(arg0, temp_r4 + 0x210, &data_020fb32c);
    return 0;
}
