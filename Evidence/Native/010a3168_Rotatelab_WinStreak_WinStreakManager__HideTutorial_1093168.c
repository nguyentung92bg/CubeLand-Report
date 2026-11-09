/* IL2CPP: Rotatelab.WinStreak.WinStreakManager$$HideTutorial
void Rotatelab_WinStreak_WinStreakManager__HideTutorial (Rotatelab_WinStreak_WinStreakManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.WinStreak.WinStreakManager$$HideTutorial
   void Rotatelab_WinStreak_WinStreakManager__HideTutorial (Rotatelab_WinStreak_WinStreakManager_o*
   __this, const MethodInfo* method); */

void Rotatelab_WinStreak_WinStreakManager__HideTutorial_1093168(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  int *piVar7;
  int *piVar8;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar3 = (char *)(_UNK_010a3398 + 0x10a3180);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a339c + 0x10a3194));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a33a0 + 0x10a31a0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a33a4 + 0x10a31ac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a33a8 + 0x10a31b8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a33ac + 0x10a31c4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a33b0 + 0x10a31d0));
    *pcVar3 = '\x01';
  }
  uStack_24 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x4);
  uStack_20 = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0x8);
  uStack_1c = *(undefined4 *)((undefined1  [16])0x0 + (undefined1  [16])0xc);
  uStack_28 = 0;
  if (*(int *)(param_1 + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_UI_PopupController__Show_1124734(*(int *)(param_1 + 0x24),0,0);
  piVar8 = *(int **)(_UNK_010a33b4 + 0x10a3214);
  uVar4 = *(undefined4 *)(param_1 + 0x38);
  if (*(int *)(*piVar8 + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__Alpha_2ce7b44(&uStack_38,uVar4,0,0x3e4ccccd,0,0,0,0,0,1,0,0,0,0,0);
  uStack_28 = uStack_38;
  uStack_24 = uStack_34;
  uStack_20 = uStack_30;
  uStack_1c = uStack_2c;
  if (*(int *)(param_1 + 0x38) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar4 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(param_1 + 0x38),0);
  piVar7 = *(int **)(_UNK_010a33b8 + 0x10a32a8);
  iVar1 = *piVar7;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar7;
  }
  puVar2 = *(undefined4 **)(iVar1 + 0x5c);
  iVar5 = puVar2[2];
  if (iVar5 == 0) {
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      puVar2 = *(undefined4 **)(*piVar7 + 0x5c);
    }
    uVar6 = *puVar2;
    iVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010a33bc + 0x10a32f0));
    System_Action_object____ctor_1f11414(iVar5,uVar6,**(undefined4 **)(_UNK_010a33c0 + 0x10a3310),0)
    ;
    piVar7 = (int *)(*(int *)(*piVar7 + 0x5c) + 8);
    *piVar7 = iVar5;
    thunk_FUN_00ec5080(piVar7,iVar5);
  }
  if (*(int *)(*piVar8 + 0x74) == 0) {
    FUN_00ec3934();
  }
  PrimeTween_Tween__OnComplete_object__15d62e8
            (&uStack_38,&uStack_28,uVar4,iVar5,0,**(undefined4 **)(_UNK_010a33c4 + 0x10a3354));
  if (*(int *)(**(int **)(_UNK_010a33c8 + 0x10a3374) + 0x74) == 0) {
    FUN_00ec3934();
  }
  Rotatelab_UI_UiElementHider__SetVisibility_112fd8c(1,0);
  return;
}

