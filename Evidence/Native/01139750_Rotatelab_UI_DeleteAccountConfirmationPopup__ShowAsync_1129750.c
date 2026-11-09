/* IL2CPP: Rotatelab.UI.DeleteAccountConfirmationPopup$$ShowAsync
Cysharp_Threading_Tasks_UniTask_bool__o Rotatelab_UI_DeleteAccountConfirmationPopup__ShowAsync (Rotatelab_UI_DeleteAccountConfirmationPopup_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.DeleteAccountConfirmationPopup$$ShowAsync
   Cysharp_Threading_Tasks_UniTask_bool__o Rotatelab_UI_DeleteAccountConfirmationPopup__ShowAsync
   (Rotatelab_UI_DeleteAccountConfirmationPopup_o* __this, const MethodInfo* method); */

void Rotatelab_UI_DeleteAccountConfirmationPopup__ShowAsync_1129750(undefined4 *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar3 = (char *)(_UNK_01139850 + 0x113976c);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01139854 + 0x1139780));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01139858 + 0x113978c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113985c + 0x1139798));
    *pcVar3 = '\x01';
  }
  if (*(int *)(param_2 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  TMPro_TMP_InputField__set_text_34eb818
            (*(int *)(param_2 + 0x1c),
             **(undefined4 **)(*(int *)(*(int *)(_UNK_01139860 + 0x11397ac) + 0x48) + 0x5c),0);
  Rotatelab_UI_PopupController__Show_1124734(param_2,1);
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01139864 + 0x11397ec));
  Cysharp_Threading_Tasks_UniTaskCompletionSource_bool____ctor_1c3c040
            (iVar1,**(undefined4 **)(_UNK_01139868 + 0x1139800));
  piVar2 = (int *)(param_2 + 0x28);
  *piVar2 = iVar1;
  thunk_FUN_00ec5080(piVar2,iVar1);
  if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Cysharp_Threading_Tasks_UniTaskCompletionSource_bool___get_Task_1c3c05c
            (&uStack_20,*piVar2,**(undefined4 **)(_UNK_0113986c + 0x1139838));
  *param_1 = uStack_20;
  param_1[1] = uStack_1c;
  return;
}

