#include "m2c.h"

s32 func_0204caec();                                /* extern */
s32 func_0204e314(M2C_UNK);                         /* extern */
M2C_UNK func_02059cc4(M2C_UNK, M2C_UNK, s32, M2C_UNK); /* extern */
extern void *data_0210f060;

s32 func_02059714(M2C_UNK arg0, M2C_UNK arg1, s32 arg2) {
    M2C_UNK (*temp_r2)(s32, M2C_UNK);

    if (func_0204caec() != 0) {
        return 0;
    }
    if (func_0204e314(arg0) == 0) {
        return 0;
    }
    if (arg2 > (s32) M2C_FIELD(data_0210f060, u16 *, 0x610)) {
        return 0;
    }
    func_02059cc4(arg0, arg1, arg2, 0);
    temp_r2 = M2C_FIELD(data_0210f060, M2C_UNK (**)(s32, M2C_UNK), 0x600);
    if (temp_r2 != NULL) {
        temp_r2(arg2, arg0);
    }
    return 1;
}
