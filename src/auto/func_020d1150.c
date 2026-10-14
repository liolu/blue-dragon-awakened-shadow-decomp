#include "m2c.h"

M2C_UNK func_020986e0(s32);                         /* extern */
extern s32 data_0216581c;

void func_020d1150(void *arg0) {
    if (M2C_FIELD(arg0, s16 *, 0x10) != -1) {
        func_020986e0(data_0216581c);
        M2C_FIELD(arg0, s16 *, 0x10) = -1;
    }
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    M2C_FIELD(arg0, s32 *, 4) = 0;
}
