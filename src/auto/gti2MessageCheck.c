#include "m2c.h"

s32 strlen(M2C_UNK *);                       /* extern */
extern M2C_UNK data_020fbc68;

void gti2MessageCheck(M2C_UNK **arg0, s32 *arg1) {
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
    *arg1 = strlen(temp_r2) + 1;
}
