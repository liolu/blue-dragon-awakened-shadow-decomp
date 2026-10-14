#include "m2c.h"

void func_020c537c(void *arg0) {
    if (M2C_FIELD(arg0, void **, 0x18) == NULL) {
        return;
    }
    M2C_FIELD(arg0, u16 *, 0x30) = (u16) (M2C_FIELD(arg0, u16 *, 0x30) & 0xFFC0);
    M2C_FIELD(arg0, u16 *, 0x30) = (u16) (M2C_FIELD(arg0, u16 *, 0x30) | M2C_FIELD(M2C_FIELD(arg0, void **, 0x18), u16 *, 0x88));
    M2C_FIELD(M2C_FIELD(arg0, void **, 0), M2C_UNK (**)(), 0x54)(arg0);
}
