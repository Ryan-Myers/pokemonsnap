#include "common.h"

void func_802DE3FC(GObj* obj);
void func_802DE450(GObj* obj);
void func_802DE4C0(GObj* obj);

extern animationHeader D_802E31F4;
extern animationHeader D_802E3208;
extern animationHeader D_802E321C;
extern animalInitData koffingSmokeData;

void func_802DE390(GObj* obj) {
    s32 pad[3];
    animal* animal = obj->data.animal;

    forceAnimalAnimation(obj, &D_802E31F4);
    runPathProcess(obj, func_802DE4C0);
    animal->transitionGraph = NULL;
    runInteractionsAndWaitForFlags(obj, 1);
    updateAnimalState(obj, func_802DE3FC);
}

void func_802DE3FC(GObj* obj) {
    s32 pad[3];
    animal* animal = obj->data.animal;

    forceAnimalAnimation(obj, &D_802E3208);
    animal->transitionGraph = NULL;
    runInteractionsAndWaitForFlags(obj, 1);
    updateAnimalState(obj, func_802DE450);
}

void func_802DE450(GObj* obj) {
    s32 pad[3];
    animal* animal = obj->data.animal;

    setAnimalAnimation(obj, &D_802E321C);
    animal->transitionGraph = NULL;
    runInteractionsAndWaitForFlags(obj, 1);
    sendSignalToLink(3, 0x21, obj);
    runAnimalCleanup(obj);
    updateAnimalState(obj, NULL);
}

void func_802DE4C0(GObj* obj) {
    s32 pad[3];
    animal* animal = obj->data.animal;

    setNodePosToNegRoom(obj);
    animalPathLoop(obj, 0, 1.0f, 0.05f, 0.0f, 2);
    animal->pathProcess = NULL;
    animal->processFlags |= 2;
    endGObjProcess(NULL);
}

void spawnKoffingSmoke(s32 gObjID, u16 id, roomGFX* roomA, roomGFX* roomB, objectSpawn* spawn) {
    spawnAnimalUsingDeltaHeight(gObjID, id, roomA, roomB, spawn, &koffingSmokeData);
}
