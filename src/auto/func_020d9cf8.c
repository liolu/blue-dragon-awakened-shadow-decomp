#include "m2c.h"

M2C_UNK func_020da184(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_ov000_021c29b4(M2C_UNK *, M2C_UNK, s32); /* extern */
extern M2C_UNK data_021015a0;
extern u8 data_02167238;
extern M2C_UNK data_02167280;

void func_020d9cf8(void) {
    if (data_02167238 != 0) {
        return;
    }
    data_02167238 = 1;
    func_020da184(&data_02167280, 0);
    func_ov000_021c29b4(&data_021015a0, 0x45, 0x4650);
}
