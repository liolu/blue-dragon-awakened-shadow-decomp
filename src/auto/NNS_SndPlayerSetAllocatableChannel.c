#include "m2c.h"

extern M2C_UNK data_0210b240;

void NNS_SndPlayerSetAllocatableChannel(s32 arg0, s32 arg1) {
    *((M2C_UNK *) ((s8 *) &data_0210b240 + (arg0 * 0x24))) = arg1;
}
