/* IL2CPP: Rotatelab.SeasonPass.SeasonPassBonusBank$$SetTarget
void Rotatelab_SeasonPass_SeasonPassBonusBank__SetTarget (Rotatelab_SeasonPass_SeasonPassBonusBank_o* __this, int32_t max, int32_t currentValue, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SeasonPass.SeasonPassBonusBank$$SetTarget
   void Rotatelab_SeasonPass_SeasonPassBonusBank__SetTarget
   (Rotatelab_SeasonPass_SeasonPassBonusBank_o* __this, int32_t max, int32_t currentValue, const
   MethodInfo* method); */

void Rotatelab_SeasonPass_SeasonPassBonusBank__SetTarget_109fe6c
               (int param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  char *pcVar2;
  int *piVar3;
  int iVar4;
  uint in_fpscr;
  undefined4 uVar5;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  pcVar2 = (char *)(_UNK_010aff9c + 0x10afe8c);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010affa0 + 0x10afea0));
    *pcVar2 = '\x01';
  }
  if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_UI_Slider__set_minValue_39c2514(*(int *)(param_1 + 0x14),0,0);
  if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar5 = VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x16) & 3);
  UnityEngine_UI_Slider__set_maxValue_39c25a4(*(int *)(param_1 + 0x14),uVar5,0);
  piVar3 = *(int **)(param_1 + 0x14);
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar5 = VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x16) & 3);
  (**(code **)(*piVar3 + 0x238))(piVar3,uVar5,*(undefined4 *)(*piVar3 + 0x23c));
  piVar3 = *(int **)(param_1 + 0x18);
  iVar4 = *(int *)(_UNK_010affa4 + 0x10aff34);
  uStack_1c = param_3;
  uVar5 = FUN_00ec393c(*(undefined4 *)(iVar4 + 0x24),&uStack_1c);
  uStack_20 = param_2;
  uVar1 = FUN_00ec393c(*(undefined4 *)(iVar4 + 0x24),&uStack_20);
  uVar5 = System_String__Format_2a0c264(**(undefined4 **)(_UNK_010affa8 + 0x10aff68),uVar5,uVar1,0);
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(*piVar3 + 0x2b0))(piVar3,uVar5,*(undefined4 *)(*piVar3 + 0x2b4));
  return;
}

