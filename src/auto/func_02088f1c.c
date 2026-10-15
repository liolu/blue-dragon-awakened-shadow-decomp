#include "m2c.h"

extern M2C_UNK data_021103d0;

s32 func_02088f1c(void **arg0) {
    void *temp_r3;

    temp_r3                        = *arg0;
    M2C_FIELD(temp_r3, s32 *, 0)   = (s32) M2C_FIELD(&data_021103d0, s32 *, 0x38);
    M2C_FIELD(temp_r3, s32 *, 4)   = (s32) M2C_FIELD(&data_021103d0, s32 *, 0x3C);
    M2C_FIELD(temp_r3, s32 *, 8)   = (s32) M2C_FIELD(&data_021103d0, s32 *, 0x44);
    M2C_FIELD(temp_r3, s32 *, 0xC) = (s32) M2C_FIELD(&data_021103d0, s32 *, 0x40);
    return 0;
}
