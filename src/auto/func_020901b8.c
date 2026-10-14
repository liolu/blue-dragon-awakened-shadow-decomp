#include "m2c.h"
#include "engine.h"

void func_0209013c(M2C_UNK, M2C_UNK);

extern s32 data_02164efc;

void func_020901b8(s32 arg0) {
    if (data_02164efc == 0) {
        return;
    }
    func_0209013c(data_02164efc, arg0);
}
