#include "m2c.h"

s32 func_0201a164(M2C_UNK *);                       /* extern */
extern M2C_UNK data_020fbc68;

void func_0206fe7c(M2C_UNK **arg0, s32 *arg1) {
    M2C_UNK *temp_r2;

    temp_r2 = *arg0;
    if (temp_r2 == NULL) {
        *arg0 = &data_020fbc68;
        *arg1 = 0;
        return;
    }
    if (*arg1 != -1) {
        return;
    }
    *arg1 = func_0201a164(temp_r2) + 1;
}
