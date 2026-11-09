/* IL2CPP: Rotatelab.Scripts.LevelManager$$LoadLevelOverridesAsync
Cysharp_Threading_Tasks_UniTaskVoid_o Rotatelab_Scripts_LevelManager__LoadLevelOverridesAsync (Rotatelab_Scripts_LevelManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Scripts.LevelManager$$LoadLevelOverridesAsync
   Cysharp_Threading_Tasks_UniTaskVoid_o Rotatelab_Scripts_LevelManager__LoadLevelOverridesAsync
   (Rotatelab_Scripts_LevelManager_o* __this, const MethodInfo* method); */

void Rotatelab_Scripts_LevelManager__LoadLevelOverridesAsync_106832c(int param_1)

{
  char *pcVar1;
  
  pcVar1 = (char *)(_UNK_010783a8 + 0x1078344);
  if (*pcVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010783ac + 0x1078358));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010783b0 + 0x1078364));
    *pcVar1 = '\x01';
  }
  Rotatelab_Scripts_LevelManager__LoadRemoteLevelsAsync_object__14aeabc
            (param_1,*(undefined4 *)(param_1 + 0x24),*(undefined4 *)(param_1 + 0x28),
             **(undefined4 **)(_UNK_010783b4 + 0x1078378),
             **(undefined4 **)(_UNK_010783b4 + 0x1078378),
             **(undefined4 **)(_UNK_010783b8 + 0x1078384));
  return;
}

