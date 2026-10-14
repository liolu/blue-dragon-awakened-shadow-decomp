#include "m2c.h"

M2C_UNK func_020af870(M2C_UNK *, M2C_UNK);          /* extern */
extern M2C_UNK data_02166810;
extern M2C_UNK data_02166c54;

void func_020b0438(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x31) != 0) {
        return;
    }
    func_020af870(&data_02166c54, 0);
    func_020af870(&data_02166810, 2);
    M2C_FIELD(arg0, s8 *, 0x20) = 1;
    M2C_FIELD(arg0, u8 *, 0x31) = 1U;
}
