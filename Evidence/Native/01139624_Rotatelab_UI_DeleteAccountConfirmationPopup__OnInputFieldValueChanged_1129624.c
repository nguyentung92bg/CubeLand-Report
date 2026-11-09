/* IL2CPP: Rotatelab.UI.DeleteAccountConfirmationPopup$$OnInputFieldValueChanged
void Rotatelab_UI_DeleteAccountConfirmationPopup__OnInputFieldValueChanged (Rotatelab_UI_DeleteAccountConfirmationPopup_o* __this, System_String_o* value, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.DeleteAccountConfirmationPopup$$OnInputFieldValueChanged
   void Rotatelab_UI_DeleteAccountConfirmationPopup__OnInputFieldValueChanged
   (Rotatelab_UI_DeleteAccountConfirmationPopup_o* __this, System_String_o* value, const MethodInfo*
   method); */

void Rotatelab_UI_DeleteAccountConfirmationPopup__OnInputFieldValueChanged_1129624
               (int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  int iVar2;
  undefined4 unaff_r6;
  char *pcVar3;
  int iVar4;
  undefined4 unaff_lr;
  
  pcVar3 = (char *)(_UNK_01139734 + 0x113963c);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01139738 + 0x1139650));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113973c + 0x113965c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01139740 + 0x1139668));
    *pcVar3 = '\x01';
  }
  iVar4 = *(int *)(param_1 + 0x20);
  if (*(int *)(**(int **)(_UNK_01139744 + 0x113967c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar1 = Rotatelab_Extensions__EqualsIgnoreCase_fc18b0
                    (param_2,**(undefined4 **)(_UNK_01139748 + 0x11396a0),0);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_UI_Selectable__set_interactable_39c00c0(iVar4,uVar1,0);
  if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = UnityEngine_Component__GetComponent_object__143f3b0
                    (*(int *)(param_1 + 0x20),**(undefined4 **)(_UNK_0113974c + 0x11396e4));
  if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar1 = 0x3f800000;
  if (*(char *)(*(int *)(param_1 + 0x20) + 0x9c) == '\0') {
    uVar1 = 0x3f000000;
  }
  pcVar3 = (char *)(_UNK_039b37ec + 0x39b3770);
  if (*pcVar3 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_039b37f0 + 0x39b3784),uVar1,0,extraout_r3,unaff_r4,
                       unaff_r5,unaff_r6,unaff_lr);
    *pcVar3 = '\x01';
  }
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = *(int *)(iVar4 + 8);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048(iVar4,0);
  }
  UNRECOVERED_JUMPTABLE = *(code **)(_UNK_039b37f4 + 0x39b37bc);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(_UNK_039b37f8 + 0x39b37cc);
    *(code **)(_UNK_039b37fc + 0x39b37dc) = UNRECOVERED_JUMPTABLE;
  }
                    /* WARNING: Could not recover jumptable at 0x039b37e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(iVar2,uVar1);
  return;
}

