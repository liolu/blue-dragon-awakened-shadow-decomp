#include "m2c.h"

M2C_UNK func_0207d4cc();                            /* extern */
extern s32 data_0216581c;

void func_020984ac(void) {
    if (data_0216581c == 0) {
        return;
    }
    func_0207d4cc();
    data_0216581c = 0;
}
