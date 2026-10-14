#include "m2c.h"

M2C_UNK func_020da9f8(s32, s32);                    /* extern */
extern s32 data_021672ac;

s32 func_020892f8(s32 *arg0) {
    if (data_021672ac != 0) {
        func_020da9f8(data_021672ac, *arg0);
    }
    return 0;
}
