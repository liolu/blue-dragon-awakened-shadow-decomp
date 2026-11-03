#include "m2c.h"

typedef struct Pt {
    u16 x;
    u16 y;
} Pt;
typedef struct O {
    u8 pad[0x10];
    u16 h10;
    u8 pad2[4];
    u16 h16;
    u8 b18;
    u8 b19;
    u8 b1a;
    u8 b1b;
    u8 b1c;
    u8 b1d;
} O;
void func_ov001_02180568(s32);
void func_ov001_021802ac(s32);
void func_ov001_02181704(void);
void func_ov001_021884c0(Pt *);
s32 func_ov001_02188238(void *);
extern u8 data_ov001_02192e30[];
extern u8 data_ov001_02192ff4[];
extern O *data_ov001_02196c40;

void func_ov001_021801dc(void) {
    Pt sp;
    s32 r4;
    if (func_ov001_02188238(data_ov001_02192ff4) != 0) {
        func_ov001_021884c0(&sp);
        if (sp.x >= data_ov001_02196c40->h10 - 0x1E) {
            r4 = data_ov001_02196c40->b18 + (sp.y - data_ov001_02196c40->h16);
            if (r4 < 0) {
                r4 = 0;
            } else {
                s32 t = data_ov001_02196c40->b19 - data_ov001_02192e30[data_ov001_02196c40->b1b];
                if (r4 >= t) {
                    r4 = t;
                }
            }
            func_ov001_021802ac(r4);
            func_ov001_02180568(r4);
            data_ov001_02196c40->b1d = 2;
            return;
        }
    }
    func_ov001_02181704();
    data_ov001_02196c40->b1c = 0;
    data_ov001_02196c40->b1d = 3;
}
