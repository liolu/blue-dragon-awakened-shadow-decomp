#include "m2c.h"

M2C_UNK func_0205bd64(s32);                         /* extern */
s32 func_0205bdb0();                                /* extern */
extern M2C_UNK data_0210fd4c;

void func_0207434c(void) {
    if (M2C_FIELD(&data_0210fd4c, s32 *, 4) == 0) {
        return;
    }
    if (func_0205bdb0() != 0) {
        return;
    }
    func_0205bd64(M2C_FIELD(&data_0210fd4c, s32 *, 4));
    M2C_FIELD(&data_0210fd4c, s32 *, 4) = 0;
}
