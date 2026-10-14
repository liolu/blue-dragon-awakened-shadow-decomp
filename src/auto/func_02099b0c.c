#include "m2c.h"

M2C_UNK func_020986e0(s32);                         /* extern */
extern s32 data_0216581c;

void func_02099b0c(void *arg0, s32 arg1) {
    s32 var_r3;
    void *var_ip;

    var_r3 = 0;
    var_ip = arg0;
    do {
        var_r3 += 1;
        if (arg1 == M2C_FIELD(var_ip, s32 *, 4)) {
            M2C_FIELD(var_ip, s8 *, 0x38) = 0;
        }
        var_ip += 0x38;
    } while (var_r3 < 2);
    if (M2C_FIELD(arg0, s16 *, 0x74) == -1) {
        return;
    }
    func_020986e0(data_0216581c);
    M2C_FIELD(arg0, s16 *, 0x74) = -1;
}
