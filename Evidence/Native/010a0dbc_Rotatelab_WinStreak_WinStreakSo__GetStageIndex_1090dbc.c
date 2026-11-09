/* IL2CPP: Rotatelab.WinStreak.WinStreakSo$$GetStageIndex
int32_t Rotatelab_WinStreak_WinStreakSo__GetStageIndex (Rotatelab_WinStreak_WinStreakSo_o* __this, int32_t level, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.WinStreak.WinStreakSo$$GetStageIndex
   int32_t Rotatelab_WinStreak_WinStreakSo__GetStageIndex (Rotatelab_WinStreak_WinStreakSo_o*
   __this, int32_t level, const MethodInfo* method); */

int Rotatelab_WinStreak_WinStreakSo__GetStageIndex_1090dbc(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  if (*(int *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = *(int *)(*(int *)(param_1 + 0xc) + 0xc) + 3;
  while( true ) {
    iVar2 = iVar3;
    if ((int)(iVar2 - 4U) < 0) {
      return 0;
    }
    iVar3 = *(int *)(param_1 + 0xc);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(uint *)(iVar3 + 0xc) <= iVar2 - 4U) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f07924();
    }
    iVar1 = *(int *)(iVar3 + iVar2 * 4);
    if (iVar1 == 0) break;
    iVar3 = iVar2 + -1;
    if (*(int *)(iVar1 + 8) <= param_2) {
      return iVar2 + -3;
    }
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

