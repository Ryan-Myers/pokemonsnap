#ifndef SYS_CMD_H
#define SYS_CMD_H

#include <PR/ultratypes.h>

struct GObj;

typedef struct GObjCmdData {
    /* 0x00 */ struct GObj* source;
    /* 0x04 */ u32 cmd;
} GObjCmdData; // size = 0x8

typedef struct GObjCmd {
    /* 0x00 */ struct GObjCmd* next;
    /* 0x04 */ GObjCmdData data;
} GObjCmd; // size = 0xC

typedef struct GObjCmdList {
    /* 0x00 */ GObjCmd* head;
    /* 0x04 */ GObjCmd* tail;
    /* 0x08 */ s32 count;
} GObjCmdList; // size = 0xC

void cmdFreeObjCmd(GObjCmdList*);
void cmdReset(void);
s32 cmdProcessCommands(void (*handler)(GObjCmdData));
void cmdSendCommandToLink(s32 llIndex, s32, struct GObj*);
s32 cmdSendCommand(struct GObj* obj, s32 cmd, struct GObj* source);

#endif /* SYS_CMD_H */
