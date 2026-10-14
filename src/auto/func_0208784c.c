#include "m2c.h"

s32 func_02097dc4(void *);                          /* extern */

s32 func_0208784c(void *arg0) {
    s32 *temp_r1;
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg0, void **, 0);
    if (func_02097dc4(temp_r4) != 0) {
        temp_r1 = M2C_FIELD(arg0, s32 **, 4);
        if (temp_r1 != NULL) {
            *temp_r1 = M2C_FIELD(temp_r4, s32 *, 0xAC);
        }
        return M2C_FIELD(temp_r4, s32 *, 0xA8);
    }
    return 0;
}
