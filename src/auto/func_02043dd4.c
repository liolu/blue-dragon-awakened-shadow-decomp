#include "m2c.h"

s32 func_02013fb0(M2C_UNK *, void *, void *, M2C_UNK); /* extern */
void *func_02042410();                              /* extern */
s32 func_020440e4(M2C_UNK *);                       /* extern */
M2C_UNK func_02044134(M2C_UNK *);                   /* extern */
extern M2C_UNK data_0210e5fc;
extern M2C_UNK func_020440d0;

void func_02043dd4(void) {
    void *temp_r0;

    temp_r0 = func_02042410();
    if (temp_r0 == NULL) {
        return;
    }
    if (M2C_FIELD(temp_r0, s32 *, 0x2260) != 9) {
        return;
    }
    if (M2C_FIELD(temp_r0, u8 *, 0x226B) == 1) {
        return;
    }
    if (func_020440e4(&data_0210e5fc) == 0) {
        return;
    }
    if (func_02013fb0(&func_020440d0, temp_r0 + 0x2144, temp_r0 + 0xF00, 0) == 2) {
        return;
    }
    func_02044134(&data_0210e5fc);
}
