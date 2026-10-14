#include "m2c.h"

M2C_UNK func_020af0f8(M2C_UNK *);                   /* extern */
s32 func_020af268(M2C_UNK *);                       /* extern */
s32 func_020bf738();                                /* extern */
extern M2C_UNK data_02166794;

void func_020af3ec(void *arg0, s32 *arg1) {
    if (M2C_FIELD(arg0, s32 *, 4) == 0) {
        return;
    }
    if (func_020bf738() == 0) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) *arg1;
    func_020af0f8(&data_02166794);
    M2C_FIELD(arg0, s16 *, 0x1E) = (s16) (M2C_FIELD(arg0, s16 *, 0x1E) + 1);
    M2C_FIELD(arg0, s8 *, 0) = 1;
    if (func_020af268(&data_02166794) == 0) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x18) = 0x28;
    M2C_FIELD(arg0, s8 *, 0) = 2;
}
