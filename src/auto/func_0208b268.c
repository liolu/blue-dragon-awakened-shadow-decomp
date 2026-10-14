#include "m2c.h"

M2C_UNK func_0207803c(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_020780b0(void *, M2C_UNK *, M2C_UNK, M2C_UNK, s32, s32); /* extern */
M2C_UNK func_02078304(void *, M2C_UNK *, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_0208b360(void *);                      /* extern */
extern M2C_UNK data_020fdc2c;
extern M2C_UNK data_020fdc40;

void func_0208b268(void *arg0, s32 arg1, s8 arg2) {
    if (M2C_FIELD(arg0, s32 *, 0x40) != 0) {
        return;
    }
    func_0207803c(arg0, 0x168, 0x10, 0);
    M2C_FIELD(arg0, s8 *, 0x44) = arg2;
    if (arg1 != 0) {
        M2C_FIELD(arg0, s32 *, 0x40) = 1;
        func_02078304(arg0 + 0x20, &data_020fdc2c, 0, 0, 0x10);
        return;
    }
    func_020780b0(arg0 + 0x20, &data_020fdc40, 0, 0, 0x10, 0);
    func_0208b360(arg0);
}
