#include "m2c.h"

M2C_UNK func_02077f50(s32);                         /* extern */
M2C_UNK func_020d3960();                            /* extern */
M2C_UNK func_020db9ac(s32);                         /* extern */
extern s8 data_021671c0;
extern M2C_UNK data_0216722c;

s32 func_020d3908(s32 arg0) {
    data_021671c0 = 0;
    func_020d3960();
    M2C_FIELD(&data_0216722c, s32 *, 8) = 0;
    func_02077f50(arg0 + 0x83C);
    func_020db9ac(arg0 + 0x148);
    func_02077f50(arg0 + 0x11C);
    func_02077f50(arg0 + 0xFC);
    return arg0;
}
