#include "m2c.h"

s32 func_0205bce8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
extern M2C_UNK data_0210fd4c;
extern M2C_UNK func_020742b4;
extern M2C_UNK func_020742c4;
extern M2C_UNK func_020742d8;

s32 func_020742e8(void) {
    if (M2C_FIELD(&data_0210fd4c, s32 *, 4) == 0) {
        M2C_FIELD(&data_0210fd4c, s32 *, 4) = func_0205bce8(8, 0x64, 2, &func_020742b4, &func_020742c4, &func_020742d8);
    }
    return M2C_FIELD(&data_0210fd4c, s32 *, 4);
}
