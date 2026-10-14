#include "m2c.h"

M2C_UNK func_0205b864();                            /* extern */
M2C_UNK func_0207434c(void *);                      /* extern */
M2C_UNK func_02075b60(void *);                      /* extern */
M2C_UNK func_020765d4();                            /* extern */

void func_02076638(void *arg0) {
    func_020765d4();
    func_02075b60(arg0);
    func_0207434c(arg0);
    if (M2C_FIELD(arg0, s32 *, 4) != 0) {
        func_0205b864();
    }
    M2C_FIELD(arg0, s32 *, 4) = 0;
}
