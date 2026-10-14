#include "m2c.h"

M2C_UNK func_02009978(void *, M2C_UNK, s32);        /* extern */
M2C_UNK func_02059258();                            /* extern */
extern void *data_0210f060;

void func_02059978(void *arg0) {
    data_0210f060 = arg0;
    func_02009978(arg0, 0, 0x614);
    M2C_FIELD(data_0210f060, s16 *, 0x610) = 0x5B9;
    func_02059258();
}
