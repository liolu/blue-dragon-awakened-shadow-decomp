#include "m2c.h"

s32 func_02008ae0();                                /* extern */
M2C_UNK func_02008af4(s32);                         /* extern */
M2C_UNK func_0203b860();                            /* extern */
extern s32 data_0210e2d0;

void func_0203ba00(void) {
    s32 temp_r5;

    temp_r5 = func_02008ae0();
    if (data_0210e2d0 != 0) {
        do {
            func_0203b860();
        } while (data_0210e2d0 != 0);
    }
    func_02008af4(temp_r5);
}
