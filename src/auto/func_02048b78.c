#include "m2c.h"

M2C_UNK func_02006d44(void *, M2C_UNK *, M2C_UNK *, void *, s32, s32); /* extern */
s32 func_02007014(void *);                          /* extern */
M2C_UNK func_020070e0(void *);                      /* extern */
M2C_UNK func_020077d0(s32);                         /* extern */
extern M2C_UNK data_0210e654;
extern M2C_UNK data_0210e65c;
extern M2C_UNK func_02048f2c;

void func_02048b78(void) {
    func_020077d0(M2C_FIELD(&data_0210e654, void **, 8) + 0x13D8);
    M2C_FIELD(M2C_FIELD(&data_0210e654, void **, 8), s32 *, 0x13F0) = 0;
    if ((M2C_FIELD(M2C_FIELD(&data_0210e654, void **, 8), s32 *, 0x1384) != 0) && (func_02007014(M2C_FIELD(&data_0210e654, void **, 8) + 0x1318) == 0)) {
        return;
    }
    func_02006d44(M2C_FIELD(&data_0210e654, void **, 8) + 0x1318, &func_02048f2c, &data_0210e65c, M2C_FIELD(&data_0210e654, void **, 8) + 0x1000, 0x1000, 0x10);
    func_020070e0(M2C_FIELD(&data_0210e654, void **, 8) + 0x1318);
}
