/* IL2CPP: Rotatelab.UI.VideoPlayerLifecycleGuard$$OnApplicationPause
void Rotatelab_UI_VideoPlayerLifecycleGuard__OnApplicationPause (Rotatelab_UI_VideoPlayerLifecycleGuard_o* __this, bool paused, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.UI.VideoPlayerLifecycleGuard$$OnApplicationPause
   void Rotatelab_UI_VideoPlayerLifecycleGuard__OnApplicationPause
   (Rotatelab_UI_VideoPlayerLifecycleGuard_o* __this, bool paused, const MethodInfo* method); */

void Rotatelab_UI_VideoPlayerLifecycleGuard__OnApplicationPause_112e39c(int param_1,int param_2)

{
  int iVar1;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  char *pcVar2;
  int iVar3;
  undefined4 unaff_r5;
  
  if (param_2 == 0) {
    if (*(char *)(param_1 + 0x14) != '\0') {
      iVar1 = UnityEngine_Behaviour__get_isActiveAndEnabled_35fd8d0(param_1,0);
      if (iVar1 == 0) {
        return;
      }
      if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      UnityEngine_Video_VideoPlayer__Play_39eb9e4(*(int *)(param_1 + 0x10),0);
      *(undefined1 *)(param_1 + 0x14) = 0;
    }
  }
  else {
    if (*(int *)(param_1 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar1 = UnityEngine_Video_VideoPlayer__get_isPlaying_39ebbbc(*(int *)(param_1 + 0x10),0);
    *(char *)(param_1 + 0x14) = (char)iVar1;
    if (iVar1 != 0) {
      iVar1 = *(int *)(param_1 + 0x10);
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      pcVar2 = (char *)(_UNK_039fbb5c + 0x39fbae4);
      if (*pcVar2 == '\0') {
        thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_039fbb60 + 0x39fbaf8),0,extraout_r2,extraout_r3,
                           unaff_r4,unaff_r5);
        *pcVar2 = '\x01';
      }
      if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar3 = *(int *)(iVar1 + 8);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048(iVar1,0);
      }
      UNRECOVERED_JUMPTABLE = *(code **)(_UNK_039fbb64 + 0x39fbb30);
      if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
        UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(_UNK_039fbb68 + 0x39fbb40);
        *(code **)(_UNK_039fbb6c + 0x39fbb50) = UNRECOVERED_JUMPTABLE;
      }
                    /* WARNING: Could not recover jumptable at 0x039fbb58. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*UNRECOVERED_JUMPTABLE)(iVar3);
      return;
    }
  }
  return;
}

