#include "m2c.h"

extern u8 data_02167177;
extern u8 data_02167179;
extern u8 data_021671c0;

u8 func_02089d8c(s32 *arg0) {
    s32 temp_r1;
    u8 var_r0;

    temp_r1 = *arg0;
    var_r0  = 0;
    switch (temp_r1) {                              /* irregular */
        case 8:
            var_r0 = data_02167179;
        /* fallthrough */
        default:
            return var_r0;
        case 0:
            return data_02167177;
        case 1:
            return data_021671c0;
    }
}
