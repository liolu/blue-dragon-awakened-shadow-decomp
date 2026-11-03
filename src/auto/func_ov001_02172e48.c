#include "m2c.h"

void func_ov001_02172ec4(void);
void func_ov001_0216e7dc(s32);
void func_ov001_0216e1b0(s32, s32, s32);
void func_ov001_021821d8(s32);
void func_ov001_0216e620(u16, u16, u16, u16);
void func_ov001_021722e4(void *);
void func_ov001_02172fb0(void);
extern u8 data_ov001_02196b9c;
extern u16 data_ov001_021929da[];

void func_ov001_02172e48(void) {
    s32 i;

    func_ov001_02172ec4();
    func_ov001_0216e7dc(0);
    func_ov001_0216e1b0(0x2E, -1, 0);
    func_ov001_021821d8(4);
    i = data_ov001_02196b9c;
    func_ov001_0216e620(data_ov001_021929da[i * 4], data_ov001_021929da[i * 4 + 2], data_ov001_021929da[i * 4 + 1],
                        data_ov001_021929da[i * 4 + 3]);
    func_ov001_021722e4(func_ov001_02172fb0);
}
