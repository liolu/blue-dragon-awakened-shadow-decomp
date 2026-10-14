#include "m2c.h"

s32 func_02007540();                                /* extern */
s32 func_02007cbc(M2C_UNK);                         /* extern */
s32 func_02007da0(M2C_UNK);                         /* extern */
M2C_UNK func_02007e48(M2C_UNK, s32);                /* extern */
M2C_UNK func_02007e5c(M2C_UNK, s32);                /* extern */
M2C_UNK func_02008228(s32);                         /* extern */
M2C_UNK func_02008230(s32);                         /* extern */
extern M2C_UNK data_02101bfc;

void func_02007c28(void) {
    func_02007e48(2, func_02007cbc(2));
    func_02007e5c(2, func_02007da0(2));
    if ((M2C_FIELD(&data_02101bfc, s32 *, 4) != 0) && ((func_02007540() & 3) != 1)) {
        return;
    }
    func_02008228(0x0200002B);
    func_02008230(0x023E0021);
}
