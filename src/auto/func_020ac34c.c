#include "m2c.h"

s32 func_020ab6b0(M2C_UNK *, M2C_UNK);              /* extern */
s32 func_020b1a3c();                                /* extern */
extern M2C_UNK data_02165978;

s32 func_020ac34c(M2C_UNK arg0) {
    if (func_020ab6b0(&data_02165978, arg0) == 0) {
        return 0;
    }
    return func_020b1a3c();
}
