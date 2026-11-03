#include "m2c.h"
typedef struct {
    u16 a, b, c, d;
} Rec;
extern Rec data_ov001_021929ca[];
extern u8 data_ov001_02196b9c;
extern u16 data_ov001_021929da[][4];
extern u16 data_ov001_021929de[][4];
extern u16 data_ov001_021929dc[][4];
extern u16 data_ov001_021929e0[][4];
s32 func_ov001_021882c0(void *);
void func_ov001_0216dc64(s8);
void func_ov001_0216e620(s32, s32, s32, s32);
s32 func_ov001_02188178(s32);
s32 func_ov001_021881b8(s32);
void func_ov001_02173310(s32);
void func_ov001_0217307c(void) {
    u32 i;
    for (i = 0; i < 2; i++) {
        if (func_ov001_021882c0(&data_ov001_021929ca[i]) != 0) {
            func_ov001_0216dc64(1);
            data_ov001_02196b9c = i;
            func_ov001_0216e620(data_ov001_021929da[data_ov001_02196b9c][0], data_ov001_021929de[data_ov001_02196b9c][0],
                                data_ov001_021929dc[data_ov001_02196b9c][0], data_ov001_021929e0[data_ov001_02196b9c][0]);
            return;
        }
    }
    if (func_ov001_02188178(1) != 0) {
        func_ov001_0216dc64(1);
        return;
    }
    if (func_ov001_02188178(2) != 0) {
        func_ov001_0216dc64(0);
        return;
    }
    if (func_ov001_021881b8(0x40) != 0) {
        func_ov001_02173310(1);
        return;
    }
    if (func_ov001_021881b8(0x80) != 0) {
        func_ov001_02173310(3);
        return;
    }
    if (func_ov001_021881b8(0x20) != 0) {
        func_ov001_02173310(0);
        return;
    }
    if (func_ov001_021881b8(0x10) != 0) {
        func_ov001_02173310(2);
    }
}
