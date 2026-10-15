#include "m2c.h"

extern M2C_UNK data_0210b244;

void NNS_SndPlayerSetPlayerVolume(s32 arg0, s8 arg1) {
    *((u8 *) ((s8 *) &data_0210b244 + (arg0 * 0x24))) = arg1;
}
