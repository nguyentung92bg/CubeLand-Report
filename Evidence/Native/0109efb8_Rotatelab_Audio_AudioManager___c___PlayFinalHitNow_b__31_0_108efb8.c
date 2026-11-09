/* IL2CPP: Rotatelab.Audio.AudioManager.<>c$$<PlayFinalHitNow>b__31_0
void Rotatelab_Audio_AudioManager___c___PlayFinalHitNow_b__31_0 (Rotatelab_Audio_AudioManager___c_o* __this, Rotatelab_Audio_AudioManager_o* this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: Rotatelab.Audio.AudioManager.<>c$$<PlayFinalHitNow>b__31_0
   void Rotatelab_Audio_AudioManager___c___PlayFinalHitNow_b__31_0
   (Rotatelab_Audio_AudioManager___c_o* __this, Rotatelab_Audio_AudioManager_o* this, const
   MethodInfo* method); */

void Rotatelab_Audio_AudioManager___c___PlayFinalHitNow_b__31_0_108efb8
               (undefined4 param_1,int param_2)

{
  code *UNRECOVERED_JUMPTABLE;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  int iVar1;
  undefined4 unaff_r5;
  char *pcVar2;
  
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(param_2 + 0x3c) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  UnityEngine_Behaviour__set_enabled_35fd7dc(*(int *)(param_2 + 0x3c),0,0);
  iVar1 = *(int *)(param_2 + 0x40);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  pcVar2 = (char *)(iRam0360d868 + 0x360d7f4);
  if (*pcVar2 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(iRam0360d86c + 0x360d808),0,0,extraout_r3,unaff_r4,unaff_r5);
    *pcVar2 = '\x01';
  }
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = *(int *)(iVar1 + 8);
  if (iVar1 != 0) {
    UNRECOVERED_JUMPTABLE = *(code **)(iRam0360d870 + 0x360d834);
    if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
      UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(iRam0360d874 + 0x360d844);
      *(code **)(iRam0360d878 + 0x360d854) = UNRECOVERED_JUMPTABLE;
    }
                    /* WARNING: Could not recover jumptable at 0x0360d860. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(iVar1,0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048();
}

