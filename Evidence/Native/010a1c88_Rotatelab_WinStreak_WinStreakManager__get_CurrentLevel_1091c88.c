/* IL2CPP: Rotatelab.WinStreak.WinStreakManager$$get_CurrentLevel
int32_t* Rotatelab_WinStreak_WinStreakManager__get_CurrentLevel (const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.WinStreak.WinStreakManager$$get_CurrentLevel
   int32_t* Rotatelab_WinStreak_WinStreakManager__get_CurrentLevel (const MethodInfo* method); */

int Rotatelab_WinStreak_WinStreakManager__get_CurrentLevel_1091c88(void)

{
  int iVar1;
  
  iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  return iVar1 + 0xa0;
}

