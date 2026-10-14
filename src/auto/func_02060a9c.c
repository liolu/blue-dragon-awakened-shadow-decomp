#include "m2c.h"

M2C_UNK func_02061684(void **, void *, M2C_UNK *);  /* extern */
M2C_UNK func_020616b4(void **, void *, s32);        /* extern */
M2C_UNK func_0206a9ac(M2C_UNK *, M2C_UNK, s32);     /* extern */
extern M2C_UNK data_020fab38;
extern M2C_UNK data_020fab5c;
extern M2C_UNK data_020fab64;
extern M2C_UNK data_020fabb8;
extern M2C_UNK data_020faca0;

s32 func_02060a9c(void **arg0, s32 arg1, s32 arg2, M2C_UNK arg3) {
    u8 sp0[3504];
    void *temp_r4;

    temp_r4 = *arg0;
    func_0206a9ac(sp0, arg3, 0xDAD);
    func_02061684(arg0, temp_r4 + 0x210, &data_020fab64);
    func_020616b4(arg0, temp_r4 + 0x210, arg2);
    func_02061684(arg0, temp_r4 + 0x210, &data_020fab38);
    func_020616b4(arg0, temp_r4 + 0x210, M2C_FIELD(temp_r4, s32 *, 0x198));
    func_02061684(arg0, temp_r4 + 0x210, &data_020faca0);
    func_020616b4(arg0, temp_r4 + 0x210, arg1);
    func_02061684(arg0, temp_r4 + 0x210, &data_020fabb8);
    func_02061684(arg0, temp_r4 + 0x210, sp0);
    func_02061684(arg0, temp_r4 + 0x210, &data_020fab5c);
    return 0;
}
