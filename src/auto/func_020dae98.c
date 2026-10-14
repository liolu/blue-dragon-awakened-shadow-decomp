#include "m2c.h"

M2C_UNK func_020daf64();                            /* extern */
extern s32 data_021672b0;

s32 func_020dae98(s32 arg0) {
    func_020daf64();
    if (data_021672b0 == arg0) {
        data_021672b0 = 0;
    }
    return arg0;
}
