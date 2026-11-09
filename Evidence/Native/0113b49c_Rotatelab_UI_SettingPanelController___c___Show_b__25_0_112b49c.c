/* IL2CPP: Rotatelab.UI.SettingPanelController.<>c$$<Show>b__25_0
void Rotatelab_UI_SettingPanelController___c___Show_b__25_0 (Rotatelab_UI_SettingPanelController___c_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.SettingPanelController.<>c$$<Show>b__25_0
   void Rotatelab_UI_SettingPanelController___c___Show_b__25_0
   (Rotatelab_UI_SettingPanelController___c_o* __this, const MethodInfo* method); */

void Rotatelab_UI_SettingPanelController___c___Show_b__25_0_112b49c(void)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_0113b548 + 0x113b4ac);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113b54c + 0x113b4c0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0113b550 + 0x113b4cc));
    *pcVar2 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0113b554 + 0x113b4e0));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Audio_AudioManager__PlaySfx_1085fb4(iVar1,6,0);
  piVar3 = *(int **)(_UNK_0113b558 + 0x113b510);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar3;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x8c);
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

