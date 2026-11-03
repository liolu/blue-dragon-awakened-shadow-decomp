#include "m2c.h"

extern void func_0204b1a4(void *, void *, s32);
extern void func_0204aa88(void *, void *);
extern void MI_CpuFill8(void *, u8, u32);
extern u8 data_020f9538;
extern u8 data_020f9550;

void func_0204a640(u8 *arg0) {
    void (*fn)(void *, s32, s32) = *(void (**)(void *, s32, s32))(arg0 + 0x1014);
    if (arg0 == 0) {
        return;
    }
    func_0204b1a4(arg0, arg0 + 0x1a38, 0x20);
    func_0204aa88(arg0, arg0 + 0x1a08);
    func_0204aa88(arg0, arg0 + 0x19f8);
    if (*(s32 *) (arg0 + 0x19cc) != 0) {
        fn(&data_020f9538, *(s32 *) (arg0 + 0x19cc), 0);
        *(s32 *) (arg0 + 0x19cc) = 0;
    }
    if (*(s32 *) (arg0 + 0x19d0) != 0) {
        fn(&data_020f9550, *(s32 *) (arg0 + 0x19d0), 0);
        *(s32 *) (arg0 + 0x19d0) = 0;
    }
    MI_CpuFill8(arg0, 0, 0x1c14);
}
