#include "m2c.h"

M2C_UNK func_020d2e48(s32, s32, s32);               /* extern */
extern M2C_UNK data_02101050;
extern M2C_UNK data_02101054;

void func_020c4100(s32 arg0) {
    s32 temp_r3;

    if (arg0 < 0) {
        return;
    }
    if (arg0 >= 0x10) {
        return;
    }
    temp_r3 = arg0 * 0xC;
    func_020d2e48(arg0, *((M2C_UNK *) ((s8 *) &data_02101050 + temp_r3)), *((M2C_UNK *) ((s8 *) &data_02101054 + temp_r3)));
}
