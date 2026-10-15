#include "m2c.h"

M2C_UNK sendto(s32, M2C_UNK *, s32, M2C_UNK, M2C_UNK *, s32); /* extern */
s32 current_time();                                /* extern */
extern M2C_UNK data_0210f19c;
extern M2C_UNK data_0210f1a0;
extern M2C_UNK data_0210f1a8;

void func_0205cbe4(void) {
    sendto(M2C_FIELD(&data_0210f19c, s32 *, 0), &data_0210f1a8, M2C_FIELD(&data_0210f19c, s32 *, 0x4C), 0, &data_0210f1a0, 8);
    M2C_FIELD(&data_0210f19c, s32 *, 0x50) = current_time();
}
