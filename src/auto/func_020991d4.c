#include "m2c.h"

M2C_UNK func_020986e0(s32);                         /* extern */
extern s32 data_0216581c;

void func_020991d4(void *arg0, s32 arg1) {
    s32 var_ip;
    s32 var_lr;
    u8 temp_r2;
    void *var_r5;

    var_lr = 0;
    var_r5 = arg0;
    var_ip = 1;
    do {
        var_lr += 1;
        if (arg1 == M2C_FIELD(var_r5, s32 *, 4)) {
            M2C_FIELD(var_r5, u8 *, 0x2C) = 0U;
        }
        temp_r2 = M2C_FIELD(var_r5, u8 *, 0x2C);
        var_r5 += 0x2C;
        if (temp_r2 & 1) {
            var_ip = 0;
        }
    } while (var_lr < 4);
    if ((var_ip != 0) && (M2C_FIELD(arg0, s16 *, 0xB4) != -1)) {
        func_020986e0(data_0216581c);
        M2C_FIELD(arg0, s16 *, 0xB4) = -1;
    }
}
