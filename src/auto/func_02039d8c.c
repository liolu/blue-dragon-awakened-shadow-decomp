#include "m2c.h"

extern void *data_020f8f00;
extern s32 data_0210ca38;
extern s32 data_0210ca48;
extern s32 data_0210ca6c;
extern M2C_UNK data_0210ca7c;
extern M2C_UNK data_0210e260;

void func_02039d8c(void) {
    data_0210ca6c = M2C_FIELD(data_020f8f00, s32 *, 4);
    data_0210ca38 = M2C_FIELD(data_020f8f00, s32 *, 8);
    data_0210ca48 = M2C_FIELD(data_020f8f00, s32 *, 0xC);
    M2C_FIELD(&data_0210ca7c, s32 *, 0) = (s32) M2C_FIELD(data_020f8f00, s32 *, 0x10);
    M2C_FIELD(&data_0210ca7c, s32 *, 4) = (s32) M2C_FIELD(data_020f8f00, s32 *, 0x14);
    M2C_FIELD(&data_0210e260, s32 *, 8) = (s32) (M2C_FIELD(&data_0210e260, s32 *, 8) | 2);
}
