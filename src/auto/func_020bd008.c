#include "m2c.h"

M2C_UNK func_020bcfd4();                            /* extern */
s32 func_ov000_02174fb4(s32, void *);               /* extern */
M2C_UNK func_ov000_02175338(s32, s32, M2C_UNK);     /* extern */
M2C_UNK func_ov000_02175368(s32, s32, M2C_UNK);     /* extern */
M2C_UNK func_ov000_02175398(s32, s32, M2C_UNK);     /* extern */
extern s32 data_ov000_021ee0f8;

void func_020bd008(s32 *arg0, void *arg1) {
    func_020bcfd4();
    *arg0 = func_ov000_02174fb4(data_ov000_021ee0f8, arg1);
    func_ov000_02175368(data_ov000_021ee0f8, *arg0, 1);
    func_ov000_02175338(data_ov000_021ee0f8, *arg0, 1);
    if ((s32) M2C_FIELD(arg1, s32 *, 0x14) < 0xFF000) {
        return;
    }
    func_ov000_02175398(data_ov000_021ee0f8, *arg0, 1);
}
