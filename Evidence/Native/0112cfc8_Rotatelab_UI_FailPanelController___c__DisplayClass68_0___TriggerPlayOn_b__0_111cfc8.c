/* IL2CPP: Rotatelab.UI.FailPanelController.<>c__DisplayClass68_0$$<TriggerPlayOn>b__0
void Rotatelab_UI_FailPanelController___c__DisplayClass68_0___TriggerPlayOn_b__0 (Rotatelab_UI_FailPanelController___c__DisplayClass68_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.FailPanelController.<>c__DisplayClass68_0$$<TriggerPlayOn>b__0
   void Rotatelab_UI_FailPanelController___c__DisplayClass68_0___TriggerPlayOn_b__0
   (Rotatelab_UI_FailPanelController___c__DisplayClass68_0_o* __this, const MethodInfo* method); */

void Rotatelab_UI_FailPanelController___c__DisplayClass68_0___TriggerPlayOn_b__0_111cfc8
               (int param_1)

{
  char *pcVar1;
  int iVar2;
  int *piVar3;
  
  pcVar1 = (char *)(_UNK_0112d0a0 + 0x112cfe0);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112d0a4 + 0x112cff4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112d0a8 + 0x112d000));
    *pcVar1 = '\x01';
  }
  if (*(int *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = *(int *)(*(int *)(param_1 + 8) + 0x10);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_UI_PopupController__Hide_1124930(iVar2,0);
  piVar3 = *(int **)(_UNK_0112d0ac + 0x112d040);
  iVar2 = *piVar3;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar3;
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x5c) + 0x20);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_GameAction_PlayOnOffer___Raise_23a31ac
            (iVar2,*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),
             *(undefined4 *)(param_1 + 0x14),**(undefined4 **)(_UNK_0112d0b0 + 0x112d08c));
  return;
}

