#include "m2c.h"

M2C_UNK func_0207d4cc();                            /* extern */
extern s32 data_021672b4;

void func_020db750(void) {
    if (data_021672b4 == 0) {
        return;
    }
    func_0207d4cc();
    data_021672b4 = 0;
}
