#include "m2c.h"

u8 func_0209d680(void **arg0) {
    void *temp_r0;

    temp_r0 = *arg0;
    if (temp_r0 == NULL) {
        return 0U;
    }
    return M2C_FIELD(temp_r0, u8 *, 0x41);
}
