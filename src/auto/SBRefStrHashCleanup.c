#include "m2c.h"

M2C_UNK TableFree(s32);                         /* extern */
s32 func_0205bdb0();                                /* extern */
extern M2C_UNK data_0210fd4c;

void SBRefStrHashCleanup(void) {
    if (M2C_FIELD(&data_0210fd4c, s32 *, 4) == 0) {
        return;
    }
    if (func_0205bdb0() != 0) {
        return;
    }
    TableFree(M2C_FIELD(&data_0210fd4c, s32 *, 4));
    M2C_FIELD(&data_0210fd4c, s32 *, 4) = 0;
}
