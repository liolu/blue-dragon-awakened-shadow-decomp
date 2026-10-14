#include "m2c.h"

s32 func_020a6770();                                /* extern */
M2C_UNK func_ov000_021d2228();                      /* extern */
s32 func_ov000_021d34f4();                          /* extern */
s32 func_ov000_021d8080(s32, s32);                  /* extern */
extern s32 data_ov000_021f6260;

s32 func_0208a254(void) {
    s32 var_r0;
    s32 var_r0_2;
    s32 var_r5;
    s32 var_r6;

    if (func_020a6770() == 0) {
        return 1;
    }
    var_r5 = 0;
    var_r6 = 0;
loop_3:
    if (func_ov000_021d8080(data_ov000_021f6260, var_r6) == 2) {
        var_r5 = 1;
    } else {
        var_r6 += 1;
        if (var_r6 < 3) {
            goto loop_3;
        }
    }
    if (var_r5 != 0) {
        func_ov000_021d2228();
        if (func_ov000_021d34f4() == 0) {
            var_r0_2 = 1;
        } else {
            var_r0_2 = 0;
        }
        if (var_r0_2 != 0) {
            var_r0 = 1;
        } else {
            var_r0 = 0;
        }
        return var_r0;
    }
    return 1;
}
