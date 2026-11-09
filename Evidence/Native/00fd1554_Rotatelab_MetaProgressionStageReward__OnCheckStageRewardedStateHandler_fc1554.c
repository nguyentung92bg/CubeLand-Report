/* IL2CPP: Rotatelab.MetaProgressionStageReward$$OnCheckStageRewardedStateHandler
void Rotatelab_MetaProgressionStageReward__OnCheckStageRewardedStateHandler (Rotatelab_MetaProgressionStageReward_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.MetaProgressionStageReward$$OnCheckStageRewardedStateHandler
   void Rotatelab_MetaProgressionStageReward__OnCheckStageRewardedStateHandler
   (Rotatelab_MetaProgressionStageReward_o* __this, const MethodInfo* method); */

void Rotatelab_MetaProgressionStageReward__OnCheckStageRewardedStateHandler_fc1554(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  char *pcVar4;
  int iVar5;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  int *piVar6;
  undefined4 unaff_lr;
  
  pcVar4 = (char *)(_UNK_00fd12fc + 0xfd1140);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd1300 + 0xfd1154));
    *pcVar4 = '\x01';
  }
  piVar6 = *(int **)(_UNK_00fd1304 + 0xfd1168);
  iVar5 = *(int *)(param_1 + 0x18);
  if (*(int *)(*piVar6 + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar1 = Rotatelab_Scripts_LevelManager__get_LevelNumber_1065d14(0);
  iVar2 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(uVar1,0);
  if (*(int *)(param_1 + 0x44) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = 0x24;
  if (iVar2 < *(int *)(*(int *)(param_1 + 0x44) + 8)) {
    iVar3 = 0x28;
  }
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_UI_Image__set_sprite_37167cc(iVar5,*(undefined4 *)(param_1 + iVar3),0);
  iVar5 = *(int *)(param_1 + 0x1c);
  if (*(int *)(*piVar6 + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar1 = Rotatelab_Scripts_LevelManager__get_LevelNumber_1065d14(0);
  iVar2 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(uVar1,0);
  if (*(int *)(param_1 + 0x44) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = 0x24;
  if (iVar2 < *(int *)(*(int *)(param_1 + 0x44) + 8)) {
    iVar3 = 0x28;
  }
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_UI_Image__set_sprite_37167cc(iVar5,*(undefined4 *)(param_1 + iVar3),0);
  iVar5 = *(int *)(param_1 + 0x20);
  if (*(int *)(*piVar6 + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar1 = Rotatelab_Scripts_LevelManager__get_LevelNumber_1065d14(0);
  iVar2 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(uVar1,0);
  if (*(int *)(param_1 + 0x44) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar5,*(int *)(*(int *)(param_1 + 0x44) + 8) <= iVar2,0)
  ;
  iVar2 = *(int *)(param_1 + 0x3c);
  uVar1 = Rotatelab_Scripts_LevelManager__get_LevelNumber_1065d14(0);
  iVar5 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(uVar1,0);
  if (*(int *)(param_1 + 0x44) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar1 = 0x3f000000;
  if (iVar5 < *(int *)(*(int *)(param_1 + 0x44) + 8)) {
    uVar1 = 0x3f800000;
  }
  pcVar4 = (char *)(_UNK_039b37ec + 0x39b3770);
  if (*pcVar4 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_039b37f0 + 0x39b3784),uVar1,0,extraout_r3,unaff_r4,
                       unaff_r5,unaff_r6,unaff_lr);
    *pcVar4 = '\x01';
  }
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar5 = *(int *)(iVar2 + 8);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048(iVar2,0);
  }
  UNRECOVERED_JUMPTABLE = *(code **)(_UNK_039b37f4 + 0x39b37bc);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(_UNK_039b37f8 + 0x39b37cc);
    *(code **)(_UNK_039b37fc + 0x39b37dc) = UNRECOVERED_JUMPTABLE;
  }
                    /* WARNING: Could not recover jumptable at 0x039b37e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(iVar5,uVar1);
  return;
}

