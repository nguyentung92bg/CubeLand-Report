/* IL2CPP: Rotatelab.Tutorial.TutorialManager$$CheckBoosterTutorial
void Rotatelab_Tutorial_TutorialManager__CheckBoosterTutorial (Rotatelab_Tutorial_TutorialManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Tutorial.TutorialManager$$CheckBoosterTutorial
   void Rotatelab_Tutorial_TutorialManager__CheckBoosterTutorial
   (Rotatelab_Tutorial_TutorialManager_o* __this, const MethodInfo* method); */

void Rotatelab_Tutorial_TutorialManager__CheckBoosterTutorial_107ff9c(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  char *pcVar4;
  int *piVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  int iStack_24;
  
  pcVar4 = (char *)(_UNK_01090494 + 0x108ffb4);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01090498 + 0x108ffc8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109049c + 0x108ffd4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010904a0 + 0x108ffe0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010904a4 + 0x108ffec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010904a8 + 0x108fff8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010904ac + 0x1090004));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010904b0 + 0x1090010));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010904b4 + 0x109001c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010904b8 + 0x1090028));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010904bc + 0x1090034));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010904c0 + 0x1090040));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010904c4 + 0x109004c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010904c8 + 0x1090058));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010904cc + 0x1090064));
    *pcVar4 = '\x01';
  }
  iStack_24 = 0;
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010904d0 + 0x109007c));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(iVar1 + 0x14);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar5 = *(int **)(_UNK_010904d4 + 0x10900b0);
  uVar6 = *(undefined4 *)(iVar1 + 0xc);
  iVar2 = *piVar5;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar5;
  }
  puVar3 = *(undefined4 **)(iVar2 + 0x5c);
  iVar8 = puVar3[1];
  if (iVar8 == 0) {
    if (*(int *)(iVar2 + 0x74) == 0) {
      FUN_00ec3934();
      puVar3 = *(undefined4 **)(*piVar5 + 0x5c);
    }
    uVar9 = *puVar3;
    iVar8 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010904d8 + 0x10900fc));
    System_Predicate_object____ctor_1876380
              (iVar8,uVar9,**(undefined4 **)(_UNK_010904dc + 0x109011c),0);
    piVar5 = (int *)(*(int *)(*piVar5 + 0x5c) + 4);
    *piVar5 = iVar8;
    thunk_FUN_00ec5080(piVar5,iVar8);
  }
  piVar5 = *(int **)(_UNK_010904e0 + 0x1090144);
  if (*(int *)(*piVar5 + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar2 = Rotatelab_Extensions__TryFind_object__14899b0
                    (uVar6,iVar8,&iStack_24,**(undefined4 **)(_UNK_010904e4 + 0x1090168));
  if (iVar2 != 0) {
    piVar7 = (int *)(param_1 + 0x3c);
    *piVar7 = iStack_24;
    thunk_FUN_00ec5080(piVar7);
    iVar2 = Rotatelab_Tutorial_TutorialManager__get_CurrentTutorialStepIndex_107ef84();
    Rotatelab_Tutorial_TutorialManager__set_CurrentTutorialStepIndex_107efd8(iVar2 + 1);
    if (*piVar7 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    puVar3 = *(undefined4 **)(_UNK_010904e8 + 0x10901b8);
    uStack_28 = *(undefined4 *)(*piVar7 + 0xc);
    uStack_30 = *puVar3;
    uStack_2c = 0xffffffff;
    uVar6 = System_Enum__ToString_2bab8c0(&uStack_30,0);
    iVar2 = Rotatelab_Tutorial_TutorialManager__CheckShowed_107f040(uVar6,uVar6);
    if (iVar2 == 0) {
      if (*piVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uStack_30 = *puVar3;
      uStack_28 = *(undefined4 *)(*piVar7 + 0xc);
      uStack_2c = 0xffffffff;
      uVar6 = System_Enum__ToString_2bab8c0(&uStack_30,0);
      Rotatelab_Tutorial_TutorialManager__SetShowed_107f0f4(uVar6,uVar6);
      iVar2 = iStack_24;
      uVar6 = *(undefined4 *)(iVar1 + 0xc);
      if (*(int *)(*piVar5 + 0x74) == 0) {
        FUN_00ec3934();
      }
      iVar2 = Rotatelab_Extensions__IndexOf_object__14872dc
                        (uVar6,iVar2,**(undefined4 **)(_UNK_010904ec + 0x109024c));
      if (*(int *)(iVar1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (iVar2 == *(int *)(*(int *)(iVar1 + 0xc) + 0xc) + -1) {
        piVar5 = *(int **)(_UNK_010904f0 + 0x1090284);
        iVar1 = *piVar5;
        if (*(int *)(iVar1 + 0x74) == 0) {
          FUN_00ec3934();
          iVar1 = *piVar5;
        }
        iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x44);
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        Rotatelab_GameAction__Raise_fc08b8(iVar1,0);
      }
      puVar3 = *(undefined4 **)(_UNK_010904f4 + 0x10902c4);
      iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar3);
      if (*piVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar6 = Rotatelab_Currency_CurrencyManager__GetCurrency_10808a4
                        (iVar1,*(undefined4 *)(*piVar7 + 0xc));
      iVar1 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(uVar6,0);
      if (iVar1 < 2) {
        iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar3);
        if (*piVar7 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        piVar5 = (int *)Rotatelab_Currency_CurrencyManager__GetCurrency_10808a4
                                  (iVar1,*(undefined4 *)(*piVar7 + 0xc));
        if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        uVar6 = *(undefined4 *)(*piVar5 + 0xfc);
        (**(code **)(*piVar5 + 0xf8))(piVar5,uVar6,2,0,uVar6);
      }
      if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_Boosters_UI_BoosterInfoPopupController__Show_113ded4
                (*(int *)(param_1 + 0x14),*(undefined4 *)(param_1 + 0x3c),0);
      if (*piVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(*piVar7 + 0xc) == 3) {
        iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                          (**(undefined4 **)(_UNK_010904f8 + 0x10903bc));
        if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(int *)(iVar1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar1 = RemoteVariableSO_bool___get_value_1a81e78
                          (*(int *)(iVar1 + 0x1c),**(undefined4 **)(_UNK_010904fc + 0x10903ec));
        if (iVar1 != 0) {
          Rotatelab_Tutorial_TutorialManager__AutoPlaceBlastersOfColor_1080b14(iVar1,9,4);
        }
      }
      piVar5 = *(int **)(_UNK_01090500 + 0x1090414);
      iVar1 = *piVar5;
      if (*(int *)(iVar1 + 0x74) == 0) {
        FUN_00ec3934();
        iVar1 = *piVar5;
      }
      iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x20);
      uVar6 = Rotatelab_Tutorial_TutorialManager__get_CurrentTutorialStepIndex_107ef84();
      if (*piVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar9 = System_String__Concat_29fee38
                        (*(undefined4 *)(*piVar7 + 0x14),
                         **(undefined4 **)(_UNK_01090504 + 0x1090458),0);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_GameAction_int__object___Raise_23a4108
                (iVar1,uVar6,uVar9,**(undefined4 **)(_UNK_01090508 + 0x1090484));
    }
  }
  return;
}

