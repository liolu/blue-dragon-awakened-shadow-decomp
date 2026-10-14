#include "m2c.h"

void func_0207e538(void *arg0, s8 arg1, void *arg2) {
    M2C_FIELD(arg0, s8 *, 0x64) = arg1;
    if (arg2 == NULL) {
        return;
    }
    M2C_FIELD(arg0, u16 *, 0x32) = (u16) M2C_FIELD(arg2, u16 *, 0);
    M2C_FIELD(arg0, u16 *, 0x34) = (u16) M2C_FIELD(arg2, u16 *, 2);
    M2C_FIELD(arg0, u16 *, 0x36) = (u16) M2C_FIELD(arg2, u16 *, 4);
    M2C_FIELD(arg0, u16 *, 0x38) = (u16) M2C_FIELD(arg2, u16 *, 6);
}
