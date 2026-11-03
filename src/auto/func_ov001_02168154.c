/* compiler: 2.0/sp1p5 -thumb */
#include "m2c.h"

extern u8 data_ov001_02193124[];
extern u8 data_ov001_02193130[];

s32 func_ov001_02169494(void *p);
void func_ov001_02169360(void *dst, void *src, s32 n);

s32 func_ov001_02168154(s32 *arg0) {
    arg0[0] = func_ov001_02169494(data_ov001_02193124);
    func_ov001_02169360((u8 *) arg0 + 4, data_ov001_02193124, arg0[0]);
    arg0[9]  = 1;
    arg0[10] = func_ov001_02169494(data_ov001_02193130);
    if ((u32) arg0[10] > 0xD) {
        return -1;
    }
    func_ov001_02169360((u8 *) arg0 + 0x2C, data_ov001_02193130, arg0[10]);
    return 0;
}
