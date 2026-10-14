#include "m2c.h"

M2C_UNK func_020097d0(M2C_UNK, void *, M2C_UNK);    /* extern */
void *func_020449a8(M2C_UNK);                       /* extern */
u8 func_02045bb0(void *);                           /* extern */
u8 func_02045c10(void *);                           /* extern */
u8 func_02045e04();                                 /* extern */
s8 func_02045e94(void *);                           /* extern */

u8 func_02045ad0(s32 arg0) {
    void *temp_r4;

    temp_r4 = func_020449a8(0x10);
    switch (arg0) {                                 /* irregular */
    case 0:
        func_020097d0(0, temp_r4 + 0x300, 0x144);
        M2C_FIELD(temp_r4, u8 *, 0xD10) = func_02045bb0(temp_r4);
        break;
    case 1:
        M2C_FIELD(temp_r4, u8 *, 0xD10) = func_02045e04();
        M2C_FIELD(temp_r4, s8 *, 0xD0F) = func_02045e94(temp_r4);
        break;
    case 2:
        func_020097d0(0, temp_r4 + 0x300, 0x144);
        M2C_FIELD(temp_r4, s8 *, 0xD0F) = 0;
        M2C_FIELD(temp_r4, u8 *, 0xD10) = func_02045c10(temp_r4);
        break;
    }
    return M2C_FIELD(temp_r4, u8 *, 0xD10);
}
