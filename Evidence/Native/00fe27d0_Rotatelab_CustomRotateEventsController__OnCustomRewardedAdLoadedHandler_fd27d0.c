/* IL2CPP: Rotatelab.CustomRotateEventsController$$OnCustomRewardedAdLoadedHandler
void Rotatelab_CustomRotateEventsController__OnCustomRewardedAdLoadedHandler (Rotatelab_CustomRotateEventsController_o* __this, System_String_o* adUnitId, MaxSdkBase_AdInfo_o* adInfo, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CustomRotateEventsController$$OnCustomRewardedAdLoadedHandler
   void Rotatelab_CustomRotateEventsController__OnCustomRewardedAdLoadedHandler
   (Rotatelab_CustomRotateEventsController_o* __this, System_String_o* adUnitId,
   MaxSdkBase_AdInfo_o* adInfo, const MethodInfo* method); */

void Rotatelab_CustomRotateEventsController__OnCustomRewardedAdLoadedHandler_fd27d0
               (undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined8 uStack_18;
  
  pcVar3 = (char *)(_UNK_00fe288c + 0xfe27e8);
  cVar1 = *pcVar3;
  if (cVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe2890 + 0xfe27fc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe2894 + 0xfe2808));
    cVar1 = '\x01';
    *pcVar3 = '\x01';
  }
  Rotatelab_CustomRotateEventsController__SendSessionAdLoaded_fd2310(cVar1,param_3);
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uStack_18 = *(undefined8 *)(param_3 + 0x20);
  uVar2 = FUN_00ec393c(*(undefined4 *)(*(int *)(_UNK_00fe2898 + 0xfe2838) + 0x40),&uStack_18);
  uVar2 = System_String__Format_29ffb6c(**(undefined4 **)(_UNK_00fe289c + 0xfe2854),uVar2,0);
  if (*(int *)(**(int **)(_UNK_00fe28a0 + 0xfe2868) + 0x74) == 0) {
    FUN_00ec3934();
  }
  UnityEngine_Debug__Log_35b1c44(uVar2,0);
  return;
}

