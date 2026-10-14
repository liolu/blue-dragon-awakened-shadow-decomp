#include "m2c.h"

M2C_UNK func_ov000_021c0d50(M2C_UNK *, s32, s32);   /* extern */
extern M2C_UNK data_ov000_021f4d24;

s32 func_020846c0(void *arg0) {
    func_ov000_021c0d50(&data_ov000_021f4d24, M2C_FIELD(arg0, s32 *, 0), M2C_FIELD(arg0, s32 *, 4));
    return 0;
}
