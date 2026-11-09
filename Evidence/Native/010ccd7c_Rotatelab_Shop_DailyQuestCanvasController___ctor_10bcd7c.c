/* IL2CPP: Rotatelab.Shop.DailyQuestCanvasController$$.ctor
void Rotatelab_Shop_DailyQuestCanvasController___ctor (Rotatelab_Shop_DailyQuestCanvasController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.DailyQuestCanvasController$$.ctor
   void Rotatelab_Shop_DailyQuestCanvasController___ctor
   (Rotatelab_Shop_DailyQuestCanvasController_o* __this, const MethodInfo* method); */

int Rotatelab_Shop_DailyQuestCanvasController___ctor_10bcd7c(int param_1)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_010cce14 + 0x10ccd90);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cce18 + 0x10ccda4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cce1c + 0x10ccdb0));
    *pcVar3 = '\x01';
  }
  puVar1 = *(undefined4 **)(_UNK_010cce20 + 0x10ccdcc);
  *(undefined4 *)(param_1 + 0x3c) = 1;
  *(undefined4 *)(param_1 + 0x40) = 4;
  uVar2 = thunk_FUN_00f00cdc(*puVar1);
  System_Collections_Generic_List_object____ctor_267d2e8
            (uVar2,0x10,**(undefined4 **)(_UNK_010cce24 + 0x10ccdec));
  *(undefined4 *)(param_1 + 0x70) = uVar2;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x70),uVar2);
  pcVar3 = (char *)(_UNK_0360da14 + 0x360d9cc);
  if (*pcVar3 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0360da18 + 0x360d9e0),0);
    *pcVar3 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0360da1c + 0x360d9f4) + 0x74) == 0) {
    thunk_FUN_00ec3934();
  }
  return param_1;
}

