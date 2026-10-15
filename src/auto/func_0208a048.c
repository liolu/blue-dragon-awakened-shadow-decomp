#include "engine.h"
#include "m2c.h"

M2C_UNK func_02082728(M2C_UNK, M2C_UNK);
void func_02082750(M2C_UNK);

extern s32 data_02164e04;

void func_0208a048(s32 arg0) {
    s32 temp_r1;

    temp_r1 = *(M2C_UNK *) arg0;
    if (temp_r1 != 0) {
        func_02082728(data_02164e04, temp_r1);
        return;
    }
    func_02082750(data_02164e04);
}
