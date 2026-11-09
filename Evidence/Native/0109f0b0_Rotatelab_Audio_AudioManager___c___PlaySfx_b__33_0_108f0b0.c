/* IL2CPP: Rotatelab.Audio.AudioManager.<>c$$<PlaySfx>b__33_0
void Rotatelab_Audio_AudioManager___c___PlaySfx_b__33_0 (Rotatelab_Audio_AudioManager___c_o* __this, UnityEngine_AudioSource_o* instance, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Audio.AudioManager.<>c$$<PlaySfx>b__33_0
   void Rotatelab_Audio_AudioManager___c___PlaySfx_b__33_0 (Rotatelab_Audio_AudioManager___c_o*
   __this, UnityEngine_AudioSource_o* instance, const MethodInfo* method); */

void Rotatelab_Audio_AudioManager___c___PlaySfx_b__33_0_108f0b0(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  char *pcVar4;
  uint uVar5;
  
  pcVar4 = (char *)(_UNK_0109f110 + 0x109f0c4);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109f114 + 0x109f0d8));
    *pcVar4 = '\x01';
  }
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_0109f118 + 0x109f0ec));
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar4 = (char *)(_UNK_0109d9b8 + 0x109d8d0);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109d9bc + 0x109d8e4));
    *pcVar4 = '\x01';
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
  iVar2 = *(int *)(iVar2 + 0x34);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(iVar2 + 8);
  uVar5 = *(uint *)(iVar2 + 0xc);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar5 < *(uint *)(iVar1 + 0xc)) {
    piVar3 = (int *)(iVar1 + uVar5 * 4 + 0x10);
    *piVar3 = param_2;
    thunk_FUN_00ec5080(piVar3,param_2);
    *(uint *)(iVar2 + 0xc) = uVar5 + 1;
    *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
    return;
  }
  piVar3 = (int *)(iVar2 + 8);
  if (*piVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(*piVar3 + 0xc) == 0) {
    iVar1 = 4;
  }
  else {
    if (*piVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = *(int *)(*piVar3 + 0xc) << 1;
  }
  System_Array__Resize_object__138a144
            (piVar3,iVar1,
             *(undefined4 *)
              (*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(**(int **)(_UNK_0109d9c0 + 0x109d9ac) +
                                                           0x10) + 0x60) + 0x34) + 0x10) + 0x60) +
              0x38));
  iVar1 = *(int *)(iVar2 + 8);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(uint *)(iVar1 + 0xc) <= *(uint *)(iVar2 + 0xc)) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar3 = (int *)(iVar1 + *(uint *)(iVar2 + 0xc) * 4 + 0x10);
  *piVar3 = param_2;
  thunk_FUN_00ec5080(piVar3,param_2);
  *(int *)(iVar2 + 0xc) = *(int *)(iVar2 + 0xc) + 1;
  *(int *)(iVar2 + 0x10) = *(int *)(iVar2 + 0x10) + 1;
  return;
}

