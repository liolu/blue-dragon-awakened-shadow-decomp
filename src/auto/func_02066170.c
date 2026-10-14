#include "m2c.h"

M2C_UNK func_0205c0e0(s32);                         /* extern */
M2C_UNK func_0205c0f4(s32, M2C_UNK);                /* extern */
M2C_UNK func_0205cb50(void *);                      /* extern */

void func_02066170(void **arg0, void *arg1) {
    void *temp_r2;
    void *temp_r5;

    temp_r2 = *arg0;
    if (M2C_FIELD(arg1, s32 *, 0) == 3) {
        temp_r5 = M2C_FIELD(arg1, void **, 4);
        M2C_FIELD(temp_r2, s32 *, 0x238) = (s32) (M2C_FIELD(temp_r2, s32 *, 0x238) - 1);
        func_0205c0f4(M2C_FIELD(temp_r5, s32 *, 4), 2);
        func_0205c0e0(M2C_FIELD(temp_r5, s32 *, 4));
        func_0205cb50(M2C_FIELD(temp_r5, void **, 0x18));
        M2C_FIELD(temp_r5, void **, 0x18) = NULL;
        func_0205cb50(M2C_FIELD(temp_r5, void **, 8));
        M2C_FIELD(temp_r5, void **, 8) = NULL;
    }
    func_0205cb50(M2C_FIELD(arg1, void **, 4));
    M2C_FIELD(arg1, void **, 4) = NULL;
    func_0205cb50(arg1);
}
