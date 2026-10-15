#include "m2c.h"

M2C_UNK func_020d1e9c();                            /* extern */
M2C_UNK func_020d1f80();                            /* extern */
M2C_UNK func_020d1fb0(s8);                          /* extern */
extern s32 data_021671c8;

s32 func_020890a0(void *arg0) {
    s32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0);
    switch (temp_r1) {                              /* irregular */
        case 0:
            func_020d1fb0((s8) M2C_FIELD(arg0, s32 *, 4));
            break;
        case 1:
            if (data_021671c8 != 0) {
                func_020d1e9c();
            }
            break;
        case 2:
            if (data_021671c8 != 0) {
                func_020d1f80();
            }
            break;
    }
    return 0;
}
