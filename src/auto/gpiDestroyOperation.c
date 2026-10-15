#include "m2c.h"

M2C_UNK closesocket(s32);                         /* extern */
M2C_UNK shutdown(s32, M2C_UNK);                /* extern */
M2C_UNK gsifree(void *);                      /* extern */

void gpiDestroyOperation(void **arg0, void *arg1) {
    void *temp_r2;
    void *temp_r5;

    temp_r2 = *arg0;
    if (M2C_FIELD(arg1, s32 *, 0) == 3) {
        temp_r5                          = M2C_FIELD(arg1, void **, 4);
        M2C_FIELD(temp_r2, s32 *, 0x238) = (s32) (M2C_FIELD(temp_r2, s32 *, 0x238) - 1);
        shutdown(M2C_FIELD(temp_r5, s32 *, 4), 2);
        closesocket(M2C_FIELD(temp_r5, s32 *, 4));
        gsifree(M2C_FIELD(temp_r5, void **, 0x18));
        M2C_FIELD(temp_r5, void **, 0x18) = NULL;
        gsifree(M2C_FIELD(temp_r5, void **, 8));
        M2C_FIELD(temp_r5, void **, 8) = NULL;
    }
    gsifree(M2C_FIELD(arg1, void **, 4));
    M2C_FIELD(arg1, void **, 4) = NULL;
    gsifree(arg1);
}
