#include "m2c.h"

s32 func_0208fda8(s32, M2C_UNK, M2C_UNK);           /* extern */
extern s32 data_02164efc;

s32 func_0208feac(M2C_UNK arg0, M2C_UNK arg1) {
    if (data_02164efc == 0) {
        return 0;
    }
    return func_0208fda8(data_02164efc, arg0, arg1);
}
