#include "m2c.h"

s32 func_0205a9e8(M2C_UNK, M2C_UNK, u16 *);         /* extern */
extern M2C_UNK data_0210f064;

s32 func_0205a2ac(u16 *arg0) {
    if (func_0205a9e8(0x20, 0x20, arg0) == 0) {
        return 0;
    }
    M2C_FIELD(&data_0210f064, s32 *, 8) = (s32) ((*arg0 * 8) - 0x400);
    return 1;
}
