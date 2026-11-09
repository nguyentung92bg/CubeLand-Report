/* IL2CPP: Rotatelab.UI.DeleteAccountConfirmationPopup$$Start
void Rotatelab_UI_DeleteAccountConfirmationPopup__Start (Rotatelab_UI_DeleteAccountConfirmationPopup_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.DeleteAccountConfirmationPopup$$Start
   void Rotatelab_UI_DeleteAccountConfirmationPopup__Start
   (Rotatelab_UI_DeleteAccountConfirmationPopup_o* __this, const MethodInfo* method); */

void Rotatelab_UI_DeleteAccountConfirmationPopup__Start_112943c(int param_1)

{
  undefined4 uVar1;
  int *piVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 *puVar7;
  int iVar8;
  
  pcVar3 = (char *)(_UNK_011395f0 + 0x1139450);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011395f4 + 0x1139464));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011395f8 + 0x1139470));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011395fc + 0x113947c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01139600 + 0x1139488));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01139604 + 0x1139494));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01139608 + 0x11394a0));
    *pcVar3 = '\x01';
  }
  Rotatelab_UI_PopupController__Start_11246e8(param_1);
  if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_UI_DeleteAccountConfirmationPopup__OnInputFieldValueChanged_1129624
            (param_1,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 0x160));
  if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = *(int *)(*(int *)(param_1 + 0x1c) + 0x130);
  uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0113960c + 0x11394e8));
  UnityEngine_Events_UnityAction_object____ctor_1c5feb4
            (uVar1,param_1,**(undefined4 **)(_UNK_01139610 + 0x1139508),0);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Events_UnityEvent_object___AddListener_1c62414
            (iVar4,uVar1,**(undefined4 **)(_UNK_01139614 + 0x113952c));
  if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  puVar7 = *(undefined4 **)(_UNK_01139618 + 0x1139550);
  iVar4 = *(int *)(*(int *)(param_1 + 0x20) + 0xb4);
  uVar1 = thunk_FUN_00f00cdc(*puVar7);
  UnityEngine_Events_UnityAction___ctor_361afc4
            (uVar1,param_1,**(undefined4 **)(_UNK_0113961c + 0x1139570),0);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Events_UnityEvent__AddListener_361b098(iVar4,uVar1,0);
  if (*(int *)(param_1 + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = *(int *)(*(int *)(param_1 + 0x24) + 0xb4);
  uVar1 = thunk_FUN_00f00cdc(*puVar7);
  UnityEngine_Events_UnityAction___ctor_361afc4
            (uVar1,param_1,**(undefined4 **)(_UNK_01139620 + 0x11395c8),0);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar1 = UnityEngine_Events_UnityEvent__GetDelegate_361b0cc(uVar1,uVar1,0);
  iVar4 = *(int *)(iVar4 + 8);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar3 = (char *)(_UNK_0362a14c + 0x362a0a8);
  if (*pcVar3 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0362a150 + 0x362a0bc));
    *pcVar3 = '\x01';
  }
  iVar6 = *(int *)(iVar4 + 0xc);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar8 = *(int *)(iVar6 + 8);
  uVar5 = *(uint *)(iVar6 + 0xc);
  piVar2 = *(int **)(_UNK_0362a154 + 0x362a0f4);
  *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar5 < *(uint *)(iVar8 + 0xc)) {
    *(uint *)(iVar6 + 0xc) = uVar5 + 1;
    puVar7 = (undefined4 *)(iVar8 + uVar5 * 4 + 0x10);
    *puVar7 = uVar1;
    thunk_FUN_00ec5080(puVar7,uVar1);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize_267dae0
              (iVar6,uVar1,*(undefined4 *)(*(int *)(*(int *)(*piVar2 + 0x10) + 0x60) + 0x38));
  }
  *(undefined1 *)(iVar4 + 0x14) = 1;
  return;
}

