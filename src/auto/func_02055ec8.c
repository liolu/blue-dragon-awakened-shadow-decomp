#include "m2c.h"

s32 func_020540d0(M2C_UNK, M2C_UNK, s32, u16, s32, s32); /* extern */
void *func_02059234();                              /* extern */

s32 func_02055ec8(M2C_UNK arg0) {
    s32 temp_r4;
    void *temp_r4_2;

    temp_r4_2 = func_02059234();
    temp_r4 = func_020540d0(5, arg0, M2C_FIELD(temp_r4_2, s32 *, 0x24), M2C_FIELD(func_02059234(), u16 *, 0xA4), 0, 0);
    M2C_FIELD(func_02059234(), s32 *, 0x204) = 0;
    return temp_r4;
}
