/* IL2CPP: Rotatelab.Audio.AudioManager$$GetAudioSource
UnityEngine_AudioSource_o* Rotatelab_Audio_AudioManager__GetAudioSource (Rotatelab_Audio_AudioManager_o* __this, bool is3D, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Audio.AudioManager$$GetAudioSource
   UnityEngine_AudioSource_o* Rotatelab_Audio_AudioManager__GetAudioSource
   (Rotatelab_Audio_AudioManager_o* __this, bool is3D, const MethodInfo* method); */

int Rotatelab_Audio_AudioManager__GetAudioSource_108dae0(int param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  int iStack_14;
  
  pcVar2 = (char *)(_UNK_0109dbdc + 0x109dafc);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109dbe0 + 0x109db10));
    *pcVar2 = '\x01';
  }
  iStack_14 = 0;
  if (*(int *)(param_1 + 0x34) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = System_Collections_Generic_Stack_object___TryPop_1b04e74
                    (*(int *)(param_1 + 0x34),&iStack_14,
                     **(undefined4 **)(_UNK_0109dbe4 + 0x109db40));
  if (iVar1 == 0) {
    iStack_14 = Rotatelab_Audio_AudioManager__CreateAudioSource_108d70c();
  }
  else {
    if (iStack_14 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = UnityEngine_Component__get_gameObject_35fe360(iStack_14,0);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    UnityEngine_GameObject__SetActive_3602038(iVar1,1,0);
  }
  if (iStack_14 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar3 = _UNK_0109dbd8;
  if (param_2 != 0) {
    uVar3 = 0x3f800000;
  }
  UnityEngine_AudioSource__set_spatialBlend_3599e2c(iStack_14,uVar3,0);
  return iStack_14;
}

