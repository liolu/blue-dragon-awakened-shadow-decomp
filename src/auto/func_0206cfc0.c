#include "m2c.h"

M2C_UNK func_0206c798(void *, M2C_UNK);             /* extern */
M2C_UNK func_0206d010();                            /* extern */
M2C_UNK func_0206eec0();                            /* extern */
M2C_UNK func_0206f200(void *);                      /* extern */
M2C_UNK func_0206f890(void *);                      /* extern */

void func_0206cfc0(void *arg0, s32 arg1) {
    if (arg1 != 0) {
        if ((s32) M2C_FIELD(arg0, s32 *, 0xC) >= 7) {
            return;
        }
        func_0206d010(arg0);
        func_0206f200(arg0);
        func_0206c798(arg0, 0);
        func_0206f890(arg0);
        return;
    }
    M2C_FIELD(arg0, s32 *, 0xC) = 6;
    func_0206eec0(arg0);
}
