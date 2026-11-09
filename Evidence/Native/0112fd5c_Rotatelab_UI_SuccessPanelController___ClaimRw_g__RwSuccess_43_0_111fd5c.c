/* IL2CPP: Rotatelab.UI.SuccessPanelController$$<ClaimRw>g__RwSuccess|43_0
void Rotatelab_UI_SuccessPanelController___ClaimRw_g__RwSuccess_43_0 (Rotatelab_UI_SuccessPanelController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.SuccessPanelController$$<ClaimRw>g__RwSuccess|43_0
   void Rotatelab_UI_SuccessPanelController___ClaimRw_g__RwSuccess_43_0
   (Rotatelab_UI_SuccessPanelController_o* __this, const MethodInfo* method); */

void Rotatelab_UI_SuccessPanelController___ClaimRw_g__RwSuccess_43_0_111fd5c(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  char *pcVar5;
  undefined4 uVar6;
  
  pcVar5 = (char *)(_UNK_0112fe70 + 0x112fd70);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112fe74 + 0x112fd84));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112fe78 + 0x112fd90));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112fe7c + 0x112fd9c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112fe80 + 0x112fda8));
    *pcVar5 = '\x01';
  }
  Rotatelab_UI_SuccessPanelController__ClaimReward_111d5c4(param_1,*(undefined4 *)(param_1 + 0xa4));
  piVar4 = *(int **)(_UNK_0112fe84 + 0x112fdc8);
  iVar2 = *piVar4;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934(iVar2);
    iVar2 = *piVar4;
  }
  piVar4 = *(int **)(_UNK_0112fe88 + 0x112fdec);
  iVar1 = *piVar4;
  iVar2 = *(int *)(*(int *)(iVar2 + 0x5c) + 0x28);
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar4;
  }
  piVar4 = *(int **)(_UNK_0112fe8c + 0x112fe14);
  iVar3 = *piVar4;
  uVar6 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x10);
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934(iVar3);
    iVar3 = *piVar4;
  }
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_GameAction_object__object___Raise_23a4f8c
            (iVar2,uVar6,**(undefined4 **)(iVar3 + 0x5c),
             **(undefined4 **)(_UNK_0112fe90 + 0x112fe5c));
  pcVar5 = (char *)(_UNK_0112daec + 0x112da00);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112daf0 + 0x112da14));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112daf4 + 0x112da20));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112daf8 + 0x112da2c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112dafc + 0x112da38));
    *pcVar5 = '\x01';
  }
  piVar4 = *(int **)(_UNK_0112db00 + 0x112da4c);
  iVar2 = *piVar4;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar4;
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x5c) + 4);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_GameAction_bool___Raise_23a280c(iVar2,1,**(undefined4 **)(_UNK_0112db04 + 0x112da84));
  iVar2 = Rotatelab_UI_SuccessPanelController__get_IsCloudRushContinuingLevelFlow_111d2a0();
  if (iVar2 == 0) {
    return;
  }
  piVar4 = *(int **)(_UNK_0112db08 + 0x112daa4);
  iVar2 = *piVar4;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar4;
  }
  iVar2 = *(int *)(*(int *)(iVar2 + 0x5c) + 0x198);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = *(int *)(iVar2 + 8);
  if (iVar2 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x023b3c38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar2 + 0xc))(*(undefined4 *)(iVar2 + 0x20),0,0,*(undefined4 *)(iVar2 + 0x14));
  return;
}

