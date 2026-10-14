#include "m2c.h"

M2C_UNK func_02006fe4(void *);                      /* extern */
extern M2C_UNK data_0210e654;

void func_02048d10(void) {
    if (M2C_FIELD(M2C_FIELD(&data_0210e654, void **, 8), s32 *, 0x1384) == 0) {
        return;
    }
    func_02006fe4(M2C_FIELD(&data_0210e654, void **, 8) + 0x1318);
}
