#include "m2c.h"

M2C_UNK func_02008fc4();                            /* extern */
extern s16 data_02101d08;

void func_02008c74(s32 arg0, s32 arg1) {
    if (((u32) ((arg1 & 0x7F00) << 8) >> 0x10) == 0x10) {
        data_02101d08 = 1;
        return;
    }
    func_02008fc4();
}
