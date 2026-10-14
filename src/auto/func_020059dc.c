#include "m2c.h"

s32 func_020040b0();                                /* extern */
extern M2C_UNK data_021018e0;

void func_020059dc(void) {
    s32 temp_r0;

    temp_r0 = func_020040b0();
    M2C_FIELD(&data_021018e0, s32 *, 8) = temp_r0;
    switch (temp_r0) {                              /* irregular */
    case 0x0:
        return;
    case 0x40:
        M2C_FIELD(&data_021018e0, s32 *, 4) = 0x06894000;
        return;
    case 0x20:
        M2C_FIELD(&data_021018e0, s32 *, 4) = 0x06890000;
        return;
    }
}
