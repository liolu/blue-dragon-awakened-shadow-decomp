#include "m2c.h"

M2C_UNK func_0207d880(M2C_UNK *, M2C_UNK);          /* extern */
extern M2C_UNK data_021103d0;
extern u8 data_02167184;

void func_0207bc64(s32 arg0, s32 arg1) {
    if (arg1 != 0) {
        data_02167184 &= ~1;
        func_0207d880(&data_021103d0, 1);
        return;
    }
    data_02167184 |= 1;
    func_0207d880(&data_021103d0, 0);
}
