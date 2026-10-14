#include "m2c.h"

s32 func_020a6770();                                /* extern */
M2C_UNK func_ov000_021d2228();                      /* extern */
s32 func_ov000_021d34f4();                          /* extern */
s32 func_ov000_021d8058(s32, M2C_UNK);              /* extern */
extern s32 data_ov000_021f6260;

s32 func_020a67d8(void) {
    if (func_020a6770() == 0) {
        return 1;
    }
    if ((func_ov000_021d8058(data_ov000_021f6260, 0) != 0) && (func_ov000_021d8058(data_ov000_021f6260, 1) == 0) && (func_ov000_021d8058(data_ov000_021f6260, 2) == 0)) {
        return 1;
    }
    func_ov000_021d2228();
    if (func_ov000_021d34f4() <= 0) {
        return 1;
    }
    return 0;
}
