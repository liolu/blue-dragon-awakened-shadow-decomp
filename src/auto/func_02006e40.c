#include "m2c.h"

M2C_UNK func_02006e60(s32, M2C_UNK);                /* extern */
M2C_UNK func_02008ae0();                            /* extern */
extern M2C_UNK data_02101980;

void func_02006e40(void) {
    func_02008ae0();
    func_02006e60(M2C_FIELD(&data_02101980, s32 *, 0x28), 0);
}
