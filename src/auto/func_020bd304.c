#include "m2c.h"

M2C_UNK func_02081090(s32);                         /* extern */
extern s32 data_02164e04;

void func_020bd304(s16 *arg0) {
    if (*arg0 == -1) {
        return;
    }
    func_02081090(data_02164e04 + 0x2C);
}
