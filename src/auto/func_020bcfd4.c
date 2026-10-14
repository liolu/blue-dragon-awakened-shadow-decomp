#include "m2c.h"

M2C_UNK func_ov000_02175200(s32);                   /* extern */
extern s32 data_ov000_021ee0f8;

void func_020bcfd4(s32 *arg0) {
    if (*arg0 == -1) {
        return;
    }
    func_ov000_02175200(data_ov000_021ee0f8);
    *arg0 = -1;
}
