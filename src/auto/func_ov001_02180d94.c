#include "m2c.h"

M2C_UNK func_020068c0(M2C_UNK, M2C_UNK *, u8, u8, s32, s32); /* extern */
extern M2C_UNK data_ov001_02193ea4;
extern void *data_ov001_02196c48;

void func_ov001_02180d94(M2C_UNK arg0) {
    void *temp_ip;

    temp_ip = data_ov001_02196c48 + 0x4F0;
    func_020068c0(arg0, &data_ov001_02193ea4, M2C_FIELD(data_ov001_02196c48, u8 *, 0x4F0), M2C_FIELD(temp_ip, u8 *, 1),
                  (s32) M2C_FIELD(temp_ip, u8 *, 2), (s32) M2C_FIELD(temp_ip, u8 *, 3));
}
