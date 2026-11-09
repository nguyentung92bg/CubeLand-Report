/* IL2CPP: Rotatelab.Audio.AudioManager$$RecycleAudioSource
void Rotatelab_Audio_AudioManager__RecycleAudioSource (Rotatelab_Audio_AudioManager_o* __this, UnityEngine_AudioSource_o* instance, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Audio.AudioManager$$RecycleAudioSource
   void Rotatelab_Audio_AudioManager__RecycleAudioSource (Rotatelab_Audio_AudioManager_o* __this,
   UnityEngine_AudioSource_o* instance, const MethodInfo* method); */

void Rotatelab_Audio_AudioManager__RecycleAudioSource_108d8b8(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  
  pcVar3 = (char *)(_UNK_0109d9b8 + 0x109d8d0);
  if (*pcVar3 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109d9bc + 0x109d8e4));
    *pcVar3 = '\x01';
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_AudioSource__Stop_3599b40(param_2,0);
  UnityEngine_AudioSource__set_clip_35998b0(param_2,0,0);
  UnityEngine_AudioSource__set_volume_35996b0(param_2,0x3f800000,0);
  iVar1 = UnityEngine_Component__get_gameObject_35fe360(param_2,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_GameObject__SetActive_3602038(iVar1,0,0);
  iVar1 = *(int *)(param_1 + 0x34);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar5 = *(int *)(iVar1 + 8);
  uVar4 = *(uint *)(iVar1 + 0xc);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar4 < *(uint *)(iVar5 + 0xc)) {
    piVar2 = (int *)(iVar5 + uVar4 * 4 + 0x10);
    *piVar2 = param_2;
    thunk_FUN_00ec5080(piVar2,param_2);
    *(uint *)(iVar1 + 0xc) = uVar4 + 1;
    *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
    return;
  }
  piVar2 = (int *)(iVar1 + 8);
  if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(*piVar2 + 0xc) == 0) {
    iVar5 = 4;
  }
  else {
    if (*piVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar5 = *(int *)(*piVar2 + 0xc) << 1;
  }
  System_Array__Resize_object__138a144
            (piVar2,iVar5,
             *(undefined4 *)
              (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(**(int **)(_UNK_0109d9c0 + 0x109d9ac) +
                                                           0x10) + 0x60) + 0x34) + 0x10) + 0x60) +
              0x38));
  iVar5 = *(int *)(iVar1 + 8);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(uint *)(iVar5 + 0xc) <= *(uint *)(iVar1 + 0xc)) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar2 = (int *)(iVar5 + *(uint *)(iVar1 + 0xc) * 4 + 0x10);
  *piVar2 = param_2;
  thunk_FUN_00ec5080(piVar2,param_2);
  *(int *)(iVar1 + 0xc) = *(int *)(iVar1 + 0xc) + 1;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  return;
}

