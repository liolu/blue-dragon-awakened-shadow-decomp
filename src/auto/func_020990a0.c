#include "m2c.h"

M2C_UNK func_020986e0(s32);                         /* extern */
extern s32 data_0216581c;

void *func_020990a0(void *arg0) {
    if (M2C_FIELD(arg0, s16 *, 0xB4) != -1) {
        func_020986e0(data_0216581c);
        M2C_FIELD(arg0, s16 *, 0xB4) = -1;
    }
    M2C_FIELD(arg0, s32 *, 0) = 0;
    return arg0;
}
