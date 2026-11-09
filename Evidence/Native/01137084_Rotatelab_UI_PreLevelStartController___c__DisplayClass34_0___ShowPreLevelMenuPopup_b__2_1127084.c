/* IL2CPP: Rotatelab.UI.PreLevelStartController.<>c__DisplayClass34_0$$<ShowPreLevelMenuPopup>b__2
void Rotatelab_UI_PreLevelStartController___c__DisplayClass34_0___ShowPreLevelMenuPopup_b__2 (Rotatelab_UI_PreLevelStartController___c__DisplayClass34_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.PreLevelStartController.<>c__DisplayClass34_0$$<ShowPreLevelMenuPopup>b__2
   void Rotatelab_UI_PreLevelStartController___c__DisplayClass34_0___ShowPreLevelMenuPopup_b__2
   (Rotatelab_UI_PreLevelStartController___c__DisplayClass34_0_o* __this, const MethodInfo* method);
    */

void Rotatelab_UI_PreLevelStartController___c__DisplayClass34_0___ShowPreLevelMenuPopup_b__2_1127084
               (int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  int *piVar7;
  char *pcVar8;
  undefined8 uVar9;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar8 = (char *)(_UNK_011370fc + 0x1137098);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01137100 + 0x11370ac));
    *pcVar8 = '\x01';
  }
  if (*(char *)(param_1 + 8) == '\0') {
    return;
  }
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01137104 + 0x11370cc));
  iVar5 = *(int *)(param_1 + 0xc);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar8 = (char *)(_UNK_01091050 + 0x1090ddc);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01091054 + 0x1090df0),iVar5,0);
    FUN_00ec37c0(*(undefined4 *)(_UNK_01091058 + 0x1090dfc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109105c + 0x1090e08));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01091060 + 0x1090e14));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01091064 + 0x1090e20));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01091068 + 0x1090e2c));
    *pcVar8 = '\x01';
  }
  piVar4 = (int *)(iVar3 + 0x3c);
  *piVar4 = iVar5;
  thunk_FUN_00ec5080(piVar4,iVar5);
  iVar3 = Rotatelab_Tutorial_TutorialManager__get_CurrentTutorialStepIndex_107ef84();
  Rotatelab_Tutorial_TutorialManager__set_CurrentTutorialStepIndex_107efd8(iVar3 + 1);
  if (*piVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar6 = *(undefined4 **)(_UNK_0109106c + 0x1090e70);
  uStack_1c = *(undefined4 *)(*piVar4 + 0xc);
  uStack_24 = *puVar6;
  uStack_20 = 0xffffffff;
  uVar1 = System_Enum__ToString_2bab8c0(&uStack_24,0);
  iVar3 = Rotatelab_Tutorial_TutorialManager__CheckShowed_107f040(uVar1,uVar1);
  if (iVar3 == 0) {
    if (*piVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uStack_24 = *puVar6;
    uStack_1c = *(undefined4 *)(*piVar4 + 0xc);
    uStack_20 = 0xffffffff;
    uVar1 = System_Enum__ToString_2bab8c0(&uStack_24,0);
    Rotatelab_Tutorial_TutorialManager__SetShowed_107f0f4(uVar1,uVar1);
    puVar6 = *(undefined4 **)(_UNK_01091070 + 0x1090edc);
    iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar6);
    if (*piVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar1 = Rotatelab_Currency_CurrencyManager__GetCurrency_10808a4
                      (iVar3,*(undefined4 *)(*piVar4 + 0xc));
    iVar3 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(uVar1,0);
    if (iVar3 < 2) {
      iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar6);
      if (*piVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar9 = Rotatelab_Currency_CurrencyManager__GetCurrency_10808a4
                        (iVar3,*(undefined4 *)(*piVar4 + 0xc));
      piVar7 = (int *)uVar9;
      if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      (**(code **)(*piVar7 + 0xf8))
                (piVar7,(int)((ulonglong)uVar9 >> 0x20),2,0,*(undefined4 *)(*piVar7 + 0xfc));
    }
    piVar7 = *(int **)(_UNK_01091074 + 0x1090f90);
    iVar3 = *piVar7;
    if (*(int *)(iVar3 + 0x74) == 0) {
      FUN_00ec3934();
      iVar3 = *piVar7;
    }
    iVar3 = *(int *)(*(int *)(iVar3 + 0x5c) + 0xb8);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_GameAction__Raise_fc08b8(iVar3,0);
    piVar7 = *(int **)(_UNK_01091078 + 0x1090fd0);
    iVar3 = *piVar7;
    if (*(int *)(iVar3 + 0x74) == 0) {
      FUN_00ec3934();
      iVar3 = *piVar7;
    }
    iVar3 = *(int *)(*(int *)(iVar3 + 0x5c) + 0x20);
    uVar1 = Rotatelab_Tutorial_TutorialManager__get_CurrentTutorialStepIndex_107ef84();
    if (*piVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar2 = System_String__Concat_29fee38
                      (*(undefined4 *)(*piVar4 + 0x14),**(undefined4 **)(_UNK_0109107c + 0x1091014),
                       0);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_GameAction_int__object___Raise_23a4108
              (iVar3,uVar1,uVar2,**(undefined4 **)(_UNK_01091080 + 0x1091040));
  }
  return;
}

