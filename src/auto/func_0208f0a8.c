#include "m2c.h"

M2C_UNK func_02017ba0(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
s32 func_0208c3f8(s16);                             /* extern */
M2C_UNK func_0208d3d4(s32, M2C_UNK *, M2C_UNK);     /* extern */
M2C_UNK func_ov000_021c59ec(M2C_UNK *, s32, void *); /* extern */
s32 func_ov000_021c5b74(s32);                       /* extern */

s32 func_0208f0a8(void *arg0) {
    u8 sp0[1024];
    s32 temp_r0;
    s32 temp_r5;

    temp_r0 = func_0208c3f8((s16) M2C_FIELD(arg0, s32 *, 0));
    if (temp_r0 != 0) {
        func_02017ba0(sp0, 0, 0x400);
        temp_r5 = M2C_FIELD(arg0, s32 *, 4);
        if ((u32) ((func_ov000_021c5b74(temp_r5) + 1) * 2) <= 0x400U) {
            func_ov000_021c59ec(sp0, temp_r5, arg0 + 8);
            func_0208d3d4(temp_r0, sp0, 0);
        }
    }
    return 0;
}
