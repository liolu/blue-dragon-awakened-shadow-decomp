#include "m2c.h"

M2C_UNK func_020be144(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_020bf5b8();                            /* extern */
M2C_UNK ACSSBADX_DestroyAdxt(void *);                      /* extern */
M2C_UNK func_020c35f4();                            /* extern */

void func_020c117c(void *arg0) {
    func_020bf5b8();
    func_020be144(arg0, 0, 0, 0);
    if (M2C_FIELD(arg0, s32 *, 0xC) != 0) {
        func_020c35f4();
    }
    M2C_FIELD(arg0, s8 *, 0x74)  = 0;
    M2C_FIELD(arg0, s32 *, 0x78) = 0;
    ACSSBADX_DestroyAdxt(arg0);
}
