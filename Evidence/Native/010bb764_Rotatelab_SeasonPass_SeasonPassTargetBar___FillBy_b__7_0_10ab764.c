/* IL2CPP: Rotatelab.SeasonPass.SeasonPassTargetBar$$<FillBy>b__7_0
void Rotatelab_SeasonPass_SeasonPassTargetBar___FillBy_b__7_0 (Rotatelab_SeasonPass_SeasonPassTargetBar_o* __this, float v, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.SeasonPass.SeasonPassTargetBar$$<FillBy>b__7_0
   void Rotatelab_SeasonPass_SeasonPassTargetBar___FillBy_b__7_0
   (Rotatelab_SeasonPass_SeasonPassTargetBar_o* __this, float v, const MethodInfo* method); */

void Rotatelab_SeasonPass_SeasonPassTargetBar___FillBy_b__7_0_10ab764(int param_1,float param_2)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  int iVar6;
  float fVar7;
  int iStack_30;
  int iStack_2c;
  
  pcVar4 = (char *)(_UNK_010bb890 + 0x10bb784);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010bb894 + 0x10bb798));
    *pcVar4 = '\x01';
  }
  piVar5 = *(int **)(param_1 + 0x24);
  if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(*piVar5 + 0x238))(piVar5,param_2,*(undefined4 *)(*piVar5 + 0x23c));
  fVar1 = _UNK_010bb88c;
  iStack_2c = (int)param_2;
  piVar5 = *(int **)(param_1 + 0x18);
  iVar6 = *(int *)(_UNK_010bb898 + 0x10bb7ec);
  if (param_2 == _UNK_010bb88c) {
    iStack_2c = -0x80000000;
  }
  uVar2 = FUN_00ec393c(*(undefined4 *)(iVar6 + 0x24),&iStack_2c);
  if (*(int *)(param_1 + 0x24) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  fVar7 = *(float *)(*(int *)(param_1 + 0x24) + 0xc4);
  iStack_30 = (int)fVar7;
  if (fVar7 == fVar1) {
    iStack_30 = -0x80000000;
  }
  uVar3 = FUN_00ec393c(*(undefined4 *)(iVar6 + 0x24),&iStack_30);
  uVar2 = System_String__Format_2a0c264(**(undefined4 **)(_UNK_010bb89c + 0x10bb854),uVar2,uVar3,0);
  if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  (**(code **)(*piVar5 + 0x2b0))(piVar5,uVar2,*(undefined4 *)(*piVar5 + 0x2b4));
  return;
}

