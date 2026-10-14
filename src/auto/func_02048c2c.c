#include "m2c.h"

M2C_UNK func_02006fe4(void *);                      /* extern */
M2C_UNK func_020077e8(s32);                         /* extern */
M2C_UNK func_0200786c(void *);                      /* extern */
M2C_UNK func_0204a0fc();                            /* extern */
extern M2C_UNK data_0210e654;

void func_02048c2c(void) {
    if (M2C_FIELD(&data_0210e654, void **, 8) == NULL) {
        return;
    }
    func_020077e8(M2C_FIELD(&data_0210e654, void **, 8) + 0x13D8);
    M2C_FIELD(M2C_FIELD(&data_0210e654, void **, 8), s32 *, 0x13F0) = 1;
    func_0200786c(M2C_FIELD(&data_0210e654, void **, 8) + 0x13D8);
    if (M2C_FIELD(M2C_FIELD(&data_0210e654, void **, 8), s32 *, 0x1314) != 0) {
        func_0204a0fc();
    }
    if (M2C_FIELD(M2C_FIELD(&data_0210e654, void **, 8), s32 *, 0x1384) == 0) {
        return;
    }
    func_02006fe4(M2C_FIELD(&data_0210e654, void **, 8) + 0x1318);
}
