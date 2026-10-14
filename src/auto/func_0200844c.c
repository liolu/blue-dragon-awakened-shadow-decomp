#include "m2c.h"

extern u16 data_02101cd4;

void func_0200844c(s32 arg0) {
    data_02101cd4 |= 1 << arg0;
}
