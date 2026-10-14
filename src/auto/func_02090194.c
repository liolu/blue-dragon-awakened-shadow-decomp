#include "m2c.h"
#include "engine.h"

void func_020900e4(M2C_UNK, M2C_UNK);

extern s32 data_02164efc;

void func_02090194(s32 arg0) {
    if (data_02164efc == 0) {
        return;
    }
    func_020900e4(data_02164efc, arg0);
}
