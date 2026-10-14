#include "m2c.h"

M2C_UNK func_0205bd64(s32);                         /* extern */
M2C_UNK func_0205cb50(void *);                      /* extern */

void func_0207438c(void **arg0) {
    void *temp_r4;

    temp_r4 = *arg0;
    func_0205bd64(M2C_FIELD(temp_r4, s32 *, 0x18));
    M2C_FIELD(temp_r4, s32 *, 0x18) = 0;
    func_0205cb50(temp_r4);
}
