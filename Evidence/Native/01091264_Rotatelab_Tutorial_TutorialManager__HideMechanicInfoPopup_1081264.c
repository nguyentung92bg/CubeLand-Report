/* IL2CPP: Rotatelab.Tutorial.TutorialManager$$HideMechanicInfoPopup
void Rotatelab_Tutorial_TutorialManager__HideMechanicInfoPopup (Rotatelab_Tutorial_TutorialManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Tutorial.TutorialManager$$HideMechanicInfoPopup
   void Rotatelab_Tutorial_TutorialManager__HideMechanicInfoPopup
   (Rotatelab_Tutorial_TutorialManager_o* __this, const MethodInfo* method); */

void Rotatelab_Tutorial_TutorialManager__HideMechanicInfoPopup_1081264(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  
  pcVar4 = (char *)(_UNK_0109143c + 0x1091278);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01091440 + 0x109128c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01091444 + 0x1091298));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01091448 + 0x10912a4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109144c + 0x10912b0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01091450 + 0x10912bc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01091454 + 0x10912c8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01091458 + 0x10912d4));
    *pcVar4 = '\x01';
  }
  if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(char *)(*(int *)(param_1 + 0x18) + 0x20) == '\0') {
    return;
  }
  if (*(int *)(param_1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  MechanicInfoPopupController__Hide_fa48c8(*(int *)(param_1 + 0x18),0);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0109145c + 0x1091320));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = RemoteVariableSO_bool___get_value_1a81e78
                    (*(int *)(iVar1 + 0x1c),**(undefined4 **)(_UNK_01091460 + 0x1091350));
  if (iVar1 != 0) {
    piVar5 = *(int **)(_UNK_01091464 + 0x109136c);
    iVar1 = *piVar5;
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      iVar1 = *piVar5;
    }
    iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0xd0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_GameAction_bool__bool___Raise_23a39b8
              (iVar1,0,0,**(undefined4 **)(_UNK_01091468 + 0x10913a8));
  }
  piVar5 = *(int **)(_UNK_0109146c + 0x10913bc);
  iVar1 = *piVar5;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar5;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x24);
  uVar2 = Rotatelab_Tutorial_TutorialManager__get_CurrentTutorialStepIndex_107ef84();
  if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar3 = System_String__Concat_29fee38
                    (*(undefined4 *)(*(int *)(param_1 + 0x20) + 0x1c),
                     **(undefined4 **)(_UNK_01091470 + 0x1091400),0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x023b4120. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0xc))
            (*(undefined4 *)(iVar1 + 0x20),uVar2,uVar3,*(undefined4 *)(iVar1 + 0x14));
  return;
}

