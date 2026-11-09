/* IL2CPP: Rotatelab.Scripts.LevelStateManager$$get_IsPaused
bool Rotatelab_Scripts_LevelStateManager__get_IsPaused (Rotatelab_Scripts_LevelStateManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.LevelStateManager$$get_IsPaused
   bool Rotatelab_Scripts_LevelStateManager__get_IsPaused (Rotatelab_Scripts_LevelStateManager_o*
   __this, const MethodInfo* method); */

bool Rotatelab_Scripts_LevelStateManager__get_IsPaused_100e3e4(int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_0101e438 + 0x101e3f8);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0101e43c + 0x101e40c));
    *pcVar1 = '\x01';
  }
  if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  return 0 < *(int *)(*(int *)(param_1 + 0x1c) + 0xc);
}

