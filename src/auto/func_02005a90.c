#include "m2c.h"
#include "engine.h"

void func_020038d4(M2C_UNK);
void func_020092a8(M2C_UNK);

extern s32 data_020e5b44;
extern M2C_UNK data_021018e0;

void func_02005a90(void) {
    if (data_020e5b44 != -1) {
        func_020092a8(data_020e5b44);
    }
    func_020038d4(M2C_FIELD(&data_021018e0, s32 *, 8));
    M2C_FIELD(&data_021018e0, s32 *, 8) = 0;
    M2C_FIELD(&data_021018e0, s32 *, 4) = 0;
}
