#include "m2c.h"

s32 func_02008ae0();                                /* extern */
M2C_UNK func_02008af4(s32);                         /* extern */
void *func_020125bc();                              /* extern */
s32 func_020125cc();                                /* extern */

s32 func_02012b10(s32 arg0) {
    s32 temp_r0;
    s32 temp_r5;

    temp_r5 = func_02008ae0();
    temp_r0 = func_020125cc();
    if (temp_r0 != 0) {
        func_02008af4(temp_r5);
        return temp_r0;
    }
    M2C_FIELD(func_020125bc(), s32 *, 0xC8) = arg0;
    func_02008af4(temp_r5);
    return 0;
}
