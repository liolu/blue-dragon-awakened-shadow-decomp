#include "m2c.h"

s32 TableNew2(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
extern M2C_UNK data_0210fd4c;
extern M2C_UNK func_020742b4;
extern M2C_UNK func_020742c4;
extern M2C_UNK RefStringFree;

s32 SBRefStrHash(void) {
    if (M2C_FIELD(&data_0210fd4c, s32 *, 4) == 0) {
        M2C_FIELD(&data_0210fd4c, s32 *, 4) = TableNew2(8, 0x64, 2, &func_020742b4, &func_020742c4, &RefStringFree);
    }
    return M2C_FIELD(&data_0210fd4c, s32 *, 4);
}
