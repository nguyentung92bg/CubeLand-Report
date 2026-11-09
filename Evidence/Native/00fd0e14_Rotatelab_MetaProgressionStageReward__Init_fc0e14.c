/* IL2CPP: Rotatelab.MetaProgressionStageReward$$Init
void Rotatelab_MetaProgressionStageReward__Init (Rotatelab_MetaProgressionStageReward_o* __this, MetaProgressionSo_MetaProgressData_o* data, int32_t dividerCount, int32_t stageIndex, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.MetaProgressionStageReward$$Init
   void Rotatelab_MetaProgressionStageReward__Init (Rotatelab_MetaProgressionStageReward_o* __this,
   MetaProgressionSo_MetaProgressData_o* data, int32_t dividerCount, int32_t stageIndex, const
   MethodInfo* method); */

void Rotatelab_MetaProgressionStageReward__Init_fc0e14
               (int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  int *piVar4;
  char *pcVar5;
  int iVar6;
  undefined4 uVar7;
  
  uVar7 = 0;
  Rotatelab_MetaProgressionBaseStage__Init_fbb7dc(param_1);
  *(int *)(param_1 + 0x44) = param_2;
  thunk_FUN_00ec5080((int *)(param_1 + 0x44),param_2);
  piVar4 = *(int **)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x48) = param_4;
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar1 = System_Int32__ToString_2b6b9ec(param_2 + 8,0);
  if (piVar4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UNRECOVERED_JUMPTABLE = *(code **)(*piVar4 + 0x2b0);
  (*UNRECOVERED_JUMPTABLE)
            (piVar4,uVar1,*(undefined4 *)(*piVar4 + 0x2b4),UNRECOVERED_JUMPTABLE,uVar7);
  Rotatelab_MetaProgressionStageReward__SetRewards_fc0eac(param_1);
  pcVar5 = (char *)(_UNK_00fd12fc + 0xfd1140);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fd1300 + 0xfd1154));
    *pcVar5 = '\x01';
  }
  piVar4 = *(int **)(_UNK_00fd1304 + 0xfd1168);
  iVar6 = *(int *)(param_1 + 0x18);
  if (*(int *)(*piVar4 + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar7 = Rotatelab_Scripts_LevelManager__get_LevelNumber_1065d14(0);
  iVar2 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(uVar7,0);
  if (*(int *)(param_1 + 0x44) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = 0x24;
  if (iVar2 < *(int *)(*(int *)(param_1 + 0x44) + 8)) {
    iVar3 = 0x28;
  }
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_UI_Image__set_sprite_37167cc(iVar6,*(undefined4 *)(param_1 + iVar3),0);
  iVar6 = *(int *)(param_1 + 0x1c);
  if (*(int *)(*piVar4 + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar7 = Rotatelab_Scripts_LevelManager__get_LevelNumber_1065d14(0);
  iVar2 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(uVar7,0);
  if (*(int *)(param_1 + 0x44) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = 0x24;
  if (iVar2 < *(int *)(*(int *)(param_1 + 0x44) + 8)) {
    iVar3 = 0x28;
  }
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_UI_Image__set_sprite_37167cc(iVar6,*(undefined4 *)(param_1 + iVar3),0);
  iVar6 = *(int *)(param_1 + 0x20);
  if (*(int *)(*piVar4 + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar7 = Rotatelab_Scripts_LevelManager__get_LevelNumber_1065d14(0);
  iVar2 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(uVar7,0);
  if (*(int *)(param_1 + 0x44) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar6,*(int *)(*(int *)(param_1 + 0x44) + 8) <= iVar2,0)
  ;
  iVar2 = *(int *)(param_1 + 0x3c);
  uVar7 = Rotatelab_Scripts_LevelManager__get_LevelNumber_1065d14(0);
  iVar6 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(uVar7,0);
  if (*(int *)(param_1 + 0x44) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar7 = 0x3f000000;
  if (iVar6 < *(int *)(*(int *)(param_1 + 0x44) + 8)) {
    uVar7 = 0x3f800000;
  }
  pcVar5 = (char *)(_UNK_039b37ec + 0x39b3770);
  if (*pcVar5 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_039b37f0 + 0x39b3784),uVar7,0);
    *pcVar5 = '\x01';
  }
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar6 = *(int *)(iVar2 + 8);
  if (iVar6 == 0) {
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
  (*UNRECOVERED_JUMPTABLE)(iVar6,uVar7);
  return;
}

