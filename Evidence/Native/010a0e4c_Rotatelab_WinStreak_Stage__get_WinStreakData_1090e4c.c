/* IL2CPP: Rotatelab.WinStreak.Stage$$get_WinStreakData
Rotatelab_WinStreak_WinStreakSo_o* Rotatelab_WinStreak_Stage__get_WinStreakData (Rotatelab_WinStreak_Stage_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.WinStreak.Stage$$get_WinStreakData
   Rotatelab_WinStreak_WinStreakSo_o* Rotatelab_WinStreak_Stage__get_WinStreakData
   (Rotatelab_WinStreak_Stage_o* __this, const MethodInfo* method); */

undefined4 Rotatelab_WinStreak_Stage__get_WinStreakData_1090e4c(void)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_010a0ea0 + 0x10a0e5c);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a0ea4 + 0x10a0e70));
    *pcVar2 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_010a0ea8 + 0x10a0e84));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  return *(undefined4 *)(iVar1 + 0x10);
}

