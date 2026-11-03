#include "m2c.h"
void func_ov001_02182708(void *);
void func_ov001_021825b0(void *);
s32 func_ov001_021823f0(void);
void OS_Terminate(void);
extern s32 data_ov001_02196c58;
void func_ov001_02182520(u16 *msg) {
    u8 *base;
    if (msg[1] != 0) {
        return;
    }
    base = (u8 *) data_ov001_02196c58;
    base += 0x1000;
    if (base[0xb94] != 0) {
        if (msg[0] == 2) {
            base[0xb94] = 2;
        }
        return;
    }
    if (msg[0] != 0x26) {
        return;
    }
    switch (msg[4]) {
        case 5:
            if (base[0xb96] != 0) {
                func_ov001_02182708(msg);
            } else {
                func_ov001_021825b0(msg);
            }
            func_ov001_021823f0();
            break;
        case 4:
            func_ov001_021823f0();
            break;
        default:
            OS_Terminate();
            break;
    }
}
