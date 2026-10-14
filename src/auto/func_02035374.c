#include "m2c.h"

M2C_UNK func_02007204(M2C_UNK *, s32);              /* extern */
extern s32 data_020f8edc;
extern M2C_UNK data_0210cbc4;
extern M2C_UNK data_0210cc84;

void func_02035374(s32 arg0) {
    data_020f8edc = arg0;
    func_02007204(&data_0210cc84, arg0);
    func_02007204(&data_0210cbc4, arg0);
}
