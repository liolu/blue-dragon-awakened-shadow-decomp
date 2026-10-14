#include "m2c.h"

M2C_UNK func_020af878(void *, void *);              /* extern */

void func_020afc08(void *arg0, s32 arg1) {
    if (M2C_FIELD(arg0, s32 *, 0x414) != arg1) {
        return;
    }
    func_020af878(arg0, arg0 + 0x414);
}
