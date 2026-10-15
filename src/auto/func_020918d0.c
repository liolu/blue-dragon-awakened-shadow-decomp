#include "m2c.h"

s32 func_02091838(s32);                             /* extern */
extern void *data_ov000_021ed664;

void func_020918d0(void *arg0) {
    s32 var_r0;
    s32 var_r1;
    s32 var_r2;
    s32 var_r5;
    void *temp_r0;

    if (data_ov000_021ed664 == NULL) {
        return;
    }
    temp_r0 = M2C_FIELD(arg0, void **, 0x68);
    var_r5  = M2C_FIELD(data_ov000_021ed664, s32 *, 0x70);
    if (temp_r0 != NULL) {
        var_r5 -= func_02091838(M2C_FIELD(temp_r0, s32 *, 0x334));
    }
    var_r2 = 0x168 - (var_r5 >> 0xC);
    if (var_r2 < 0) {
        do {
            var_r2 += 0x168;
        } while (var_r2 < 0);
    }
    if (var_r2 > 0x168) {
        do {
            var_r2 -= 0x168;
        } while (var_r2 > 0x168);
    }
    var_r1                        = 0;
    M2C_FIELD(arg0, s32 *, 0x1DC) = 0;
    var_r0                        = 0x2D;
loop_9:
    if (var_r0 > (s32) (var_r2 * 8)) {
        M2C_FIELD(arg0, s32 *, 0x1DC) = var_r1;
        return;
    }
    var_r1 += 1;
    var_r0 += 0x5A;
    if (var_r1 >= 0x20) {
        return;
    }
    goto loop_9;
}
