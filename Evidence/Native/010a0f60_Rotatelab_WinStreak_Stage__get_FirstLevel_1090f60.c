/* IL2CPP: Rotatelab.WinStreak.Stage$$get_FirstLevel
int32_t Rotatelab_WinStreak_Stage__get_FirstLevel (Rotatelab_WinStreak_Stage_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.WinStreak.Stage$$get_FirstLevel
   int32_t Rotatelab_WinStreak_Stage__get_FirstLevel (Rotatelab_WinStreak_Stage_o* __this, const
   MethodInfo* method); */

undefined4 Rotatelab_WinStreak_Stage__get_FirstLevel_1090f60(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = Rotatelab_WinStreak_Stage__get_Index_1090ebc();
  if (iVar1 < 1) {
    return 0;
  }
  iVar1 = Rotatelab_WinStreak_Stage__get_WinStreakData_1090e4c();
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = *(int *)(iVar1 + 0xc);
  iVar1 = Rotatelab_WinStreak_Stage__get_Index_1090ebc(param_1);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(uint *)(iVar2 + 0xc) <= iVar1 - 1U) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  iVar1 = *(int *)(iVar2 + (iVar1 - 1U) * 4 + 0x10);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  return *(undefined4 *)(iVar1 + 8);
}

