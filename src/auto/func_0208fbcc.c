#include "m2c.h"

M2C_UNK func_0208fd8c(s32);                         /* extern */
extern s32 *data_02164efc;

void func_0208fbcc(void) {
    if (data_02164efc == NULL) {
        func_0208fd8c(1);
        return;
    }
    func_0208fd8c(*data_02164efc);
}
