#include "m2c.h"

s32 func_020ab668(M2C_UNK *, M2C_UNK);              /* extern */
s32 func_020ad0d0();                                /* extern */
extern M2C_UNK data_02165978;

s32 func_020ab854(M2C_UNK arg0) {
    if (func_020ab668(&data_02165978, arg0) == 0) {
        return 1;
    }
    return func_020ad0d0();
}
