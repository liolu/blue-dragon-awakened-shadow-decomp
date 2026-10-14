#include "m2c.h"

M2C_UNK func_020077e8(s32);                         /* extern */
M2C_UNK func_0200786c(void *);                      /* extern */
extern M2C_UNK data_0210e654;

void func_02049824(s32 arg0) {
    func_020077e8(M2C_FIELD(&data_0210e654, void **, 8) + 0x13D8);
    M2C_FIELD(M2C_FIELD(&data_0210e654, void **, 8), s32 *, 0x1004) = arg0;
    func_0200786c(M2C_FIELD(&data_0210e654, void **, 8) + 0x13D8);
}
