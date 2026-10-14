#include "m2c.h"
#include "engine.h"

void func_02006f50(M2C_UNK);
void func_02006fe4(M2C_UNK);
void func_02034f58(M2C_UNK);
M2C_UNK func_020352cc(void);

extern M2C_UNK data_0210ca1c;
extern M2C_UNK data_0210cbc4;
extern M2C_UNK data_0210cc84;

void func_0203532c(void) {
    func_020352cc();
    func_02006fe4((s32) &data_0210cbc4);
    func_02006f50((s32) &data_0210cc84);
    M2C_FIELD(&data_0210ca1c, s32 *, 0x54) = 0;
    func_02034f58(0);
    M2C_FIELD(&data_0210ca1c, s32 *, 0x58) = 0;
    M2C_FIELD(&data_0210ca1c, s32 *, 0x5C) = 0;
}
