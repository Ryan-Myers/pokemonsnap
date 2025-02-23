#ifndef _APP_RENDER_H_
#define _APP_RENDER_H_

#include "common.h"

typedef struct UnkRustRat {
    /* 0x00 */ struct UnkRustRat* next;
    /* 0x04 */ u16 unk_04;
    /* 0x06 */ u16 flags;
    /* 0x08 */ u8 unk_08;
    /* 0x09 */ u8 unk_09;
    /* 0x0A */ u8 unk_0A;
    /* 0x0B */ u8 unk_0B;
    /* 0x0C */ u16 unk_0C;
    /* 0x0E */ u16 unk_0E;
    /* 0x10 */ u16 unk_10;
    /* 0x12 */ u16 unk_12;
    /* 0x14 */ u8* scriptPtr;
    /* 0x18 */ u16 unk_18;
    /* 0x1A */ u16 unk_1A;
    /* 0x1C */ u16 unk_1C;
    /* 0x1E */ u16 unk_1E;
    /* 0x20 */ Vec3f unk_20;
    /* 0x2C */ Vec3f unk_2C;
    /* 0x38 */ f32 unk_38;
    /* 0x3C */ f32 unk_3C;
    /* 0x40 */ f32 unk_40;
    /* 0x44 */ f32 unk_44;
    /* 0x48 */ ucolor unk_48;
    /* 0x4C */ ucolor unk_4C;
    /* 0x50 */ ucolor unk_50;
    /* 0x54 */ ucolor unk_54;
    /* 0x58 */ UnkPinkRat* unk_58;
} UnkRustRat; // size = 0x5C

typedef struct ParticleAnimData {
    /* 0x00 */ u32 numFrames;
    /* 0x04 */ s32 type;
    /* 0x08 */ s32 fmt;
    /* 0x0C */ s32 width;
    /* 0x10 */ s32 height;
    /* 0x14 */ s32 flags;
    /* 0x18 */ u32 data[1]; // offsets followed by data
} ParticleAnimData;

extern s32 photo_PokemonIndexes[12];
extern UnkRustRat* D_800BE1A8[16];
extern s32 D_800BE228[8];
extern s32 D_800BE248[8];
extern ParticleAnimData** D_800BE288[8];

extern struct WorldSetup D_800F5DA0;

extern struct WorldSetup D_8012A0E8;
extern struct WorldSetup D_8012AC90;

PhotoData* func_8009BC74(void);
// s32 func_8009BCC4(PhotoData*);
f32 func_8009BDDC(s16, s8);
struct ScoreData* func_800A0EA4(GObj*, PhotoData*, u16*, s32, s32, u16*);
void getBackgroundColor(u8* r, u8* g, u8* b);
void func_800A5E98(Vec3f*, Vec3f*, DObj*);
void func_800A7F40(f32 arg0, f32 arg1, s32 arg2, f32 arg3);
void func_800A7918(s32, f32);

#endif
