#include "m2c.h"

s32 func_02081680(void *arg0, s32 arg1, s8 arg2) {
    void *temp_ip;
    void *temp_r2;

    temp_ip = M2C_FIELD(arg0, void **, 0x60C);
    if (M2C_FIELD(temp_ip, u8 *, 0) != 0) {
        return 0;
    }
    M2C_FIELD(temp_ip, s32 *, 4) = arg1;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x60C), s8 *, 1) = arg2;
    M2C_FIELD(M2C_FIELD(arg0, void **, 0x60C), u8 *, 0) = 1U;
    temp_r2 = M2C_FIELD(arg0, void **, 0x60C) + 8;
    M2C_FIELD(arg0, void **, 0x60C) = temp_r2;
    if (temp_r2 == (arg0 + 0x710)) {
        M2C_FIELD(arg0, void **, 0x60C) = (void *) (arg0 + 0x610);
    }
    return 1;
}
