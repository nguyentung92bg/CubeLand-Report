/* IL2CPP: Rotatelab.CloudRush.CloudRushSuccessController$$UpdatePopup
void Rotatelab_CloudRush_CloudRushSuccessController__UpdatePopup (Rotatelab_CloudRush_CloudRushSuccessController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CloudRush.CloudRushSuccessController$$UpdatePopup
   void Rotatelab_CloudRush_CloudRushSuccessController__UpdatePopup
   (Rotatelab_CloudRush_CloudRushSuccessController_o* __this, const MethodInfo* method); */

void Rotatelab_CloudRush_CloudRushSuccessController__UpdatePopup_10e7398(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar3;
  int iVar4;
  undefined4 *puVar5;
  uint in_fpscr;
  
  pcVar3 = (char *)(_UNK_010f7580 + 0x10f73ac);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f7584 + 0x10f73c0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f7588 + 0x10f73cc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f758c + 0x10f73d8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010f7590 + 0x10f73e4));
    *pcVar3 = '\x01';
  }
  puVar5 = *(undefined4 **)(_UNK_010f7594 + 0x10f73f8);
  iVar4 = *(int *)(param_1 + 0x18);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar5);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = Rotatelab_CloudRush_CloudRushController__get_CloudRushRewardAmount_10dbf88(iVar1,0);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
  TMPro_TMP_Text__SetText_34ffc34(iVar4,**(undefined4 **)(_UNK_010f7598 + 0x10f7444),uVar2,0);
  iVar4 = *(int *)(param_1 + 0x1c);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010f759c + 0x10f7460));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_UI_Image__set_sprite_37167cc(iVar4,*(undefined4 *)(iVar1 + 0x10),0);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar5);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = Rotatelab_CloudRush_CloudRushController__get_CloudRushCurrentPlayerCount_10dbe30(iVar1,0);
  iVar4 = *(int *)(param_1 + 0x20);
  if (iVar1 < 2) {
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    pcVar3 = (char *)(iRam036120c4 + 0x3612050);
    if (*pcVar3 == '\0') {
      thunk_FUN_00ec37c0(*(undefined4 *)(iRam036120c8 + 0x3612064),0,0);
      *pcVar3 = '\x01';
    }
    if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = *(int *)(iVar4 + 8);
    if (iVar1 != 0) {
      UNRECOVERED_JUMPTABLE = *(code **)(iRam036120cc + 0x3612090);
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(iRam036120d0 + 0x36120a0);
        *(code **)(iRam036120d4 + 0x36120b0) = UNRECOVERED_JUMPTABLE;
      }
                    /* WARNING: Could not recover jumptable at 0x036120bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(iVar1,0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048();
  }
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = UnityEngine_GameObject__get_gameObject_3602cac(iVar4,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar1,1,0);
  iVar4 = *(int *)(param_1 + 0x24);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar5);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = Rotatelab_CloudRush_CloudRushController__get_CloudRushCurrentPlayerCount_10dbe30(iVar1,0);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = VectorSignedToFloat(iVar1 + -1,(byte)(in_fpscr >> 0x16) & 3);
  TMPro_TMP_Text__SetText_34ffc64
            (iVar4,**(undefined4 **)(_UNK_010f75a0 + 0x10f7570),uVar2,0,0,0,0,0,0,0);
  return;
}

