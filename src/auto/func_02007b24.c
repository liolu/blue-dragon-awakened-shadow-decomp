#include "m2c.h"

s32 func_02007cbc(M2C_UNK);                         /* extern */
s32 func_02007da0(M2C_UNK);                         /* extern */
M2C_UNK func_02007e48(M2C_UNK, s32);                /* extern */
M2C_UNK func_02007e5c(M2C_UNK, s32);                /* extern */
extern s32 data_02101bfc;

void func_02007b24(void) {
    if (data_02101bfc != 0) {
        return;
    }
    data_02101bfc = 1;
    func_02007e48(0, func_02007cbc(0));
    func_02007e5c(0, func_02007da0(0));
    func_02007e5c(2, 0);
    func_02007e48(2, 0);
    func_02007e48(3, func_02007cbc(3));
    func_02007e5c(3, func_02007da0(3));
    func_02007e48(4, func_02007cbc(4));
    func_02007e5c(4, func_02007da0(4));
    func_02007e48(5, func_02007cbc(5));
    func_02007e5c(5, func_02007da0(5));
    func_02007e48(6, func_02007cbc(6));
    func_02007e5c(6, func_02007da0(6));
}
