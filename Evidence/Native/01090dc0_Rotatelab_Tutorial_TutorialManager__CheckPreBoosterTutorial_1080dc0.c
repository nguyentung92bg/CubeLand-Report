/* IL2CPP: Rotatelab.Tutorial.TutorialManager$$CheckPreBoosterTutorial
void Rotatelab_Tutorial_TutorialManager__CheckPreBoosterTutorial (Rotatelab_Tutorial_TutorialManager_o* __this, Rotatelab_Boosters_BoosterBaseData_o* data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Tutorial.TutorialManager$$CheckPreBoosterTutorial
   void Rotatelab_Tutorial_TutorialManager__CheckPreBoosterTutorial
   (Rotatelab_Tutorial_TutorialManager_o* __this, Rotatelab_Boosters_BoosterBaseData_o* data, const
   MethodInfo* method); */

void Rotatelab_Tutorial_TutorialManager__CheckPreBoosterTutorial_1080dc0(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  int *piVar6;
  char *pcVar7;
  undefined8 uVar8;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar7 = (char *)(_UNK_01091050 + 0x1090ddc);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01091054 + 0x1090df0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01091058 + 0x1090dfc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109105c + 0x1090e08));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01091060 + 0x1090e14));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01091064 + 0x1090e20));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01091068 + 0x1090e2c));
    *pcVar7 = '\x01';
  }
  piVar4 = (int *)(param_1 + 0x3c);
  *piVar4 = param_2;
  thunk_FUN_00ec5080(piVar4,param_2);
  iVar1 = Rotatelab_Tutorial_TutorialManager__get_CurrentTutorialStepIndex_107ef84();
  Rotatelab_Tutorial_TutorialManager__set_CurrentTutorialStepIndex_107efd8(iVar1 + 1);
  if (*piVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar5 = *(undefined4 **)(_UNK_0109106c + 0x1090e70);
  uStack_1c = *(undefined4 *)(*piVar4 + 0xc);
  uStack_24 = *puVar5;
  uStack_20 = 0xffffffff;
  uVar2 = System_Enum__ToString_2bab8c0(&uStack_24,0);
  iVar1 = Rotatelab_Tutorial_TutorialManager__CheckShowed_107f040(uVar2,uVar2);
  if (iVar1 == 0) {
    if (*piVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uStack_24 = *puVar5;
    uStack_1c = *(undefined4 *)(*piVar4 + 0xc);
    uStack_20 = 0xffffffff;
    uVar2 = System_Enum__ToString_2bab8c0(&uStack_24,0);
    Rotatelab_Tutorial_TutorialManager__SetShowed_107f0f4(uVar2,uVar2);
    puVar5 = *(undefined4 **)(_UNK_01091070 + 0x1090edc);
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar5);
    if (*piVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar2 = Rotatelab_Currency_CurrencyManager__GetCurrency_10808a4
                      (iVar1,*(undefined4 *)(*piVar4 + 0xc));
    iVar1 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(uVar2,0);
    if (iVar1 < 2) {
      iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar5);
      if (*piVar4 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar8 = Rotatelab_Currency_CurrencyManager__GetCurrency_10808a4
                        (iVar1,*(undefined4 *)(*piVar4 + 0xc));
      piVar6 = (int *)uVar8;
      if (piVar6 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      (**(code **)(*piVar6 + 0xf8))
                (piVar6,(int)((ulonglong)uVar8 >> 0x20),2,0,*(undefined4 *)(*piVar6 + 0xfc));
    }
    piVar6 = *(int **)(_UNK_01091074 + 0x1090f90);
    iVar1 = *piVar6;
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      iVar1 = *piVar6;
    }
    iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0xb8);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_GameAction__Raise_fc08b8(iVar1,0);
    piVar6 = *(int **)(_UNK_01091078 + 0x1090fd0);
    iVar1 = *piVar6;
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      iVar1 = *piVar6;
    }
    iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x20);
    uVar2 = Rotatelab_Tutorial_TutorialManager__get_CurrentTutorialStepIndex_107ef84();
    if (*piVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar3 = System_String__Concat_29fee38
                      (*(undefined4 *)(*piVar4 + 0x14),**(undefined4 **)(_UNK_0109107c + 0x1091014),
                       0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_GameAction_int__object___Raise_23a4108
              (iVar1,uVar2,uVar3,**(undefined4 **)(_UNK_01091080 + 0x1091040));
  }
  return;
}

