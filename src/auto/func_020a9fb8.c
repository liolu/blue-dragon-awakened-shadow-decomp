#include "m2c.h"

extern M2C_UNK data_020fe8bc;

s32 func_020a9fb8(s32 arg0, s32 arg1) {
    return *((M2C_UNK *) ((s8 *) &data_020fe8bc + (arg1 * 4)));
}
