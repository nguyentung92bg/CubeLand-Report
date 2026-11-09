/* IL2CPP: Rotatelab.Audio.AudioLibrary$$GetSoundByType
Rotatelab_Audio_AudioGroup_o* Rotatelab_Audio_AudioLibrary__GetSoundByType (Rotatelab_Audio_AudioLibrary_o* __this, int32_t soundType, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Audio.AudioLibrary$$GetSoundByType
   Rotatelab_Audio_AudioGroup_o* Rotatelab_Audio_AudioLibrary__GetSoundByType
   (Rotatelab_Audio_AudioLibrary_o* __this, int32_t soundType, const MethodInfo* method); */

undefined4 Rotatelab_Audio_AudioLibrary__GetSoundByType_108cea0(int param_1,uint param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(uint *)(iVar1 + 0xc) <= param_2) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  return *(undefined4 *)(iVar1 + param_2 * 4 + 0x10);
}

