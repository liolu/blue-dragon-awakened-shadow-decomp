#include "m2c.h"

M2C_UNK func_020ad314(M2C_UNK *);                   /* extern */
s32 func_020ad484(M2C_UNK *);                       /* extern */
s32 func_020bf738();                                /* extern */
extern M2C_UNK data_02166710;

void func_020ad610(void *arg0, s32 *arg1) {
    if (M2C_FIELD(arg0, s32 *, 4) == 0) {
        return;
    }
    if (func_020bf738() == 0) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) *arg1;
    func_020ad314(&data_02166710);
    M2C_FIELD(arg0, s8 *, 0) = 1;
    if (func_020ad484(&data_02166710) != 0) {
        M2C_FIELD(arg0, s8 *, 0) = 2;
    }
}
