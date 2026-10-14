#include "m2c.h"

M2C_UNK func_020810f0(s32);                         /* extern */
extern s32 data_02164e04;

void func_020bd350(void *arg0) {
    if (M2C_FIELD(arg0, s16 *, 0) == -1) {
        return;
    }
    func_020810f0(data_02164e04 + 0x2C);
    M2C_FIELD(arg0, s16 *, 0) = -1;
    M2C_FIELD(arg0, s32 *, 4) = 0;
}
