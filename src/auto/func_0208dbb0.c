#include "m2c.h"

M2C_UNK func_0208d308(void *);                      /* extern */
M2C_UNK func_ov000_021b4d20(void *);                /* extern */
extern void *data_ov000_021f6270;

void func_0208dbb0(void *arg0) {
    u8 temp_r1;

    if (M2C_FIELD(arg0, s32 *, 0x18) != 1) {
        return;
    }
    temp_r1 = M2C_FIELD(arg0, u8 *, 0x26);
    if ((s32) (temp_r1 & 1) <= 0) {
        return;
    }
    if (((s32) (temp_r1 & 0x10) <= 0) && (M2C_FIELD(data_ov000_021f6270, u8 *, 0x34) != 0)) {
        return;
    }
    func_0208d308(arg0);
    func_ov000_021b4d20(arg0 + 0x4B8);
}
