#include "m2c.h"

M2C_UNK func_0204cb08(M2C_UNK, s32);                /* extern */
s32 func_0205c2ac();                                /* extern */
M2C_UNK func_0206d4c4();                            /* extern */
extern M2C_UNK data_0210e738;

void func_0204efa0(void) {
    func_0206d4c4();
    M2C_FIELD(&data_0210e738, s32 *, 4) = func_0205c2ac();
    func_0204cb08(9, 0xFFFE8515);
    *M2C_FIELD(&data_0210e738, s32 **, 0) = 0;
}
