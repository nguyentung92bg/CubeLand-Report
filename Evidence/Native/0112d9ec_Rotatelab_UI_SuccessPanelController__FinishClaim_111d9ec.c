/* IL2CPP: Rotatelab.UI.SuccessPanelController$$FinishClaim
void Rotatelab_UI_SuccessPanelController__FinishClaim (Rotatelab_UI_SuccessPanelController_o* __this, bool isFromRewarded, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.SuccessPanelController$$FinishClaim
   void Rotatelab_UI_SuccessPanelController__FinishClaim (Rotatelab_UI_SuccessPanelController_o*
   __this, bool isFromRewarded, const MethodInfo* method); */

void Rotatelab_UI_SuccessPanelController__FinishClaim_111d9ec(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_0112daec + 0x112da00);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112daf0 + 0x112da14));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112daf4 + 0x112da20));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112daf8 + 0x112da2c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0112dafc + 0x112da38));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_0112db00 + 0x112da4c);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar3;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 4);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_GameAction_bool___Raise_23a280c
            (iVar1,param_2,**(undefined4 **)(_UNK_0112db04 + 0x112da84));
  iVar1 = Rotatelab_UI_SuccessPanelController__get_IsCloudRushContinuingLevelFlow_111d2a0();
  if (iVar1 == 0) {
    return;
  }
  piVar3 = *(int **)(_UNK_0112db08 + 0x112daa4);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar3;
  }
  iVar1 = *(int *)(*(int *)(iVar1 + 0x5c) + 0x198);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 == 0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x023b3c38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar1 + 0xc))(*(undefined4 *)(iVar1 + 0x20),0,0,*(undefined4 *)(iVar1 + 0x14));
  return;
}

