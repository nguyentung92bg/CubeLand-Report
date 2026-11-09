/* IL2CPP: Rotatelab.Audio.AudioManager$$OnWinSequenceStartedHandler
void Rotatelab_Audio_AudioManager__OnWinSequenceStartedHandler (Rotatelab_Audio_AudioManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Audio.AudioManager$$OnWinSequenceStartedHandler
   void Rotatelab_Audio_AudioManager__OnWinSequenceStartedHandler (Rotatelab_Audio_AudioManager_o*
   __this, const MethodInfo* method); */

void Rotatelab_Audio_AudioManager__OnWinSequenceStartedHandler_108d334(undefined4 param_1)

{
  int iVar1;
  char *pcVar2;
  int *piVar3;
  
  pcVar2 = (char *)(_UNK_0109d3f0 + 0x109d348);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109d3f4 + 0x109d35c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109d3f8 + 0x109d368));
    *pcVar2 = '\x01';
  }
  piVar3 = *(int **)(_UNK_0109d3fc + 0x109d37c);
  iVar1 = *piVar3;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar3;
  }
  iVar1 = Rotatelab_Save_SavedValue_bool___op_Implicit_1a8b15c
                    (**(undefined4 **)(iVar1 + 0x5c),**(undefined4 **)(_UNK_0109d400 + 0x109d3a0));
  if (iVar1 == 0) {
    return;
  }
  iVar1 = Rotatelab_Audio_AudioManager__GetVoxelBreakGroup_108d404(param_1,0xc);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(undefined1 *)(iVar1 + 0x54) = 1;
  *(float *)(iVar1 + 0x58) = (*(float *)(iVar1 + 0x1c) + *(float *)(iVar1 + 0x20)) * 0.5;
  return;
}

