#include "common.h"
#include "world/world.h"

void func_802C5644_647AF4(GObj*);

extern PokemonInitData D_802C7EC0_64A370;
extern PokemonInitData D_802C8000_64A4B0;

#pragma GLOBAL_ASM("asm/nonmatchings/cave/647360/func_802C4EB0_647360.s")

#pragma GLOBAL_ASM("asm/nonmatchings/cave/647360/func_802C4EF4_6473A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/cave/647360/func_802C4F5C_64740C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/cave/647360/func_802C4FB8_647468.s")

#pragma GLOBAL_ASM("asm/nonmatchings/cave/647360/func_802C502C_6474DC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/cave/647360/func_802C5188_647638.s")

#pragma GLOBAL_ASM("asm/nonmatchings/cave/647360/func_802C5230_6476E0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/cave/647360/func_802C5380_647830.s")

#pragma GLOBAL_ASM("asm/nonmatchings/cave/647360/func_802C53F4_6478A4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/cave/647360/func_802C5468_647918.s")

#pragma GLOBAL_ASM("asm/nonmatchings/cave/647360/func_802C54DC_64798C.s")

GObj* func_802C5548_6479F8(s32 objID, u16 id, WorldBlock* block, WorldBlock* blockB, ObjectSpawn* spawn, PokemonInitData* initData) {
    return spawnPokemon(objID, id, block, blockB, spawn, &D_802C7EC0_64A370);
}

#pragma GLOBAL_ASM("asm/nonmatchings/cave/647360/func_802C5580_647A30.s")

#pragma GLOBAL_ASM("asm/nonmatchings/cave/647360/func_802C55D4_647A84.s")

void func_802C5620_647AD0(GObj* arg0) {
    updatePokemonState(arg0, func_802C5644_647AF4);
}

#pragma GLOBAL_ASM("asm/nonmatchings/cave/647360/func_802C5644_647AF4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/cave/647360/func_802C569C_647B4C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/cave/647360/func_802C5778_647C28.s")

#pragma GLOBAL_ASM("asm/nonmatchings/cave/647360/func_802C57A4_647C54.s")

#pragma GLOBAL_ASM("asm/nonmatchings/cave/647360/func_802C58E4_647D94.s")

#pragma GLOBAL_ASM("asm/nonmatchings/cave/647360/func_802C5970_647E20.s")

GObj* func_802C5B28_647FD8(s32 objID, u16 id, WorldBlock* block, WorldBlock* blockB, ObjectSpawn* spawn, PokemonInitData* initData) {
    return func_80362DC4_5031D4(objID, id, block, blockB, spawn, &D_802C8000_64A4B0);
}

#pragma GLOBAL_ASM("asm/nonmatchings/cave/647360/func_802C5B60_648010.s")

#pragma GLOBAL_ASM("asm/nonmatchings/cave/647360/func_802C5B90_648040.s")

#pragma GLOBAL_ASM("asm/nonmatchings/cave/647360/func_802C5BB0_648060.s")

#pragma GLOBAL_ASM("asm/nonmatchings/cave/647360/func_802C5C24_6480D4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/cave/647360/func_802C5CEC_64819C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/cave/647360/func_802C5D80_648230.s")

#pragma GLOBAL_ASM("asm/nonmatchings/cave/647360/func_802C5DFC_6482AC.s")

#pragma GLOBAL_ASM("asm/nonmatchings/cave/647360/func_802C60F4_6485A4.s")
