/* IL2CPP: Rotatelab.WinStreak.WinStreakPopup$$GetLevelHeight
float Rotatelab_WinStreak_WinStreakPopup__GetLevelHeight (Rotatelab_WinStreak_WinStreakPopup_o* __this, int32_t level, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.WinStreak.WinStreakPopup$$GetLevelHeight
   float Rotatelab_WinStreak_WinStreakPopup__GetLevelHeight (Rotatelab_WinStreak_WinStreakPopup_o*
   __this, int32_t level, const MethodInfo* method); */

float Rotatelab_WinStreak_WinStreakPopup__GetLevelHeight_1094490(int param_1,int param_2)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  if (*(int *)(param_1 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = *(int *)(*(int *)(param_1 + 0x20) + 0x10);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = UnityEngine_RectOffset__get_bottom_35baf54(iVar4,0);
  iVar4 = 4;
  fVar9 = (float)VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
  while( true ) {
    if (*(int *)(param_1 + 0x28) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar5 = iVar4 - 4;
    if (*(int *)(*(int *)(param_1 + 0x28) + 0xc) <= (int)uVar5) {
      return fVar9;
    }
    iVar3 = *(int *)(param_1 + 0x28);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar3 + 0xc) <= uVar5) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar3 = *(int *)(iVar3 + iVar4 * 4);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = *(int *)(iVar3 + 0x40);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    fVar10 = *(float *)(param_1 + 0x2c);
    if (param_2 <= *(int *)(iVar3 + 8)) break;
    fVar9 = fVar9 + fVar10;
    iVar4 = iVar4 + 1;
  }
  iVar3 = *(int *)(param_1 + 0x28);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(uint *)(iVar3 + 0xc) <= uVar5) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  iVar3 = *(int *)(iVar3 + iVar4 * 4);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = Rotatelab_WinStreak_Stage__get_FirstLevel_1090f60(iVar3);
  iVar3 = *(int *)(param_1 + 0x28);
  if (iVar3 != 0) {
    if (*(uint *)(iVar3 + 0xc) <= uVar5) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar4 = *(int *)(iVar3 + iVar4 * 4);
    if (iVar4 != 0) {
      iVar4 = *(int *)(iVar4 + 0x40);
      if (iVar4 != 0) {
        fVar6 = (float)VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
        fVar7 = (float)VectorSignedToFloat(*(undefined4 *)(iVar4 + 8),(byte)(in_fpscr >> 0x16) & 3);
        uVar5 = in_fpscr & 0xfffffff | (uint)(fVar6 == fVar7) << 0x1e;
        fVar8 = _UNK_010a4638;
        if (!SUB41(uVar5 >> 0x1e,0)) {
          fVar8 = (float)VectorSignedToFloat(param_2,(byte)(uVar5 >> 0x16) & 3);
          fVar8 = (fVar8 - fVar6) / (fVar7 - fVar6);
          bVar1 = fVar8 < 0.0;
          if (1.0 < fVar8) {
            fVar8 = 1.0;
          }
          if (bVar1) {
            fVar8 = _UNK_010a4638;
          }
        }
        return fVar9 + fVar10 * fVar8;
      }
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

