/* IL2CPP: Rotatelab.CustomRotateEventsController.<Start>d__25$$MoveNext
bool Rotatelab_CustomRotateEventsController__Start_d__25__MoveNext (Rotatelab_CustomRotateEventsController__Start_d__25_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CustomRotateEventsController.<Start>d__25$$MoveNext
   bool Rotatelab_CustomRotateEventsController__Start_d__25__MoveNext
   (Rotatelab_CustomRotateEventsController__Start_d__25_o* __this, const MethodInfo* method); */

bool Rotatelab_CustomRotateEventsController__Start_d__25__MoveNext_fd98fc(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  char *pcVar4;
  int *piVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  int iVar10;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  pcVar4 = (char *)(_UNK_00fea1c0 + 0xfe991c);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fea1c4 + 0xfe9930));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fea1c8 + 0xfe993c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fea1cc + 0xfe9948));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fea1d0 + 0xfe9954));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fea1d4 + 0xfe9960));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fea1d8 + 0xfe996c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fea1dc + 0xfe9978));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fea1e0 + 0xfe9984));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fea1e4 + 0xfe9990));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fea1e8 + 0xfe999c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fea1ec + 0xfe99a8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fea1f0 + 0xfe99b4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fea1f4 + 0xfe99c0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fea1f8 + 0xfe99cc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fea1fc + 0xfe99d8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fea200 + 0xfe99e4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fea204 + 0xfe99f0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fea208 + 0xfe99fc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fea20c + 0xfe9a08));
    *pcVar4 = '\x01';
  }
  iVar9 = *(int *)(param_1 + 8);
  iVar10 = *(int *)(param_1 + 0x10);
  if (iVar9 == 0) {
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    iVar2 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    puVar7 = *(undefined4 **)(_UNK_00fea218 + 0xfe9af4);
    *(undefined4 *)(iVar10 + 0x30) = *(undefined4 *)(iVar2 + 0xe0);
    iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar7);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    piVar6 = (int *)(iVar2 + 0x20);
    iVar2 = *piVar6;
    uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fea21c + 0xfe9b18));
    System_Action___ctor_2b10bac(uVar3,iVar10,**(undefined4 **)(_UNK_00fea220 + 0xfe9b3c),0);
    piVar5 = (int *)System_Delegate__Combine_2bbca94(iVar2,uVar3,0);
    if (piVar5 == (int *)0x0) {
      *piVar6 = 0;
      piVar5 = (int *)0x0;
    }
    else {
      iVar10 = **(int **)(_UNK_00fea224 + 0xfe9b6c);
      if (*piVar5 != iVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_00ec3e28(piVar5);
      }
      *piVar6 = (int)piVar5;
      if (*piVar5 != iVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_00ec3e28(piVar5);
      }
    }
    thunk_FUN_00ec5080(piVar6,piVar5);
    iVar10 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                       (**(undefined4 **)(_UNK_00fea228 + 0xfea170));
    if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar3 = Rotatelab_Ads_AdManager__WaitForInitializationCoroutine_10f63e8(iVar10,0);
    *(undefined4 *)(param_1 + 0xc) = uVar3;
    thunk_FUN_00ec5080((undefined4 *)(param_1 + 0xc),uVar3);
    *(undefined4 *)(param_1 + 8) = 1;
  }
  else if (iVar9 == 1) {
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    puVar7 = *(undefined4 **)(_UNK_00fea210 + 0xfe9a40);
    piVar5 = *(int **)(_UNK_00fea214 + 0xfe9a48);
    while( true ) {
      if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(iVar10 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(*(int *)(iVar10 + 0x20) + 0x14) < 1) break;
      if (*(int *)(iVar10 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      System_Collections_Generic_Queue_ValueTuple_object__object____Dequeue_18f97f0
                (&uStack_38,*(int *)(iVar10 + 0x20),*puVar7);
      uVar1 = uStack_34;
      uVar3 = uStack_38;
      if (*(int *)(*piVar5 + 0x74) == 0) {
        FUN_00ec3934();
      }
      MaxSdkAndroid__TrackEvent_29b1698(uVar3,uVar1,0);
    }
    puVar7 = *(undefined4 **)(_UNK_00fea22c + 0xfe9b98);
    iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar7);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar2 + 0x44) != 0) {
      iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar7);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar2 = *(int *)(iVar2 + 0x44);
      uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fea230 + 0xfe9bdc));
      System_Action_object__object____ctor_1f18fcc
                (uVar3,iVar10,**(undefined4 **)(_UNK_00fea234 + 0xfe9bfc),0);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_Ads_AdFormat__add_AdClickedEvent_10edc18(iVar2,uVar3,0);
    }
    iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar7);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar2 + 0x48) != 0) {
      iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar7);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      puVar8 = *(undefined4 **)(_UNK_00fea238 + 0xfe9c68);
      iVar2 = *(int *)(iVar2 + 0x48);
      uVar3 = thunk_FUN_00f00cdc(*puVar8);
      System_Action_object__object____ctor_1f18fcc
                (uVar3,iVar10,**(undefined4 **)(_UNK_00fea23c + 0xfe9c88),0);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_Ads_AdFormat__add_AdClickedEvent_10edc18(iVar2,uVar3,0);
      iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar7);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar2 = *(int *)(iVar2 + 0x48);
      uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fea240 + 0xfe9cd0));
      System_Action_object__object____ctor_1f18fcc
                (uVar3,iVar10,**(undefined4 **)(_UNK_00fea244 + 0xfe9cf0),0);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_Ads_InterstitialAdFormat__add_AdDisplayFailedEvent_10ef9fc(iVar2,uVar3,0);
      iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar7);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar2 = *(int *)(iVar2 + 0x48);
      uVar3 = thunk_FUN_00f00cdc(*puVar8);
      System_Action_object__object____ctor_1f18fcc
                (uVar3,iVar10,**(undefined4 **)(_UNK_00fea248 + 0xfe9d50),0);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_Ads_InterstitialAdFormat__add_AdDisplayedEvent_10ef89c(iVar2,uVar3,0);
      iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar7);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar2 = *(int *)(iVar2 + 0x48);
      uVar3 = thunk_FUN_00f00cdc(*puVar8);
      System_Action_object__object____ctor_1f18fcc
                (uVar3,iVar10,**(undefined4 **)(_UNK_00fea24c + 0xfe9db0),0);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_Ads_AdFormat__add_AdLoadedEvent_10edab8(iVar2,uVar3,0);
      iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar7);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar2 = *(int *)(iVar2 + 0x48);
      uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fea250 + 0xfe9df8));
      System_Action_object__object__bool____ctor_1f1acec
                (uVar3,iVar10,**(undefined4 **)(_UNK_00fea254 + 0xfe9e18),0);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_Ads_InterstitialAdFormat__add_AdFilledEvent_10efc9c(iVar2,uVar3,0);
    }
    iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar7);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar2 + 0x4c) != 0) {
      iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar7);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      puVar8 = *(undefined4 **)(_UNK_00fea258 + 0xfe9e84);
      iVar2 = *(int *)(iVar2 + 0x4c);
      uVar3 = thunk_FUN_00f00cdc(*puVar8);
      System_Action_object__object____ctor_1f18fcc
                (uVar3,iVar10,**(undefined4 **)(_UNK_00fea25c + 0xfe9ea4),0);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_Ads_AdFormat__add_AdClickedEvent_10edc18(iVar2,uVar3,0);
      iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar7);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar2 = *(int *)(iVar2 + 0x4c);
      uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fea260 + 0xfe9eec));
      System_Action_object__object____ctor_1f18fcc
                (uVar3,iVar10,**(undefined4 **)(_UNK_00fea264 + 0xfe9f0c),0);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_Ads_RewardedAdFormat__add_AdDisplayFailedEvent_10f3a40(iVar2,uVar3,0);
      iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar7);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar2 = *(int *)(iVar2 + 0x4c);
      uVar3 = thunk_FUN_00f00cdc(*puVar8);
      System_Action_object__object____ctor_1f18fcc
                (uVar3,iVar10,**(undefined4 **)(_UNK_00fea268 + 0xfe9f6c),0);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_Ads_RewardedAdFormat__add_AdDisplayedEvent_10f38e0(iVar2,uVar3,0);
      iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar7);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar2 = *(int *)(iVar2 + 0x4c);
      uVar3 = thunk_FUN_00f00cdc(*puVar8);
      System_Action_object__object____ctor_1f18fcc
                (uVar3,iVar10,**(undefined4 **)(_UNK_00fea26c + 0xfe9fcc),0);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_Ads_AdFormat__add_AdLoadedEvent_10edab8(iVar2,uVar3,0);
    }
    iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar7);
    uVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fea270 + 0xfea008));
    System_Action_AdManager_NeftaSession____ctor_1f144e0
              (uVar3,iVar10,**(undefined4 **)(_UNK_00fea274 + 0xfea024),0);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Ads_AdManager__add_OnNeftaSessionResolved_10f57d8(iVar2,uVar3,0);
    iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar7);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = Rotatelab_Ads_AdManager__get_IsEnabled_10f5748(iVar2,0);
    if (iVar2 != 0) {
      puVar7 = *(undefined4 **)(_UNK_00fea278 + 0xfea080);
      uVar3 = thunk_FUN_00f00cdc(*puVar7);
      puVar8 = *(undefined4 **)(_UNK_00fea27c + 0xfea09c);
      System_Action_object__object____ctor_1f18fcc(uVar3,iVar10,*puVar8,0);
      MaxSdkCallbacks_Banner__add_OnAdRevenuePaidEvent_29b970c(uVar3,0);
      uVar3 = thunk_FUN_00f00cdc(*puVar7);
      System_Action_object__object____ctor_1f18fcc(uVar3,iVar10,*puVar8,0);
      MaxSdkCallbacks_Interstitial__add_OnAdRevenuePaidEvent_29b75fc(uVar3,0);
      uVar3 = thunk_FUN_00f00cdc(*puVar7);
      System_Action_object__object____ctor_1f18fcc(uVar3,iVar10,*puVar8,0);
      MaxSdkCallbacks_Rewarded__add_OnAdRevenuePaidEvent_29b879c(uVar3,0);
      uVar3 = thunk_FUN_00f00cdc(*puVar7);
      System_Action_object__object____ctor_1f18fcc(uVar3,iVar10,*puVar8,0);
      MaxSdkCallbacks_MRec__add_OnAdRevenuePaidEvent_29b9d9c(uVar3,0);
    }
  }
  return iVar9 == 0;
}

