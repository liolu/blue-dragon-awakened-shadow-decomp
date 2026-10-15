#include "m2c.h"

M2C_UNK func_ov000_021bfe28();                      /* extern */
extern M2C_UNK data_ov000_021f4950;

void func_0209d9f8(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x6C) != 0) {
        return;
    }
    M2C_FIELD(arg0, u8 *, 0x6C)                 = 1U;
    M2C_FIELD(&data_ov000_021f4950, u8 *, 0x47) = (u8) M2C_FIELD(arg0, u8 *, 0x6D);
    func_ov000_021bfe28();
    *(u16 *) 0x04000008 = (*(u16 *) 0x04000008 & ~3) | 3;
}
