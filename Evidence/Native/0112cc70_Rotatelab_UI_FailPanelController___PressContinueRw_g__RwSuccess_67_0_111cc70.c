/* IL2CPP: Rotatelab.UI.FailPanelController$$<PressContinueRw>g__RwSuccess|67_0
void Rotatelab_UI_FailPanelController___PressContinueRw_g__RwSuccess_67_0 (Rotatelab_UI_FailPanelController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.FailPanelController$$<PressContinueRw>g__RwSuccess|67_0
   void Rotatelab_UI_FailPanelController___PressContinueRw_g__RwSuccess_67_0
   (Rotatelab_UI_FailPanelController_o* __this, const MethodInfo* method); */

void Rotatelab_UI_FailPanelController___PressContinueRw_g__RwSuccess_67_0_111cc70(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  int *piVar4;
  undefined8 uVar5;
  
  pcVar3 = (char *)(_UNK_0112cdac + 0x112cc88);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112cdb0 + 0x112cc9c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112cdb4 + 0x112cca8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112cdb8 + 0x112ccb4));
    *pcVar3 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0112cdbc + 0x112ccc8));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar1 + 0x34) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x34) + 0x14);
  if (*(int *)(**(int **)(_UNK_0112cdc0 + 0x112ccf8) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar2 = Rotatelab_Scripts_LevelManager__get_LevelNumber_1065d14(0);
  uVar5 = Rotatelab_ObservableLong__op_Implicit_fb4344(uVar2,0);
  uVar2 = (undefined4)((ulonglong)uVar5 >> 0x20);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = Rotatelab_Networking_SatoriAdsConfigFlag_RewardedConfig__IsCapActive_fe72e8
                    (iVar1,uVar2,(int)uVar5,uVar2,0);
  if (iVar1 != 0) {
    iVar1 = Rotatelab_RotateConstants__get_TotalRewardedUseCount_1078e84(0);
    Rotatelab_RotateConstants__set_TotalRewardedUseCount_1078ee0(iVar1 + 1,0);
  }
  piVar4 = *(int **)(_UNK_0112cdc4 + 0x112cd70);
  iVar1 = *piVar4;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar4;
  }
  Rotatelab_UI_FailPanelController__TriggerPlayOn_111b958
            (param_1,**(undefined4 **)(iVar1 + 0x5c),*(undefined4 *)(param_1 + 0xe0),3,0);
  return;
}

