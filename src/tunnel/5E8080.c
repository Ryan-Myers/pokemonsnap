#include "common.h"

#include "world/world.h"

extern GObj* D_802EFBA4_5ECC74;
extern PokemonInitData D_802EFC0C_5ECCDC;

#pragma GLOBAL_ASM("asm/nonmatchings/tunnel/5E8080/func_802EAFB0_5E8080.s")

#pragma GLOBAL_ASM("asm/nonmatchings/tunnel/5E8080/func_802EB014_5E80E4.s")

#pragma GLOBAL_ASM("asm/nonmatchings/tunnel/5E8080/func_802EB0CC_5E819C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/tunnel/5E8080/func_802EB28C_5E835C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/tunnel/5E8080/func_802EB35C_5E842C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/tunnel/5E8080/func_802EB3A8_5E8478.s")

#pragma GLOBAL_ASM("asm/nonmatchings/tunnel/5E8080/func_802EB3E0_5E84B0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/tunnel/5E8080/func_802EB430_5E8500.s")

#pragma GLOBAL_ASM("asm/nonmatchings/tunnel/5E8080/func_802EB548_5E8618.s")

#pragma GLOBAL_ASM("asm/nonmatchings/tunnel/5E8080/func_802EB664_5E8734.s")

#pragma GLOBAL_ASM("asm/nonmatchings/tunnel/5E8080/func_802EB6D0_5E87A0.s")

#pragma GLOBAL_ASM("asm/nonmatchings/tunnel/5E8080/func_802EB750_5E8820.s")

#pragma GLOBAL_ASM("asm/nonmatchings/tunnel/5E8080/func_802EB7AC_5E887C.s")

#pragma GLOBAL_ASM("asm/nonmatchings/tunnel/5E8080/func_802EB7E4_5E88B4.s")

GObj* func_802EB818_5E88E8(s32 gObjID, u16 id, WorldBlock* roomA, WorldBlock* roomB, ObjectSpawn* spawn) {
    D_802EFBA4_5ECC74 = spawnPokemon(gObjID, id, roomA, roomB, spawn, &D_802EFC0C_5ECCDC);

    return D_802EFBA4_5ECC74;
}
