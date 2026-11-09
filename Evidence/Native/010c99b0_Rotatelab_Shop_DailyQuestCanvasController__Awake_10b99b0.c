/* IL2CPP: Rotatelab.Shop.DailyQuestCanvasController$$Awake
void Rotatelab_Shop_DailyQuestCanvasController__Awake (Rotatelab_Shop_DailyQuestCanvasController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.DailyQuestCanvasController$$Awake
   void Rotatelab_Shop_DailyQuestCanvasController__Awake
   (Rotatelab_Shop_DailyQuestCanvasController_o* __this, const MethodInfo* method); */

undefined4 Rotatelab_Shop_DailyQuestCanvasController__Awake_10b99b0(undefined4 param_1)

{
  int *piVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_010c9a14 + 0x10c99c4);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010c9a18 + 0x10c99d8));
    *pcVar2 = '\x01';
  }
  piVar1 = *(int **)(_UNK_010c9a1c + 0x10c99ec);
  **(undefined4 **)(*piVar1 + 0x5c) = param_1;
  thunk_FUN_00ec5080(*(undefined4 *)(*piVar1 + 0x5c),param_1);
  return param_1;
}

