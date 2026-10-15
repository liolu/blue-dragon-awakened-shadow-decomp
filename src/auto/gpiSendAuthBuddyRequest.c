#include "m2c.h"

M2C_UNK gpiAppendStringToBuffer(void **, void *, M2C_UNK *);  /* extern */
M2C_UNK gpiAppendIntToBuffer(void **, void *, s32);        /* extern */
extern M2C_UNK data_020fab2c;
extern M2C_UNK data_020fab38;
extern M2C_UNK data_020fab44;
extern M2C_UNK data_020fab54;
extern M2C_UNK data_020fab5c;

s32 gpiSendAuthBuddyRequest(void **arg0, void *arg1) {
    void *temp_r4;

    temp_r4 = *arg0;
    gpiAppendStringToBuffer(arg0, temp_r4 + 0x210, &data_020fab2c);
    gpiAppendStringToBuffer(arg0, temp_r4 + 0x210, &data_020fab38);
    gpiAppendIntToBuffer(arg0, temp_r4 + 0x210, M2C_FIELD(temp_r4, s32 *, 0x198));
    gpiAppendStringToBuffer(arg0, temp_r4 + 0x210, &data_020fab44);
    gpiAppendIntToBuffer(arg0, temp_r4 + 0x210, M2C_FIELD(arg1, s32 *, 0));
    gpiAppendStringToBuffer(arg0, temp_r4 + 0x210, &data_020fab54);
    gpiAppendStringToBuffer(arg0, temp_r4 + 0x210, M2C_FIELD(arg1, M2C_UNK **, 0x14));
    gpiAppendStringToBuffer(arg0, temp_r4 + 0x210, &data_020fab5c);
    return 0;
}
