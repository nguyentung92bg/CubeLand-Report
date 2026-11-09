/* IL2CPP: Rotatelab.UI.FailPanelController$$ReturnPreGame
void Rotatelab_UI_FailPanelController__ReturnPreGame (Rotatelab_UI_FailPanelController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.FailPanelController$$ReturnPreGame
   void Rotatelab_UI_FailPanelController__ReturnPreGame (Rotatelab_UI_FailPanelController_o* __this,
   const MethodInfo* method); */

void Rotatelab_UI_FailPanelController__ReturnPreGame_111ae44(int param_1)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  
  pcVar3 = (char *)(_UNK_0112af48 + 0x112ae58);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112af4c + 0x112ae6c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112af50 + 0x112ae78));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112af54 + 0x112ae84));
    *pcVar3 = '\x01';
  }
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_UI_PopupController__Hide_1124930(*(int *)(param_1 + 0x10),0);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0112af58 + 0x112aeb4));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Audio_AudioManager__PlaySfx_1085fb4(iVar1,3,0);
  if (*(int *)(**(int **)(_UNK_0112af5c + 0x112aee4) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar1 = Rotatelab_UI_FailPanelController__TryFailCloudRushRun_111ad00(2);
  if (iVar1 != 0) {
    return;
  }
  piVar2 = *(int **)(_UNK_0112af60 + 0x112af10);
  iVar1 = *piVar2;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar2;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x88);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00fd08d0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),*(undefined4 *)(iVar1 + 0x14));
  return;
}

