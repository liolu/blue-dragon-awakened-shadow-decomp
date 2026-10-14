#include "m2c.h"

M2C_UNK func_ov000_0218a208(s32);                   /* extern */
M2C_UNK func_ov000_021d6d9c(s32);                   /* extern */
extern s32 data_ov000_021ee214;
extern s32 data_ov000_021f6260;

void func_020ce3a8(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x2D) != 0) {
        func_ov000_0218a208(data_ov000_021ee214);
        return;
    }
    func_ov000_021d6d9c(data_ov000_021f6260);
}
