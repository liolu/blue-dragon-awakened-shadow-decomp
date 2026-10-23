#include "m2c.h"

s32 func_ov001_02186440(M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
void *func_ov001_02186dc4(s32);                     /* extern */
extern void *data_ov001_02196b8c;

void *func_ov001_02172454(M2C_UNK arg0) {
    M2C_UNK sp0;
    void *temp_r2;
    void *temp_r4;

    temp_r4                        = func_ov001_02186dc4(M2C_FIELD(data_ov001_02196b8c, s32 *, 0x60));
    M2C_FIELD(temp_r4, s32 *, 8)   = func_ov001_02186440(arg0, &sp0, 4);
    temp_r2                        = M2C_FIELD(temp_r4, s32 *, 8) + 0x20;
    M2C_FIELD(temp_r4, s32 *, 0)   = (s32) (temp_r2 + 0x10);
    M2C_FIELD(temp_r4, void **, 4) = (void *) (temp_r2 + M2C_FIELD(temp_r2, s32 *, 4) + 8);
    return temp_r4;
}
