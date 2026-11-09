/* IL2CPP: Rotatelab.Audio.AudioManager$$CreateAudioSource
UnityEngine_AudioSource_o* Rotatelab_Audio_AudioManager__CreateAudioSource (Rotatelab_Audio_AudioManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Audio.AudioManager$$CreateAudioSource
   UnityEngine_AudioSource_o* Rotatelab_Audio_AudioManager__CreateAudioSource
   (Rotatelab_Audio_AudioManager_o* __this, const MethodInfo* method); */

int Rotatelab_Audio_AudioManager__CreateAudioSource_108d70c(void)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  
  pcVar4 = (char *)(_UNK_0109d888 + 0x109d71c);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109d88c + 0x109d730));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109d890 + 0x109d73c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109d894 + 0x109d748));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109d898 + 0x109d754));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109d89c + 0x109d760));
    *pcVar4 = '\x01';
  }
  piVar1 = (int *)FUN_00ec388c(**(undefined4 **)(_UNK_0109d8a0 + 0x109d778),1);
  uVar5 = **(undefined4 **)(_UNK_0109d8a8 + 0x109d798);
  if (*(int *)(*(int *)(*(int *)(_UNK_0109d8a4 + 0x109d78c) + 0x70) + 0x74) == 0) {
    FUN_00ec3934();
  }
  iVar2 = System_Type__GetTypeFromHandle_2b80928(uVar5,0);
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if ((iVar2 != 0) &&
     (iVar3 = thunk_FUN_00f00bc8(iVar2,*(undefined4 *)(*piVar1 + 0x20)), iVar3 == 0)) {
    uVar5 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar5,0);
  }
  if (piVar1[3] == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar1[4] = iVar2;
  thunk_FUN_00ec5080(piVar1 + 4,iVar2);
  iVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0109d8ac + 0x109d81c));
  UnityEngine_GameObject___ctor_3602844(iVar2,**(undefined4 **)(_UNK_0109d8b0 + 0x109d838),piVar1,0)
  ;
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = UnityEngine_GameObject__GetComponent_object__14905dc
                    (iVar2,**(undefined4 **)(_UNK_0109d8b4 + 0x109d858));
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_AudioSource__set_rolloffMode_3599f28(iVar2,2,0);
  return iVar2;
}

