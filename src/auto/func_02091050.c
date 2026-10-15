#include "m2c.h"

M2C_UNK func_02090ca4(void *);                      /* extern */
M2C_UNK func_ov000_0217a8c4(s32);                   /* extern */
M2C_UNK func_ov000_0217a8d0(s32);                   /* extern */

void func_02091050(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x21B) != 0) {
        return;
    }
    if ((M2C_FIELD(arg0, u8 *, 0x21C) == 0) && (M2C_FIELD(arg0, u8 *, 0x210) != 0)) {
        func_ov000_0217a8c4(M2C_FIELD(arg0, s32 *, 0x70));
        func_ov000_0217a8d0(M2C_FIELD(arg0, s32 *, 0x74));
    }
    func_02090ca4(arg0);
    M2C_FIELD(arg0, s32 *, 0x208) = 0;
    M2C_FIELD(arg0, s8 *, 0x217)  = 0;
    M2C_FIELD(arg0, u8 *, 0x21B)  = 1U;
    M2C_FIELD(arg0, s8 *, 0x21A)  = 0;
}
