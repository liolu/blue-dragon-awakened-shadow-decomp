#include "m2c.h"
#include "engine.h"

void func_02003f58(M2C_UNK);
void func_020092a8(M2C_UNK);

extern s32 data_020e5b44;
extern s32 data_021018e0;

void func_02005b50(void) {
    if (data_020e5b44 != -1) {
        func_020092a8(data_020e5b44);
    }
    func_02003f58(data_021018e0);
    data_021018e0 = 0;
}
