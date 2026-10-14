#include "m2c.h"

M2C_UNK func_ov000_021783d8(s32, s32 *);            /* extern */
extern s32 data_ov000_021ee10c;
extern void *data_ov000_021ee5e8;

s32 func_0209c6b4(void) {
    s32 sp0;

    sp0 = M2C_FIELD(data_ov000_021ee5e8, s32 *, 0x2C);
    func_ov000_021783d8(data_ov000_021ee10c, &sp0);
    return 1;
}
