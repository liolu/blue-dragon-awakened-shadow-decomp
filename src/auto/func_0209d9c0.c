#include "m2c.h"

M2C_UNK func_0209d880();                            /* extern */
M2C_UNK func_ov000_021bcba8(M2C_UNK *);             /* extern */
extern M2C_UNK data_ov000_021f1b24;
extern M2C_UNK data_ov000_021f3004;

void func_0209d9c0(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x69) != 0) {
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x69) = 1U;
    func_0209d880();
    func_ov000_021bcba8(&data_ov000_021f3004);
    func_ov000_021bcba8(&data_ov000_021f1b24);
}
