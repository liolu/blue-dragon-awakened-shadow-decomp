#include "m2c.h"

M2C_UNK func_02000b9c(s32);                         /* extern */
s32 func_02039bf0();                                /* extern */
M2C_UNK func_02039c30();                            /* extern */
extern s32 data_020f8f00;

s32 func_02039bb4(s32 arg0) {
    func_02000b9c(0x02000BF4);
    if (data_020f8f00 != 0) {
        return 0;
    }
    data_020f8f00 = arg0;
    func_02039c30();
    return func_02039bf0();
}
