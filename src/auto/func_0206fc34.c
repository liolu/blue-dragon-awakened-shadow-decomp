#include "m2c.h"

s32 func_0206c4fc(void *);                          /* extern */
M2C_UNK func_0206d420();                            /* extern */
M2C_UNK func_0206f624(void *);                      /* extern */

void func_0206fc34(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x18) != 0) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x18) = 1;
    func_0206d420(arg0);
    if (func_0206c4fc(arg0) == 0) {
        return;
    }
    func_0206f624(arg0);
}
