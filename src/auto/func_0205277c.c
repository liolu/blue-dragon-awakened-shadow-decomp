#include "m2c.h"

typedef struct S {
    u8 pad0[8];
    s32 f8;
    u8 pad1[1];
    u8 cnt;
    u8 pad2[0xf4 - 0xe];
    s32 f4[0x1a];
    u8 pad3[0x18c - 0xf4 - 0x68];
    s32 f18c;
    s32 f190;
    u8 pad4[0x1a0 - 0x194];
    s32 st;
    u8 pad5[0x1a9 - 0x1a4];
    u8 c1a9;
    u8 pad6[0x1b0 - 0x1aa];
    u16 h1b0;
    u8 pad7[0x210 - 0x1b2];
    s32 w210[8];
    u8 pad9[0x60];
    u16 h290[8];
    u8 pad8[0x30];
    u8 b2d0[8];
} S;
typedef struct R {
    s32 w0;
    u8 b0;
    u8 b1;
} R;

S *func_02059234(void);
void gt2Reject(s32, char *, s32);
s32 func_0204e4b4(void);
void func_02052cec(s32, s32);
u32 strtoul(u8 *, s32, s32);
s32 gt2Accept(s32, s32);
void func_02052ccc(void);
void *func_0204e510(s32);
u8 *func_0204e588(s32);
void func_0206d4d4(s32, void *);
void func_020562dc(s32);

extern char data_020fa7a0[];
extern char data_020fa7ac[];
extern char data_020fa7b8[];

void func_0205277c(s32 unused, s32 a, s32 b, s32 c, s32 cnt, u8 *str) {
    s32 id;
    s32 t;
    u32 v;
    u8 *r;
    R *q;
    S *s;

    if (func_02059234() == 0 || func_02059234()->st != 7 || func_02059234()->c1a9 != 0) {
        gt2Reject(a, data_020fa7a0, -1);
        return;
    }
    id = func_0204e4b4();
    if (id == -1) {
        gt2Reject(a, data_020fa7ac, -1);
        func_02052cec(6, 0xfffeabc4);
        return;
    }
    if (b != func_02059234()->w210[func_02059234()->cnt] || c != func_02059234()->h290[func_02059234()->cnt]) {
        if (*str != 0) {
            v = strtoul(str, 0, 10);
            if (v == func_02059234()->f4[func_02059234()->cnt]) {
                func_02059234()->w210[func_02059234()->cnt] = b;
                func_02059234()->h290[func_02059234()->cnt] = c;
                goto ok;
            }
        }
        gt2Reject(a, data_020fa7b8, -1);
        return;
    }
ok:
    s       = func_02059234();
    s->f18c = 0;
    s->f190 = 0;
    if (gt2Accept(a, func_02059234()->f8) == 0) {
        func_02052cec(6, 0xfffec5e6);
        return;
    }
    func_02052ccc();
    if (func_02059234()->cnt == 0) {
        t = cnt >> 1;
        if (t >= 0xffff) {
            t = 0xffff;
        }
        func_02059234()->h1b0 = t;
    }
    q     = func_0204e510(id);
    r     = func_0204e588(id);
    q->w0 = a;
    func_02059234()->cnt++;
    r[0]             = id;
    s                = func_02059234();
    r[1]             = s->b2d0[func_02059234()->cnt - 1];
    *(u16 *) (r + 2) = 0;
    *(u32 *) (r + 4) = 0;
    func_0206d4d4(a, r);
    func_020562dc(2);
}
