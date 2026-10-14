#include "m2c.h"

M2C_UNK func_020986e0(s32);                         /* extern */
extern s32 data_0216581c;

void *func_02099a3c(void *arg0) {
    if (M2C_FIELD(arg0, s16 *, 0x74) != -1) {
        func_020986e0(data_0216581c);
        M2C_FIELD(arg0, s16 *, 0x74) = -1;
    }
    M2C_FIELD(arg0, s32 *, 0) = 0;
    return arg0;
}
