/* IL2CPP: Rotatelab.Boosters.UI.SpecialBoosterInfoPopupController$$<Hide>b__4_0
void Rotatelab_Boosters_UI_SpecialBoosterInfoPopupController___Hide_b__4_0 (Rotatelab_Boosters_UI_SpecialBoosterInfoPopupController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Boosters.UI.SpecialBoosterInfoPopupController$$<Hide>b__4_0
   void Rotatelab_Boosters_UI_SpecialBoosterInfoPopupController___Hide_b__4_0
   (Rotatelab_Boosters_UI_SpecialBoosterInfoPopupController_o* __this, const MethodInfo* method); */

void Rotatelab_Boosters_UI_SpecialBoosterInfoPopupController___Hide_b__4_0_113fb20(int param_1)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_0114fc28 + 0x114fb34);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114fc2c + 0x114fb48));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114fc30 + 0x114fb54));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0114fc34 + 0x114fb60));
    *pcVar2 = '\x01';
  }
  if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Behaviour__set_enabled_35fd7dc(*(int *)(param_1 + 0x10),0,0);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0114fc38 + 0x114fb94));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Scripts_LevelStateManager__TrySetGamePaused_1017b2c(iVar1,0,param_1,0);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0114fc3c + 0x114fbcc));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar3 = *(int **)(_UNK_0114fc40 + 0x114fbec);
  *(undefined1 *)(iVar1 + 0x39) = 0;
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar3;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x1a8);
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

