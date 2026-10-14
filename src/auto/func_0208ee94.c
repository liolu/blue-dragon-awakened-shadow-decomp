#include "m2c.h"

void *func_0208c3f8(s16);                           /* extern */

s32 func_0208ee94(void *arg0) {
    s16 *temp_r1;
    s16 *temp_r2;
    void *temp_r0;

    temp_r0 = func_0208c3f8((s16) M2C_FIELD(arg0, s32 *, 0));
    if (temp_r0 != NULL) {
        temp_r2 = M2C_FIELD(arg0, s16 **, 4);
        if (temp_r2 != NULL) {
            *temp_r2 = M2C_FIELD(temp_r0, s16 *, 0x1C);
        }
        temp_r1 = M2C_FIELD(arg0, s16 **, 8);
        if (temp_r1 != NULL) {
            *temp_r1 = M2C_FIELD(temp_r0, s16 *, 0x1E);
        }
    }
    return 0;
}
