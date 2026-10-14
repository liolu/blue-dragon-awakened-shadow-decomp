#include "m2c.h"

M2C_UNK func_02009fd4(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_0200a5f4(M2C_UNK);                     /* extern */
M2C_UNK func_0200a7b0(s32);                         /* extern */
s32 func_0200a81c();                                /* extern */
M2C_UNK func_02033208();                            /* extern */

void func_02031efc(void) {
    s32 temp_r4;

    func_02033208();
    func_02009fd4(0, 0, 0, 0);
    temp_r4 = func_0200a81c();
    func_0200a5f4(1);
    func_0200a7b0(temp_r4);
}
