#include "m2c.h"

s32 func_020c3558(s32);                             /* extern */
M2C_UNK func_020db7d4(s32, s32, s32);               /* extern */
M2C_UNK func_020db844(s32);                         /* extern */
extern s32 data_021672b4;

void func_020c1388(void *arg0, s32 arg1, s32 arg2) {
    s32 temp_r0;

    if (data_021672b4 == 0) {
        return;
    }
    temp_r0 = func_020c3558(M2C_FIELD(arg0, s32 *, 0xC));
    if (temp_r0 == 0) {
        return;
    }
    if (arg1 != 0) {
        if (arg2 == 0) {
            return;
        }
        func_020db7d4(data_021672b4, temp_r0, arg2);
        return;
    }
    func_020db844(data_021672b4);
}
