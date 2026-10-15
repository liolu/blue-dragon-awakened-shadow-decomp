#include "m2c.h"

void gti2BufferWriteUShort(void *arg0, s8 arg1) {
    s32 temp_ip;
    s32 temp_r3;

    temp_ip                                       = M2C_FIELD(arg0, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 8)                     = (s32) (temp_ip + 1);
    *(s8 *) (M2C_FIELD(arg0, s32 *, 0) + temp_ip) = (s8) (arg1 >> 8);
    temp_r3                                       = M2C_FIELD(arg0, s32 *, 8);
    M2C_FIELD(arg0, s32 *, 8)                     = (s32) (temp_r3 + 1);
    *(s8 *) (M2C_FIELD(arg0, s32 *, 0) + temp_r3) = arg1;
}