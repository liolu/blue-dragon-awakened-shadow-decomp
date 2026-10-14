#include "m2c.h"

M2C_UNK func_020dc89c(s32);                         /* extern */
extern s32 data_021672b8;

void func_020dcd44(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0xC) == -1) {
        return;
    }
    func_020dc89c(data_021672b8);
    M2C_FIELD(arg0, s32 *, 0xC) = -1;
}
