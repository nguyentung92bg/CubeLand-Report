/* IL2CPP: Rotatelab.Audio.AudioManager$$GetVoxelBreakGroup
Rotatelab_Audio_VoxelBreakAudioGroup_o* Rotatelab_Audio_AudioManager__GetVoxelBreakGroup (Rotatelab_Audio_AudioManager_o* __this, int32_t soundType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Audio.AudioManager$$GetVoxelBreakGroup
   Rotatelab_Audio_VoxelBreakAudioGroup_o* Rotatelab_Audio_AudioManager__GetVoxelBreakGroup
   (Rotatelab_Audio_AudioManager_o* __this, int32_t soundType, const MethodInfo* method); */

int * Rotatelab_Audio_AudioManager__GetVoxelBreakGroup_108d404(int param_1,undefined4 param_2)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(_UNK_0109d4a8 + 0x109d41c);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109d4ac + 0x109d430));
    *pcVar4 = '\x01';
  }
  if (*(int *)(param_1 + 0x1c) != 0) {
    piVar1 = (int *)Rotatelab_Audio_AudioLibrary__GetSoundByType_108cea0
                              (*(int *)(param_1 + 0x1c),param_2);
    piVar3 = (int *)0x0;
    if (piVar1 != (int *)0x0) {
      uVar2 = (uint)*(byte *)(**(int **)(_UNK_0109d4b0 + 0x109d46c) + 0xb8);
      if ((*(byte *)(*piVar1 + 0xb8) < uVar2) ||
         (piVar3 = piVar1,
         *(int *)(*(int *)(*piVar1 + 100) + uVar2 * 4 + -4) != **(int **)(_UNK_0109d4b0 + 0x109d46c)
         )) {
                    /* WARNING: Subroutine does not return */
        FUN_00ec3e28();
      }
    }
    return piVar3;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

