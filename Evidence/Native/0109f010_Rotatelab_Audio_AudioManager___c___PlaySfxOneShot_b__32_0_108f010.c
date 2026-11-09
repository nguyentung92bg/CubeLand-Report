/* IL2CPP: Rotatelab.Audio.AudioManager.<>c$$<PlaySfxOneShot>b__32_0
void Rotatelab_Audio_AudioManager___c___PlaySfxOneShot_b__32_0 (Rotatelab_Audio_AudioManager___c_o* __this, Rotatelab_Audio_AudioManager_OneShotData_o* data, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Audio.AudioManager.<>c$$<PlaySfxOneShot>b__32_0
   void Rotatelab_Audio_AudioManager___c___PlaySfxOneShot_b__32_0
   (Rotatelab_Audio_AudioManager___c_o* __this, Rotatelab_Audio_AudioManager_OneShotData_o* data,
   const MethodInfo* method); */

void Rotatelab_Audio_AudioManager___c___PlaySfxOneShot_b__32_0_108f010
               (undefined4 param_1,int param_2)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  undefined4 *puVar4;
  char *pcVar5;
  
  pcVar5 = (char *)(_UNK_0109f0a4 + 0x109f024);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109f0a8 + 0x109f038));
    *pcVar5 = '\x01';
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = *(int *)(param_2 + 0xc) + -1;
  *(int *)(param_2 + 0xc) = iVar3;
  if (iVar3 != 0) {
    return;
  }
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0109f0ac + 0x109f068));
  puVar4 = (undefined4 *)(param_2 + 8);
  if (iVar3 != 0) {
    Rotatelab_Audio_AudioManager__RecycleAudioSource_108d8b8(iVar3,*puVar4);
    *puVar4 = 0;
    if (*(int *)(_UNK_00f30580 + 0xf30540) != 0) {
      puVar2 = (uint *)(_UNK_00f30584 + ((uint)puVar4 >> 0x11) * 4 + 0xf547cc);
      do {
        bVar1 = (bool)hasExclusiveAccess(puVar2);
      } while (!bVar1);
      *puVar2 = *puVar2 | 1 << (((uint)puVar4 & 0x1ffff) >> 0xc);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  thunk_FUN_00f078d4();
}

