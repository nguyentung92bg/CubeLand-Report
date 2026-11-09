/* IL2CPP: Rotatelab.Tutorial.TutorialManager$$CheckLevelPopupTutorial
void Rotatelab_Tutorial_TutorialManager__CheckLevelPopupTutorial (Rotatelab_Tutorial_TutorialManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Tutorial.TutorialManager$$CheckLevelPopupTutorial
   void Rotatelab_Tutorial_TutorialManager__CheckLevelPopupTutorial
   (Rotatelab_Tutorial_TutorialManager_o* __this, const MethodInfo* method); */

void Rotatelab_Tutorial_TutorialManager__CheckLevelPopupTutorial_107f9a0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  int *piVar7;
  int *piVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  
  pcVar6 = (char *)(_UNK_0108fa40 + 0x108f9b4);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0108fa44 + 0x108f9c8));
    *pcVar6 = '\x01';
  }
  piVar7 = *(int **)(_UNK_0108fa48 + 0x108f9dc);
  iVar1 = *piVar7;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar7;
  }
  if (*(char *)(*(int *)(iVar1 + 0x5c) + 4) != '\0') {
    Rotatelab_Tutorial_TutorialManager__CheckBoosterTutorial_107ff9c(param_1);
    iVar1 = *piVar7;
  }
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar7;
  }
  if (*(char *)(*(int *)(iVar1 + 0x5c) + 5) == '\0') {
    return;
  }
  pcVar6 = (char *)(_UNK_01090854 + 0x1090524);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01090858 + 0x1090538));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109085c + 0x1090544));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01090860 + 0x1090550));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01090864 + 0x109055c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01090868 + 0x1090568));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109086c + 0x1090574));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01090870 + 0x1090580));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01090874 + 0x109058c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01090878 + 0x1090598));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109087c + 0x10905a4));
    *pcVar6 = '\x01';
  }
  iVar9 = 0;
  piVar7 = (int *)(param_1 + 0x20);
  *piVar7 = 0;
  thunk_FUN_00ec5080(piVar7,0);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01090880 + 0x10905d0));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(iVar1 + 0x18);
  puVar10 = *(undefined4 **)(_UNK_01090884 + 0x10905f4);
  piVar8 = *(int **)(_UNK_01090888 + 0x10905fc);
  while( true ) {
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(*(int *)(iVar1 + 0xc) + 0xc) <= iVar9) {
      return;
    }
    if (*(int *)(iVar1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = System_Collections_Generic_List_object___get_Item_267d814
                      (*(int *)(iVar1 + 0xc),iVar9,*puVar10);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = *(int *)(iVar2 + 0x24);
    if (*(int *)(*piVar8 + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar3 = Rotatelab_Scripts_LevelManager__get_LevelNumber_1065d14(0);
    iVar4 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(uVar3,0);
    if (iVar2 == iVar4) break;
    iVar9 = iVar9 + 1;
  }
  if (*(int *)(iVar1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = System_Collections_Generic_List_object___get_Item_267d814
                    (*(int *)(iVar1 + 0xc),iVar9,*puVar10);
  *piVar7 = iVar1;
  thunk_FUN_00ec5080(piVar7,iVar1);
  iVar1 = Rotatelab_Tutorial_TutorialManager__get_CurrentTutorialStepIndex_107ef84();
  Rotatelab_Tutorial_TutorialManager__set_CurrentTutorialStepIndex_107efd8(iVar1 + 1);
  if (*piVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar10 = *(undefined4 **)(_UNK_0109088c + 0x10906e4);
  uStack_24 = *(undefined4 *)(*piVar7 + 0xc);
  uStack_2c = *puVar10;
  uStack_28 = 0xffffffff;
  uVar3 = System_Enum__ToString_2bab8c0(&uStack_2c,0);
  iVar1 = Rotatelab_Tutorial_TutorialManager__CheckShowed_107f040(uVar3,uVar3);
  if (iVar1 != 0) {
    return;
  }
  if (*piVar7 != 0) {
    uStack_2c = *puVar10;
    uStack_24 = *(undefined4 *)(*piVar7 + 0xc);
    uStack_28 = 0xffffffff;
    uVar3 = System_Enum__ToString_2bab8c0(&uStack_2c,0);
    Rotatelab_Tutorial_TutorialManager__SetShowed_107f0f4(uVar3,uVar3);
    if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    MechanicInfoPopupController__Show_fa46cc
              (*(int *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x20),0);
    if (*piVar7 != 0) {
      uVar3 = System_Int32__ToString_2b6b9ec(*piVar7 + 0x24,0);
      uVar3 = System_String__Concat_29fee38(**(undefined4 **)(_UNK_01090890 + 0x1090798),uVar3,0);
      if (*(int *)(**(int **)(_UNK_01090894 + 0x10907ac) + 0x74) == 0) {
        FUN_00ec3934();
      }
      UnityEngine_Debug__Log_35b1c44(uVar3,0);
      piVar8 = *(int **)(_UNK_01090898 + 0x10907d4);
      iVar1 = *piVar8;
      if (*(int *)(iVar1 + 0x74) == 0) {
        FUN_00ec3934();
        iVar1 = *piVar8;
      }
      iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x20);
      uVar3 = Rotatelab_Tutorial_TutorialManager__get_CurrentTutorialStepIndex_107ef84();
      if (*piVar7 != 0) {
        uVar5 = System_String__Concat_29fee38
                          (*(undefined4 *)(*piVar7 + 0x1c),
                           **(undefined4 **)(_UNK_0109089c + 0x1090818),0);
        if (iVar1 != 0) {
          Rotatelab_GameAction_int__object___Raise_23a4108
                    (iVar1,uVar3,uVar5,**(undefined4 **)(_UNK_010908a0 + 0x1090844));
          return;
        }
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

