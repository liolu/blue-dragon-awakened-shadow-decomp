#include "m2c.h"

s32 ip_islocal();                                /* extern */
extern M2C_UNK wfailed;

s32 is_broadcast(s32 arg0) {
    s32 temp_r1;
    s32 var_r4;

    var_r4 = 0;
    if (ip_islocal() != 0) {
        temp_r1 = ~M2C_FIELD(&wfailed, s32 *, 0x1C);
        if (temp_r1 == (temp_r1 & arg0)) {
            var_r4 = 1;
        }
    }
    return var_r4;
}
