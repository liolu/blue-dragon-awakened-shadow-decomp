#include "m2c.h"

M2C_UNK OS_WakeupThreadDirect(s32);                         /* extern */
M2C_UNK OS_YieldThread();                            /* extern */
void *find_socket();                              /* extern */

void dt_rst(void) {
    void *temp_r0;

    temp_r0 = find_socket();
    if (temp_r0 == NULL) {
        return;
    }
    OS_YieldThread();
    M2C_FIELD(temp_r0, s8 *, 8) = 0;
    if ((u32) (M2C_FIELD(temp_r0, s32 *, 4) - 1) > 1U) {
        return;
    }
    M2C_FIELD(temp_r0, s32 *, 4) = 0;
    OS_WakeupThreadDirect(M2C_FIELD(temp_r0, s32 *, 0));
}
