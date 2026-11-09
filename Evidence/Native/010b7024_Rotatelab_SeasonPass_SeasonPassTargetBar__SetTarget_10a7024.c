/* IL2CPP: Rotatelab.SeasonPass.SeasonPassTargetBar$$SetTarget
void Rotatelab_SeasonPass_SeasonPassTargetBar__SetTarget (Rotatelab_SeasonPass_SeasonPassTargetBar_o* __this, int32_t max, int32_t currentValue, bool isBonusBank, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SeasonPass.SeasonPassTargetBar$$SetTarget
   void Rotatelab_SeasonPass_SeasonPassTargetBar__SetTarget
   (Rotatelab_SeasonPass_SeasonPassTargetBar_o* __this, int32_t max, int32_t currentValue, bool
   isBonusBank, const MethodInfo* method); */

void Rotatelab_SeasonPass_SeasonPassTargetBar__SetTarget_10a7024
               (int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  int iVar6;
  int *piVar7;
  uint in_fpscr;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  pcVar4 = (char *)(_UNK_010b723c + 0x10b7044);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b7240 + 0x10b705c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010b7244 + 0x10b7068));
    *pcVar4 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010b7248 + 0x10b707c));
  piVar7 = *(int **)(param_1 + 0x14);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar5 = *(int **)(iVar1 + 0x34);
  if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = (**(code **)(*piVar5 + 0xd8))(piVar5,*(undefined4 *)(*piVar5 + 0xdc));
  if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(*piVar7 + 0x2b0))(piVar7,uVar2,*(undefined4 *)(*piVar7 + 0x2b4));
  if (*(int *)(param_1 + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_UI_Slider__set_minValue_39c2514(*(int *)(param_1 + 0x24),0,0);
  if (*(int *)(param_1 + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
  UnityEngine_UI_Slider__set_maxValue_39c25a4(*(int *)(param_1 + 0x24),uVar2,0);
  piVar7 = *(int **)(param_1 + 0x24);
  if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
  (**(code **)(*piVar7 + 0x238))(piVar7,uVar2,*(undefined4 *)(*piVar7 + 0x23c));
  piVar7 = *(int **)(param_1 + 0x18);
  iVar6 = *(int *)(_UNK_010b724c + 0x10b716c);
  uStack_28 = param_3;
  uVar2 = FUN_00ec393c(*(undefined4 *)(iVar6 + 0x24),&uStack_28);
  uStack_2c = param_2;
  uVar3 = FUN_00ec393c(*(undefined4 *)(iVar6 + 0x24),&uStack_2c);
  uVar2 = System_String__Format_2a0c264(**(undefined4 **)(_UNK_010b7250 + 0x10b71a0),uVar2,uVar3,0);
  if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(*piVar7 + 0x2b0))(piVar7,uVar2,*(undefined4 *)(*piVar7 + 0x2b4));
  if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(*(int *)(param_1 + 0x1c),param_4,0);
  piVar7 = *(int **)(param_1 + 0x20);
  if (*(int *)(iVar1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = System_Int32__ToString_2b6b9ec(*(int *)(iVar1 + 0x20) + 0x18,0);
  if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(*piVar7 + 0x2b0))(piVar7,uVar2,*(undefined4 *)(*piVar7 + 0x2b4));
  return;
}

