#include "m2c.h"

M2C_UNK func_0205bd64(s32);                         /* extern */
M2C_UNK func_0205cb50(void *);                      /* extern */
M2C_UNK func_020637e4(void **, M2C_UNK);            /* extern */
M2C_UNK func_020657dc(void **);                     /* extern */

void func_0205ee04(void **arg0) {
    void *temp_r4;

    temp_r4 = *arg0;
    func_020637e4(arg0, 1);
    func_020657dc(arg0);
    func_0205bd64(M2C_FIELD(temp_r4, s32 *, 0x5C8));
    func_0205cb50(temp_r4);
    *arg0 = NULL;
}
