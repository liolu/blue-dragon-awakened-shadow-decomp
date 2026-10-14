#include "m2c.h"

M2C_UNK func_02008fc4();                            /* extern */
extern s16 data_02104e84;

void func_02015520(s32 arg0, s32 arg1) {
    if ((arg1 & 0x3F) == 1) {
        data_02104e84 = 1;
        return;
    }
    func_02008fc4();
}
