/* IL2CPP: Rotatelab.Tutorial.TutorialManager.<ShowManualRotationTutorialCoroutine>d__36$$MoveNext
bool Rotatelab_Tutorial_TutorialManager__ShowManualRotationTutorialCoroutine_d__36__MoveNext (Rotatelab_Tutorial_TutorialManager__ShowManualRotationTutorialCoroutine_d__36_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Tutorial.TutorialManager.<ShowManualRotationTutorialCoroutine>d__36$$MoveNext
   bool Rotatelab_Tutorial_TutorialManager__ShowManualRotationTutorialCoroutine_d__36__MoveNext
   (Rotatelab_Tutorial_TutorialManager__ShowManualRotationTutorialCoroutine_d__36_o* __this, const
   MethodInfo* method); */

undefined4
Rotatelab_Tutorial_TutorialManager__ShowManualRotationTutorialCoroutine_d__36__MoveNext_1081a50
          (int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  char *pcVar3;
  undefined4 uVar4;
  int *piVar5;
  undefined4 uVar6;
  int iVar7;
  
  pcVar3 = (char *)(_UNK_01091d74 + 0x1091a64);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01091d78 + 0x1091a78));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01091d7c + 0x1091a84));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01091d80 + 0x1091a90));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01091d84 + 0x1091a9c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01091d88 + 0x1091aa8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01091d8c + 0x1091ab4));
    *pcVar3 = '\x01';
  }
  iVar2 = *(int *)(param_1 + 8);
  iVar7 = *(int *)(param_1 + 0x10);
  if (iVar2 == 2) {
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
  }
  else {
    if (iVar2 == 1) {
      *(undefined4 *)(param_1 + 8) = 0xffffffff;
    }
    else {
      if (iVar2 != 0) {
        return 0;
      }
      *(undefined4 *)(param_1 + 8) = 0xffffffff;
      if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      *(undefined1 *)(iVar7 + 0x38) = 1;
      iVar2 = Rotatelab_Tutorial_TutorialManager__get_CurrentTutorialStepIndex_107ef84();
      Rotatelab_Tutorial_TutorialManager__set_CurrentTutorialStepIndex_107efd8(iVar2 + 1);
      if (*(int *)(iVar7 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar2 = UnityEngine_Component__get_gameObject_35fe360(*(int *)(iVar7 + 0x28),0);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_GameObject__SetActive_3602038(iVar2,1,0);
      uVar4 = *(undefined4 *)(iVar7 + 0x28);
      if (*(int *)(**(int **)(_UNK_01091d90 + 0x1091b50) + 0x74) == 0) {
        FUN_00ec3934();
      }
      Rotatelab_Extensions__SetVisibility_fc2a78(uVar4,1,0,0);
      piVar5 = *(int **)(_UNK_01091d94 + 0x1091b84);
      iVar2 = *piVar5;
      if (*(int *)(iVar2 + 0x74) == 0) {
        FUN_00ec3934();
        iVar2 = *piVar5;
      }
      iVar2 = *(int *)(*(int *)(iVar2 + 0x5c) + 0x20);
      uVar4 = Rotatelab_Tutorial_TutorialManager__get_CurrentTutorialStepIndex_107ef84();
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar4 = Rotatelab_GameAction_int__object___Raise_23a4108
                        (iVar2,uVar4,*(undefined4 *)(iVar7 + 0x30),
                         **(undefined4 **)(_UNK_01091d98 + 0x1091bcc));
      Rotatelab_Tutorial_TutorialManager__AutoPlaceBlastersOfColor_1080b14(uVar4,4,4);
    }
    iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_01091d9c + 0x1091bf8));
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(char *)(iVar2 + 0x1c) == '\0') {
      *(undefined4 *)(param_1 + 0xc) = 0;
      thunk_FUN_00ec5080((undefined4 *)(param_1 + 0xc),0);
      *(undefined4 *)(param_1 + 8) = 1;
      return 1;
    }
  }
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01091da0 + 0x1091c4c));
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(char *)(iVar2 + 0x1c) != '\0') {
    *(undefined4 *)(param_1 + 0xc) = 0;
    thunk_FUN_00ec5080((undefined4 *)(param_1 + 0xc),0);
    *(undefined4 *)(param_1 + 8) = 2;
    return 1;
  }
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar1 = *(undefined4 **)(_UNK_01091da4 + 0x1091cac);
  uVar6 = *(undefined4 *)(iVar7 + 0x28);
  *(undefined1 *)(iVar7 + 0x38) = 0;
  uVar4 = thunk_FUN_00f00cdc(*puVar1);
  System_Action___ctor_2b10bac(uVar4,iVar7,**(undefined4 **)(_UNK_01091da8 + 0x1091cd0),0);
  if (*(int *)(**(int **)(_UNK_01091dac + 0x1091ce4) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar4 = Rotatelab_Extensions__SetVisibility_fc2a78(uVar6,0,uVar4,0);
  Rotatelab_Tutorial_TutorialManager__SetShowed_107f0f4(uVar4,*(undefined4 *)(iVar7 + 0x30));
  piVar5 = *(int **)(_UNK_01091db0 + 0x1091d1c);
  iVar2 = *piVar5;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar5;
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x5c) + 0x24);
  uVar4 = Rotatelab_Tutorial_TutorialManager__get_CurrentTutorialStepIndex_107ef84();
  if (iVar2 != 0) {
    Rotatelab_GameAction_int__object___Raise_23a4108
              (iVar2,uVar4,*(undefined4 *)(iVar7 + 0x30),
               **(undefined4 **)(_UNK_01091db4 + 0x1091d64));
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

