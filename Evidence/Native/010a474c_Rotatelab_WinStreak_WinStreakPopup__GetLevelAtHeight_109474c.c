/* IL2CPP: Rotatelab.WinStreak.WinStreakPopup$$GetLevelAtHeight
int32_t Rotatelab_WinStreak_WinStreakPopup__GetLevelAtHeight (Rotatelab_WinStreak_WinStreakPopup_o* __this, float height, Rotatelab_WinStreak_Stage_o** stage, float* stageProgress, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.WinStreak.WinStreakPopup$$GetLevelAtHeight
   int32_t Rotatelab_WinStreak_WinStreakPopup__GetLevelAtHeight
   (Rotatelab_WinStreak_WinStreakPopup_o* __this, float height, Rotatelab_WinStreak_Stage_o** stage,
   float* stageProgress, const MethodInfo* method); */

int Rotatelab_WinStreak_WinStreakPopup__GetLevelAtHeight_109474c
              (int param_1,float param_2,int *param_3,float *param_4)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;
  uint in_fpscr;
  uint uVar4;
  float fVar5;
  uint uVar6;
  float fVar7;
  
  if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = *(int *)(*(int *)(param_1 + 0x20) + 0x10);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = UnityEngine_RectOffset__get_bottom_35baf54(iVar3,0);
  fVar1 = _UNK_010a48e0;
  fVar7 = 1.0;
  fVar5 = (float)VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
  param_2 = (1.0 - fVar5) + param_2;
  fVar5 = param_2 / *(float *)(param_1 + 0x2c);
  uVar4 = in_fpscr & 0xfffffff | (uint)(fVar5 == _UNK_010a48e0) << 0x1e;
  uVar6 = (uint)fVar5;
  if (SUB41(uVar4 >> 0x1e,0)) {
    uVar6 = 0x80000000;
  }
  if (*(int *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = *(int *)(param_1 + 0x28);
  if ((int)uVar6 < *(int *)(*(int *)(param_1 + 0x28) + 0xc)) {
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar3 + 0xc) <= uVar6) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    *param_3 = *(int *)(iVar3 + uVar6 * 4 + 0x10);
    thunk_FUN_00ec5080(param_3);
    fVar7 = (float)VectorSignedToFloat(uVar6,(byte)(uVar4 >> 0x16) & 3);
    fVar7 = param_2 / *(float *)(param_1 + 0x2c) - fVar7;
  }
  else {
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar3 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    *param_3 = *(int *)(iVar3 + (*(int *)(iVar3 + 0xc) + -1) * 4 + 0x10);
    thunk_FUN_00ec5080(param_3);
  }
  iVar3 = *param_3;
  *param_4 = fVar7;
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = Rotatelab_WinStreak_Stage__get_FirstLevel_1090f60(iVar3);
  if (*param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = *(int *)(*param_3 + 0x40);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  fVar7 = (float)VectorSignedToFloat(uVar2,(byte)(uVar4 >> 0x16) & 3);
  fVar5 = (float)VectorSignedToFloat(*(undefined4 *)(iVar3 + 8),(byte)(uVar4 >> 0x16) & 3);
  fVar7 = fVar7 + *param_4 * (fVar5 - fVar7);
  iVar3 = (int)fVar7;
  if (fVar7 == fVar1) {
    iVar3 = -0x80000000;
  }
  return iVar3;
}

