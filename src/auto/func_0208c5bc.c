#include "engine.h"
#include "m2c.h"

void func_0208c790(M2C_UNK, M2C_UNK);
void func_0208c834(M2C_UNK);

void func_0208c5bc(s32 arg0) {
    s32 temp_r0;

    if (M2C_FIELD(arg0, s32 *, 0x18) == 0) {
        return;
    }
    temp_r0 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_r0 != 0) {
        func_0208c790(temp_r0, arg0);
    }
    if (M2C_FIELD(arg0, s32 *, 0xC) != 0) {
        do {
            func_0208c790(arg0, M2C_FIELD(arg0, s32 *, 0xC));
        } while (M2C_FIELD(arg0, s32 *, 0xC) != 0);
    }
    func_0208c834(arg0);
}
