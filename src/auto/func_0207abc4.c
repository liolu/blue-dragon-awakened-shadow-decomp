#include "m2c.h"

M2C_UNK func_02026e14(s32, M2C_UNK, M2C_UNK, M2C_UNK *); /* extern */
M2C_UNK func_0207cb80(s32);                         /* extern */
extern M2C_UNK func_02077f50;
extern M2C_UNK func_02078a04;
extern M2C_UNK func_0207ab04;

s32 func_0207abc4(s32 arg0) {
    func_02026e14(arg0 + 0x138, 4, 0x20, &func_02077f50);
    func_02026e14(arg0 + 0x108, 4, 0xC, &func_0207ab04);
    func_02026e14(arg0 + 0xA8, 3, 0x20, &func_02077f50);
    func_02026e14(arg0 + 0xC, 3, 0x34, &func_02078a04);
    func_0207cb80(arg0);
    return arg0;
}
