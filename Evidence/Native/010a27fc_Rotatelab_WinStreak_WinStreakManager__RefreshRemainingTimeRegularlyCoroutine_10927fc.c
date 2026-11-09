/* IL2CPP: Rotatelab.WinStreak.WinStreakManager$$RefreshRemainingTimeRegularlyCoroutine
System_Collections_IEnumerator_o* Rotatelab_WinStreak_WinStreakManager__RefreshRemainingTimeRegularlyCoroutine (Rotatelab_WinStreak_WinStreakManager_o* __this, System_DateTime_o endTime, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.WinStreak.WinStreakManager$$RefreshRemainingTimeRegularlyCoroutine
   System_Collections_IEnumerator_o*
   Rotatelab_WinStreak_WinStreakManager__RefreshRemainingTimeRegularlyCoroutine
   (Rotatelab_WinStreak_WinStreakManager_o* __this, System_DateTime_o endTime, const MethodInfo*
   method); */

int Rotatelab_WinStreak_WinStreakManager__RefreshRemainingTimeRegularlyCoroutine_10927fc
              (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  char *pcVar2;
  
  pcVar2 = (char *)(_UNK_010a2878 + 0x10a2818);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010a287c + 0x10a282c));
    *pcVar2 = '\x01';
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010a2880 + 0x10a2840));
  System_Object___ctor_2bb93bc(iVar1,0);
  *(undefined4 *)(iVar1 + 0x10) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  thunk_FUN_00ec5080((undefined4 *)(iVar1 + 0x10),param_1);
  *(undefined4 *)(iVar1 + 0x18) = param_3;
  *(undefined4 *)(iVar1 + 0x1c) = param_4;
  return iVar1;
}

