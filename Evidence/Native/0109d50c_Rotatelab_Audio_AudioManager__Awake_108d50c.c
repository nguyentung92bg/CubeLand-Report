/* IL2CPP: Rotatelab.Audio.AudioManager$$Awake
void Rotatelab_Audio_AudioManager__Awake (Rotatelab_Audio_AudioManager_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Audio.AudioManager$$Awake
   void Rotatelab_Audio_AudioManager__Awake (Rotatelab_Audio_AudioManager_o* __this, const
   MethodInfo* method); */

void Rotatelab_Audio_AudioManager__Awake_108d50c(int param_1)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  char *pcVar2;
  int iVar3;
  int *piVar4;
  undefined4 unaff_r6;
  int *piVar5;
  undefined4 unaff_lr;
  
  pcVar2 = (char *)(_UNK_0109d6e8 + 0x109d520);
  if (*pcVar2 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109d6ec + 0x109d534));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109d6f0 + 0x109d540));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109d6f4 + 0x109d54c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0109d6f8 + 0x109d558));
    *pcVar2 = '\x01';
  }
  Rotatelab_SingletonBehaviour_object___Awake_1a999f0
            (param_1,**(undefined4 **)(_UNK_0109d6fc + 0x109d56c));
  if (0 < *(int *)(param_1 + 0x20)) {
    iVar3 = 0;
    do {
      uVar1 = Rotatelab_Audio_AudioManager__CreateAudioSource_108d70c();
      Rotatelab_Audio_AudioManager__RecycleAudioSource_108d8b8(param_1,uVar1);
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 0x20));
  }
  iVar3 = Rotatelab_Audio_AudioManager__CreateAudioSource_108d70c();
  piVar4 = (int *)(param_1 + 0x38);
  *piVar4 = iVar3;
  thunk_FUN_00ec5080(piVar4,iVar3);
  if (*piVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = UnityEngine_Component__get_gameObject_35fe360(*piVar4,0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Object__set_name_360832c(iVar3,**(undefined4 **)(_UNK_0109d700 + 0x109d5f8),0);
  if (*piVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = UnityEngine_Component__get_gameObject_35fe360(*piVar4,0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = UnityEngine_GameObject__AddComponent_object__1490548
                    (iVar3,**(undefined4 **)(_UNK_0109d704 + 0x109d638));
  piVar5 = (int *)(param_1 + 0x3c);
  *piVar5 = iVar3;
  thunk_FUN_00ec5080(piVar5,iVar3);
  if (*piVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Behaviour__set_enabled_35fd7dc(*piVar5,0,0);
  if (*piVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = UnityEngine_Component__get_gameObject_35fe360(*piVar4,0);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = UnityEngine_GameObject__AddComponent_object__1490548
                    (iVar3,**(undefined4 **)(_UNK_0109d708 + 0x109d6ac));
  piVar4 = (int *)(param_1 + 0x40);
  *piVar4 = iVar3;
  thunk_FUN_00ec5080(piVar4,iVar3);
  iVar3 = *piVar4;
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar2 = (char *)(iRam0360d868 + 0x360d7f4);
  if (*pcVar2 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(iRam0360d86c + 0x360d808),0,0,extraout_r3,unaff_r4,unaff_r5,
                       unaff_r6,unaff_lr);
    *pcVar2 = '\x01';
  }
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = *(int *)(iVar3 + 8);
  if (iVar3 != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(iRam0360d870 + 0x360d834);
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(iRam0360d874 + 0x360d844);
      *(code **)(iRam0360d878 + 0x360d854) = UNRECOVERED_JUMPTABLE;
    }
                    /* WARNING: Could not recover jumptable at 0x0360d860. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(iVar3,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048();
}

