#include "m2c.h"

s32 func_020b60e8();                                /* extern */

s32 func_020b93a8(void *arg0) {
    s32 temp_r0;
    s32 var_ip;
    u8 temp_r2;
    void *temp_r3;

    temp_r0 = func_020b60e8();
    if (temp_r0 == 0) {
        return 0;
    }
    var_ip = 0;
    do {
        temp_r3 = temp_r0 + var_ip;
        temp_r2 = M2C_FIELD(temp_r3, u8 *, 0x42);
        var_ip += 1;
        M2C_FIELD(temp_r3, s8 *, 0x42) = (s8) (temp_r2 + M2C_FIELD(arg0, s16 *, 0x14));
    } while (var_ip < 6);
    return 1;
}
