#include "m2c.h"

M2C_UNK func_02044820(M2C_UNK, s32, s32);           /* extern */
extern M2C_UNK data_0210e630;

void func_02044b6c(void) {
    func_02044820(8, M2C_FIELD(&data_0210e630, s32 *, 8), 0xC);
    func_02044820(0x10, M2C_FIELD(&data_0210e630, s32 *, 0x10), 0xD18);
}
