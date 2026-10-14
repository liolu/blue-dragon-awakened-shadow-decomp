#include "m2c.h"

M2C_UNK func_0207d4cc();                            /* extern */
extern s32 data_02164efc;

void func_0208fb8c(void) {
    if (data_02164efc == 0) {
        return;
    }
    if (data_02164efc != 0) {
        func_0207d4cc();
    }
    data_02164efc = 0;
}
