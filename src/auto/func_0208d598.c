#include "m2c.h"

M2C_UNK func_0208c8c0();                            /* extern */
extern s16 data_02164ee4;

void func_0208d598(void *arg0) {
    if (data_02164ee4 != M2C_FIELD(arg0, s16 *, 0x14)) {
        return;
    }
    func_0208c8c0();
}
