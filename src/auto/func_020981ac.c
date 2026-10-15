#include "m2c.h"

s32 strstr(M2C_UNK, M2C_UNK *);              /* extern */
extern M2C_UNK data_020fe36c;

s32 func_020981ac(M2C_UNK arg0) {
    if (strstr(arg0, &data_020fe36c) != 0) {
        return 1;
    }
    return 0;
}
