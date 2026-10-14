#include "m2c.h"
#include "engine.h"

extern M2C_UNK data_0210b23c;

void func_02032094(s32 arg0, s32 arg1) {
    *((M2C_UNK *)((s8 *)&data_0210b23c + (arg0 * 0x24))) = (s32) (u16) arg1;
}
