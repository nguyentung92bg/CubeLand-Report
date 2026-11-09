/* IL2CPP: Rotatelab.CustomRotateEventsController$$OnCustomInterAdLoadedHandler
void Rotatelab_CustomRotateEventsController__OnCustomInterAdLoadedHandler (Rotatelab_CustomRotateEventsController_o* __this, System_String_o* adUnitId, MaxSdkBase_AdInfo_o* adInfo, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CustomRotateEventsController$$OnCustomInterAdLoadedHandler
   void Rotatelab_CustomRotateEventsController__OnCustomInterAdLoadedHandler
   (Rotatelab_CustomRotateEventsController_o* __this, System_String_o* adUnitId,
   MaxSdkBase_AdInfo_o* adInfo, const MethodInfo* method); */

void Rotatelab_CustomRotateEventsController__OnCustomInterAdLoadedHandler_fd223c
               (undefined4 param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined8 uStack_18;
  
  pcVar3 = (char *)(_UNK_00fe22f8 + 0xfe2254);
  cVar1 = *pcVar3;
  if (cVar1 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe22fc + 0xfe2268));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe2300 + 0xfe2274));
    cVar1 = '\x01';
    *pcVar3 = '\x01';
  }
  Rotatelab_CustomRotateEventsController__SendSessionAdLoaded_fd2310(cVar1,param_3);
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uStack_18 = *(undefined8 *)(param_3 + 0x20);
  uVar2 = FUN_00ec393c(*(undefined4 *)(*(int *)(_UNK_00fe2304 + 0xfe22a4) + 0x40),&uStack_18);
  uVar2 = System_String__Format_29ffb6c(**(undefined4 **)(_UNK_00fe2308 + 0xfe22c0),uVar2,0);
  if (*(int *)(**(int **)(_UNK_00fe230c + 0xfe22d4) + 0x74) == 0) {
    FUN_00ec3934();
  }
  UnityEngine_Debug__Log_35b1c44(uVar2,0);
  return;
}

