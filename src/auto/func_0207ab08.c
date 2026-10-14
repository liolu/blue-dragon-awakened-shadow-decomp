#include "m2c.h"

M2C_UNK func_02026d64(void *, M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_0207caa8(void *, M2C_UNK);             /* extern */
extern M2C_UNK data_020fd1f8;
extern M2C_UNK func_02077f14;
extern M2C_UNK func_02077f50;
extern M2C_UNK func_020789cc;
extern M2C_UNK func_02078a04;
extern M2C_UNK func_02079e54;
extern M2C_UNK func_0207ab04;

void *func_0207ab08(void *arg0) {
    func_0207caa8(arg0, 2);
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_020fd1f8;
    func_02026d64(arg0 + 0xC, 3, 0x34, &func_020789cc, &func_02078a04);
    func_02026d64(arg0 + 0xA8, 3, 0x20, &func_02077f14, &func_02077f50);
    func_02026d64(arg0 + 0x108, 4, 0xC, &func_02079e54, &func_0207ab04);
    func_02026d64(arg0 + 0x138, 4, 0x20, &func_02077f14, &func_02077f50);
    M2C_FIELD(arg0, s8 *, 0x1B8) = 0;
    return arg0;
}
