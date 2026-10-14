#include "m2c.h"

M2C_UNK func_020be9f4(s32, s32, M2C_UNK, M2C_UNK);  /* extern */
s32 func_ov000_0218a208(s32, s32);                  /* extern */
extern s32 data_ov000_021ee214;

s32 func_0209cc84(void *arg0) {
    func_020be9f4(func_ov000_0218a208(data_ov000_021ee214, M2C_FIELD(arg0, s32 *, 0)), M2C_FIELD(arg0, s32 *, 4), 1, 0);
    return 1;
}
