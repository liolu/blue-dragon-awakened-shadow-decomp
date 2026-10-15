#include "m2c.h"

extern M2C_UNK data_0210fd4c;

s32 SBIsNullServer(s32 arg0) {
    if (arg0 == M2C_FIELD(&data_0210fd4c, s32 *, 8)) {
        return 1;
    }
    return 0;
}
