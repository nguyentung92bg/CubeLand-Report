/* IL2CPP: Rotatelab.Tutorial.TutorialManager.<ShowBlasterPlacementTutorialCoroutine>d__34$$MoveNext
bool Rotatelab_Tutorial_TutorialManager__ShowBlasterPlacementTutorialCoroutine_d__34__MoveNext (Rotatelab_Tutorial_TutorialManager__ShowBlasterPlacementTutorialCoroutine_d__34_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Tutorial.TutorialManager.<ShowBlasterPlacementTutorialCoroutine>d__34$$MoveNext
   bool Rotatelab_Tutorial_TutorialManager__ShowBlasterPlacementTutorialCoroutine_d__34__MoveNext
   (Rotatelab_Tutorial_TutorialManager__ShowBlasterPlacementTutorialCoroutine_d__34_o* __this, const
   MethodInfo* method); */

undefined4
Rotatelab_Tutorial_TutorialManager__ShowBlasterPlacementTutorialCoroutine_d__34__MoveNext_10816bc
          (int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int *piVar4;
  int iVar5;
  
  pcVar3 = (char *)(_UNK_010919b4 + 0x10916d0);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010919b8 + 0x10916e4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010919bc + 0x10916f0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010919c0 + 0x10916fc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010919c4 + 0x1091708));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010919c8 + 0x1091714));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010919cc + 0x1091720));
    *pcVar3 = '\x01';
  }
  iVar5 = *(int *)(param_1 + 0x10);
  if (*(int *)(param_1 + 8) == 1) {
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
  }
  else {
    if (*(int *)(param_1 + 8) != 0) {
      return 0;
    }
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    iVar1 = Rotatelab_Tutorial_TutorialManager__get_CurrentTutorialStepIndex_107ef84();
    Rotatelab_Tutorial_TutorialManager__set_CurrentTutorialStepIndex_107efd8(iVar1 + 1);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar5 + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_GameObject__SetActive_3602038(*(int *)(iVar5 + 0x24),1,0);
    piVar4 = *(int **)(_UNK_010919d0 + 0x1091790);
    iVar1 = *piVar4;
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      iVar1 = *piVar4;
    }
    iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x3c);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_GameAction_bool___Raise_23a280c(iVar1,1,**(undefined4 **)(_UNK_010919d4 + 0x10917c8));
    piVar4 = *(int **)(_UNK_010919d8 + 0x10917dc);
    iVar1 = *piVar4;
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      iVar1 = *piVar4;
    }
    iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x20);
    uVar2 = Rotatelab_Tutorial_TutorialManager__get_CurrentTutorialStepIndex_107ef84();
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_GameAction_int__object___Raise_23a4108
              (iVar1,uVar2,*(undefined4 *)(iVar5 + 0x2c),
               **(undefined4 **)(_UNK_010919dc + 0x1091824));
    iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_010919e0 + 0x1091838));
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar1 + 0xb4) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(*(int *)(iVar1 + 0xb4) + 0xc);
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010919e4 + 0x109187c));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar1 + 0xb4) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(*(int *)(iVar1 + 0xb4) + 0xc) == *(int *)(param_1 + 0x14)) {
    *(undefined4 *)(param_1 + 0xc) = 0;
    thunk_FUN_00ec5080((undefined4 *)(param_1 + 0xc),0);
    *(undefined4 *)(param_1 + 8) = 1;
    return 1;
  }
  if (iVar5 != 0) {
    if (*(int *)(iVar5 + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_GameObject__SetActive_3602038(*(int *)(iVar5 + 0x24),0,0);
    piVar4 = *(int **)(_UNK_010919e8 + 0x1091908);
    iVar1 = *piVar4;
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      iVar1 = *piVar4;
    }
    iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x3c);
    if (iVar1 != 0) {
      uVar2 = Rotatelab_GameAction_bool___Raise_23a280c
                        (iVar1,0,**(undefined4 **)(_UNK_010919ec + 0x1091940));
      Rotatelab_Tutorial_TutorialManager__SetShowed_107f0f4(uVar2,*(undefined4 *)(iVar5 + 0x2c));
      piVar4 = *(int **)(_UNK_010919f0 + 0x109195c);
      iVar1 = *piVar4;
      if (*(int *)(iVar1 + 0x74) == 0) {
        FUN_00ec3934();
        iVar1 = *piVar4;
      }
      iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x24);
      uVar2 = Rotatelab_Tutorial_TutorialManager__get_CurrentTutorialStepIndex_107ef84();
      if (iVar1 != 0) {
        Rotatelab_GameAction_int__object___Raise_23a4108
                  (iVar1,uVar2,*(undefined4 *)(iVar5 + 0x2c),
                   **(undefined4 **)(_UNK_010919f4 + 0x10919a4));
        return 0;
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

