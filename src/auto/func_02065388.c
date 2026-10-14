#include "m2c.h"

M2C_UNK func_02061684(void **, void *, M2C_UNK *);  /* extern */
M2C_UNK func_020616b4(void **, void *, s32);        /* extern */
extern M2C_UNK data_020fb1f4;
extern M2C_UNK data_020fb32c;
extern M2C_UNK data_020fb474;
extern M2C_UNK data_020fb48c;

s32 func_02065388(void **arg0, s32 arg1, s32 arg2) {
    void *temp_r4;

    temp_r4 = *arg0;
    func_02061684(arg0, temp_r4 + 0x210, &data_020fb474);
    func_020616b4(arg0, temp_r4 + 0x210, M2C_FIELD(temp_r4, s32 *, 0x198));
    func_02061684(arg0, temp_r4 + 0x210, &data_020fb1f4);
    func_020616b4(arg0, temp_r4 + 0x210, arg1);
    func_02061684(arg0, temp_r4 + 0x210, &data_020fb48c);
    func_020616b4(arg0, temp_r4 + 0x210, arg2);
    func_02061684(arg0, temp_r4 + 0x210, &data_020fb32c);
    return 0;
}
