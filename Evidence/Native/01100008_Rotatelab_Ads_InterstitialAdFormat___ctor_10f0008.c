/* IL2CPP: Rotatelab.Ads.InterstitialAdFormat$$.ctor
void Rotatelab_Ads_InterstitialAdFormat___ctor (Rotatelab_Ads_InterstitialAdFormat_o* __this, System_String_o* adUnitId, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Ads.InterstitialAdFormat$$.ctor
   void Rotatelab_Ads_InterstitialAdFormat___ctor (Rotatelab_Ads_InterstitialAdFormat_o* __this,
   System_String_o* adUnitId, const MethodInfo* method); */

void Rotatelab_Ads_InterstitialAdFormat___ctor_10f0008(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar6;
  undefined4 *puVar7;
  
  pcVar6 = (char *)(_UNK_01100330 + 0x1100020);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01100334 + 0x1100034));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01100338 + 0x1100040));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110033c + 0x110004c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01100340 + 0x1100058));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01100344 + 0x1100064));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01100348 + 0x1100070));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110034c + 0x110007c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01100350 + 0x1100088));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01100354 + 0x1100094));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01100358 + 0x11000a0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110035c + 0x11000ac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01100360 + 0x11000b8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01100364 + 0x11000c4));
    *pcVar6 = '\x01';
  }
  *(undefined4 *)(param_1 + 0x2c) = 0xff800000;
  System_Object___ctor_2bb93bc(param_1,0);
  *(undefined4 *)(param_1 + 0x14) = param_2;
  thunk_FUN_00ec5080((undefined4 *)(param_1 + 0x14),param_2);
  puVar7 = *(undefined4 **)(_UNK_01100368 + 0x1100100);
  uVar1 = thunk_FUN_00f00cdc(*puVar7);
  System_Action_object__object____ctor_1f18fcc
            (uVar1,param_1,**(undefined4 **)(_UNK_0110036c + 0x110011c),0);
  MaxSdkCallbacks_Interstitial__add_OnAdLoadedEvent_29b6aec(uVar1,0);
  uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01100370 + 0x110013c));
  System_Action_object__object____ctor_1f18fcc
            (uVar1,param_1,**(undefined4 **)(_UNK_01100374 + 0x1100158),0);
  MaxSdkCallbacks_Interstitial__add_OnAdLoadFailedEvent_29b6d3c(uVar1,0);
  uVar1 = thunk_FUN_00f00cdc(*puVar7);
  System_Action_object__object____ctor_1f18fcc
            (uVar1,param_1,**(undefined4 **)(_UNK_01100378 + 0x110018c),0);
  MaxSdkCallbacks_Interstitial__add_OnAdClickedEvent_29b73cc(uVar1,0);
  uVar1 = thunk_FUN_00f00cdc(*puVar7);
  System_Action_object__object____ctor_1f18fcc
            (uVar1,param_1,**(undefined4 **)(_UNK_0110037c + 0x11001c0),0);
  MaxSdkCallbacks_Interstitial__add_OnAdDisplayedEvent_29b6f6c(uVar1,0);
  uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01100380 + 0x11001e0));
  System_Action_object__object__object____ctor_1f1af9c
            (uVar1,param_1,**(undefined4 **)(_UNK_01100384 + 0x11001fc),0);
  MaxSdkCallbacks_Interstitial__add_OnAdDisplayFailedEvent_29b719c(uVar1,0);
  uVar1 = thunk_FUN_00f00cdc(*puVar7);
  System_Action_object__object____ctor_1f18fcc
            (uVar1,param_1,**(undefined4 **)(_UNK_01100388 + 0x1100230),0);
  MaxSdkCallbacks_Interstitial__add_OnAdHiddenEvent_29b7a5c(uVar1,0);
  uVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0110038c + 0x1100250));
  System_Action_object__object__object____ctor_1f1af9c
            (uVar1,param_1,**(undefined4 **)(_UNK_01100390 + 0x110026c),0);
  MaxSdkCallbacks_Interstitial__add_OnExpiredAdReloadedEvent_29b782c(uVar1,0);
  puVar7 = *(undefined4 **)(_UNK_01100394 + 0x110028c);
  iVar2 = Rotatelab_SingletonScriptableObject_object___get_Instance_1a9a0a8(*puVar7);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar1 = *puVar7;
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(iVar2 + 0x3c);
  iVar2 = Rotatelab_SingletonScriptableObject_object___get_Instance_1a9a0a8(uVar1);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar1 = *puVar7;
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(iVar2 + 0x38);
  iVar2 = Rotatelab_SingletonScriptableObject_object___get_Instance_1a9a0a8(uVar1);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(char *)(iVar2 + 0x40) == '\0') {
    return;
  }
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_01100398 + 0x11002f8));
  iVar3 = Rotatelab_Ads_InterstitialAdFormat__ShowAfterCooldownCoroutine_10f039c(param_1);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (iVar3 == 0) {
    thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614354 + 0x36142e0),0,0);
    uVar5 = thunk_FUN_00f00cdc();
    uVar1 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614358 + 0x36142f4));
    System_NullReferenceException___ctor_2b721e8(uVar5,uVar1,0);
  }
  else {
    iVar4 = UnityEngine_MonoBehaviour__IsObjectMonoBehaviour_3603fcc();
    if (iVar4 != 0) {
      pcVar6 = (char *)(iRam036143f4 + 0x3614380);
      if (*pcVar6 == '\0') {
        thunk_FUN_00ec37c0(*(undefined4 *)(iRam036143f8 + 0x3614394));
        *pcVar6 = '\x01';
      }
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar2 = *(int *)(iVar2 + 8);
      if (iVar2 != 0) {
        UNRECOVERED_JUMPTABLE = *(code **)(iRam036143fc + 0x36143c0);
        if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
          UNRECOVERED_JUMPTABLE = (code *)thunk_FUN_00ec3774(iRam03614400 + 0x36143d0);
          *(code **)(iRam03614404 + 0x36143e0) = UNRECOVERED_JUMPTABLE;
        }
                    /* WARNING: Could not recover jumptable at 0x036143ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*UNRECOVERED_JUMPTABLE)(iVar2,iVar3);
        return;
      }
                    /* WARNING: Subroutine does not return */
      UnityEngine_Bindings_ThrowHelper__ThrowNullReferenceException_35fa048();
    }
    thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614360 + 0x3614314));
    uVar5 = thunk_FUN_00f00cdc();
    uVar1 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam03614364 + 0x3614328));
    System_ArgumentException___ctor_2b113a4(uVar5,uVar1,0);
  }
  uVar1 = thunk_FUN_00f23fd0(*(undefined4 *)(iRam0361435c + 0x3614344));
  FUN_01f4fe28(uVar5,uVar1);
                    /* WARNING: Subroutine does not return */
  FUN_01f4fe2c();
}

