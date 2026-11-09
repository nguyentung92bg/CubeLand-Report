/* IL2CPP: Rotatelab.Shop.DailyQuestCanvasController$$<ShowButtonTutorial>b__58_0
void Rotatelab_Shop_DailyQuestCanvasController___ShowButtonTutorial_b__58_0 (Rotatelab_Shop_DailyQuestCanvasController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.DailyQuestCanvasController$$<ShowButtonTutorial>b__58_0
   void Rotatelab_Shop_DailyQuestCanvasController___ShowButtonTutorial_b__58_0
   (Rotatelab_Shop_DailyQuestCanvasController_o* __this, const MethodInfo* method); */

void Rotatelab_Shop_DailyQuestCanvasController___ShowButtonTutorial_b__58_0_10bd478
               (undefined4 param_1)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_010cd544 + 0x10cd48c);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cd548 + 0x10cd4a0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cd54c + 0x10cd4ac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010cd550 + 0x10cd4b8));
    *pcVar3 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviourFromResources_object___get_Instance_1a9942c
                    (**(undefined4 **)(_UNK_010cd554 + 0x10cd4cc));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_UI_UIInputBlocker__TrySetInputAllowed_1124020(iVar1,1,param_1,0);
  piVar2 = *(int **)(_UNK_010cd558 + 0x10cd500);
  iVar1 = *piVar2;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar2;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x170);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x023b2824. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),1,*(undefined4 *)(iVar1 + 0x14));
  return;
}

