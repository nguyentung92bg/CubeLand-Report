/* IL2CPP: Rotatelab.Ads.AdManager.<InitializeNeftaCoroutine>d__49$$MoveNext
bool Rotatelab_Ads_AdManager__InitializeNeftaCoroutine_d__49__MoveNext (Rotatelab_Ads_AdManager__InitializeNeftaCoroutine_d__49_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Ads.AdManager.<InitializeNeftaCoroutine>d__49$$MoveNext
   bool Rotatelab_Ads_AdManager__InitializeNeftaCoroutine_d__49__MoveNext
   (Rotatelab_Ads_AdManager__InitializeNeftaCoroutine_d__49_o* __this, const MethodInfo* method); */

undefined4 Rotatelab_Ads_AdManager__InitializeNeftaCoroutine_d__49__MoveNext_10f7bd4(int param_1)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined4 uVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  undefined4 uStack_54;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined4 uStack_2c;
  
  pcVar6 = (char *)(_UNK_0110876c + 0x1107bf0);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_01108770 + 0x1107c04));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01108774 + 0x1107c10));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01108778 + 0x1107c1c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110877c + 0x1107c28));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01108780 + 0x1107c34));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01108784 + 0x1107c40));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01108788 + 0x1107c4c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110878c + 0x1107c58));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01108790 + 0x1107c64));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01108794 + 0x1107c70));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01108798 + 0x1107c7c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_0110879c + 0x1107c88));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011087a0 + 0x1107c94));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011087a4 + 0x1107ca0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011087a8 + 0x1107cac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011087ac + 0x1107cb8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011087b0 + 0x1107cc4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011087b4 + 0x1107cd0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011087b8 + 0x1107cdc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011087bc + 0x1107ce8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011087c0 + 0x1107cf4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011087c4 + 0x1107d00));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011087c8 + 0x1107d0c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011087cc + 0x1107d18));
    *pcVar6 = '\x01';
  }
  iVar2 = *(int *)(param_1 + 8);
  uVar7 = 0;
  iVar10 = *(int *)(param_1 + 0x10);
  uStack_2c = 0;
  if (iVar2 == 2) {
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (*(int *)(param_1 + 0x34) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(char *)(*(int *)(param_1 + 0x34) + 0xc) == '\0') {
      uStack_50 = CONCAT44(uStack_50._4_4_,0x41200000);
      uVar7 = FUN_00ec393c(*(undefined4 *)(*(int *)(_UNK_01108850 + 0x1107f8c) + 0x3c),&uStack_50);
      uVar11 = System_String__Format_29ffb6c(**(undefined4 **)(_UNK_01108854 + 0x1107fac),uVar7,0);
      if (*(int *)(**(int **)(_UNK_01108858 + 0x1107fc0) + 0x74) == 0) {
        FUN_00ec3934();
      }
      uVar7 = 0;
      UnityEngine_Debug__LogWarning_35b0090(uVar11,0);
      if (*(int *)(param_1 + 0x34) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_Ads_AdManager___c__DisplayClass49_0___InitializeNeftaCoroutine_g__StartFullscreenLoading_3_10f6ae8
                (*(int *)(param_1 + 0x34),2,**(undefined4 **)(_UNK_0110885c + 0x1108000),0xffffffff)
      ;
    }
  }
  else if (iVar2 == 1) {
    iVar2 = *(int *)(param_1 + 0x34);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar2 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar9 = *(int *)(param_1 + 0x34);
    *(undefined4 *)(iVar2 + 0x18) = *(undefined4 *)(*(int *)(iVar2 + 8) + 0xc);
    if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar9 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar2 = System_String__IsNullOrEmpty_2a0a844(*(undefined4 *)(*(int *)(iVar9 + 8) + 0x10),0);
    if (iVar2 == 0) {
      if (*(int *)(param_1 + 0x34) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar2 = *(int *)(*(int *)(param_1 + 0x34) + 8);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      puVar3 = (undefined4 *)(iVar2 + 0x10);
    }
    else {
      puVar3 = *(undefined4 **)(_UNK_011087e0 + 0x1107f54);
    }
    *(undefined4 *)(iVar9 + 0x1c) = *puVar3;
    thunk_FUN_00ec5080((undefined4 *)(iVar9 + 0x1c));
    iVar2 = *(int *)(param_1 + 0x34);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar2 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar9 = Rotatelab_Networking_SatoriFlag_object___get_HasRemoteValue_1a88c20
                      (*(int *)(iVar2 + 8),**(undefined4 **)(_UNK_011087e4 + 0x1108070));
    if (iVar9 == 0) {
      puVar3 = *(undefined4 **)(_UNK_011087e8 + 0x11080fc);
    }
    else {
      if (*(int *)(param_1 + 0x34) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      puVar3 = *(undefined4 **)(_UNK_011087ec + 0x11080a4);
      if (*(int *)(*(int *)(param_1 + 0x34) + 0x18) != 0) {
        if (*(int *)(param_1 + 0x34) == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        if (*(int *)(*(int *)(param_1 + 0x34) + 0x18) != 1) {
          if (*(int *)(param_1 + 0x34) == 0) {
                    /* WARNING: Subroutine does not return */
            thunk_FUN_00f078d4();
          }
          puVar3 = *(undefined4 **)(_UNK_011087f4 + 0x11080ec);
          if (*(int *)(*(int *)(param_1 + 0x34) + 0x18) == 2) {
            puVar3 = *(undefined4 **)(_UNK_011087f0 + 0x11080e4);
          }
        }
      }
    }
    *(undefined4 *)(iVar2 + 0x10) = *puVar3;
    thunk_FUN_00ec5080((undefined4 *)(iVar2 + 0x10));
    piVar8 = *(int **)(_UNK_011087f8 + 0x1108114);
    iVar2 = *piVar8;
    if (*(int *)(iVar2 + 0x74) == 0) {
      FUN_00ec3934();
      iVar2 = *piVar8;
    }
    if (*(char *)(*(int *)(iVar2 + 0x5c) + 0x78) != '\0') {
      piVar8 = (int *)FUN_00ec388c(**(undefined4 **)(_UNK_011087fc + 0x1108148),4);
      uVar7 = UnityEngine_Time__get_realtimeSinceStartup_360c80c(0);
      iVar9 = *(int *)(_UNK_01108800 + 0x1108168);
      uStack_50 = CONCAT44(uStack_50._4_4_,uVar7);
      iVar2 = FUN_00ec393c(*(undefined4 *)(iVar9 + 0x3c),&uStack_50);
      if (piVar8 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if ((iVar2 != 0) &&
         (iVar4 = thunk_FUN_00f00bc8(iVar2,*(undefined4 *)(*piVar8 + 0x20)), iVar4 == 0)) {
        uVar7 = thunk_FUN_00f08b98();
        func_0x00ec3920(uVar7,0);
      }
      if (piVar8[3] == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      piVar8[4] = iVar2;
      thunk_FUN_00ec5080(piVar8 + 4,iVar2);
      if (*(int *)(param_1 + 0x34) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uStack_54 = *(undefined4 *)(*(int *)(param_1 + 0x34) + 0x18);
      iVar2 = FUN_00ec393c(*(undefined4 *)(iVar9 + 0x24),&uStack_54);
      if ((iVar2 != 0) &&
         (iVar9 = thunk_FUN_00f00bc8(iVar2,*(undefined4 *)(*piVar8 + 0x20)), iVar9 == 0)) {
        uVar7 = thunk_FUN_00f08b98();
        func_0x00ec3920(uVar7,0);
      }
      if ((uint)piVar8[3] < 2) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      piVar8[5] = iVar2;
      thunk_FUN_00ec5080(piVar8 + 5,iVar2);
      if (*(int *)(param_1 + 0x34) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar2 = *(int *)(*(int *)(param_1 + 0x34) + 0x1c);
      if ((iVar2 != 0) &&
         (iVar9 = thunk_FUN_00f00bc8(iVar2,*(undefined4 *)(*piVar8 + 0x20)), iVar9 == 0)) {
        uVar7 = thunk_FUN_00f08b98();
        func_0x00ec3920(uVar7,0);
      }
      if ((uint)piVar8[3] < 3) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      piVar8[6] = iVar2;
      thunk_FUN_00ec5080(piVar8 + 6,iVar2);
      if (*(int *)(param_1 + 0x34) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      iVar2 = *(int *)(*(int *)(param_1 + 0x34) + 0x10);
      if ((iVar2 != 0) &&
         (iVar9 = thunk_FUN_00f00bc8(iVar2,*(undefined4 *)(*piVar8 + 0x20)), iVar9 == 0)) {
        uVar7 = thunk_FUN_00f08b98();
        func_0x00ec3920(uVar7,0);
      }
      if ((uint)piVar8[3] < 4) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      piVar8[7] = iVar2;
      thunk_FUN_00ec5080(piVar8 + 7,iVar2);
      uVar7 = System_String__Format_2a0c308(**(undefined4 **)(_UNK_01108804 + 0x1108318),piVar8,0);
      if (*(int *)(**(int **)(_UNK_01108808 + 0x110832c) + 0x74) == 0) {
        FUN_00ec3934();
      }
      UnityEngine_Debug__Log_35b1c44(uVar7,0);
    }
    iVar2 = *(int *)(param_1 + 0x34);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(iVar2 + 0x18) != 1) {
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(iVar2 + 0x18) != 2) {
        if (iVar2 != 0) {
          Rotatelab_Ads_AdManager___c__DisplayClass49_0___InitializeNeftaCoroutine_g__StartFullscreenLoading_3_10f6ae8
                    (iVar2,1,*(undefined4 *)(iVar2 + 0x10),0xffffffff);
          return 0;
        }
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
    }
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    piVar8 = *(int **)(_UNK_0110880c + 0x11083a8);
    iVar9 = *(int *)(*piVar8 + 0x74);
    *(bool *)(iVar2 + 0xd) = *(int *)(iVar2 + 0x18) == 2;
    if (iVar9 == 0) {
      FUN_00ec3934();
    }
    iVar2 = MaxSdkAndroid__IsUserConsentSet_29afa98(0);
    if (iVar2 != 0) {
      if (*(int *)(*piVar8 + 0x74) == 0) {
        FUN_00ec3934();
      }
      uVar7 = MaxSdkAndroid__HasUserConsent_29af960(0);
      if (*(int *)(**(int **)(_UNK_01108810 + 0x1108408) + 0x74) == 0) {
        FUN_00ec3934();
      }
      NeftaCustomAdapter_NeftaAdapterEvents__SetHasUserConsent_2c2f0a4(uVar7,0);
    }
    iVar2 = Rotatelab_SingletonScriptableObject_object___get_Instance_1a9a0a8
                      (**(undefined4 **)(_UNK_01108814 + 0x1108430));
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    piVar8 = *(int **)(_UNK_01108818 + 0x1108450);
    cVar1 = *(char *)(iVar2 + 0xd);
    if (*(int *)(*piVar8 + 0x74) == 0) {
      FUN_00ec3934();
    }
    NeftaCustomAdapter_NeftaAdapterEvents__EnableLogging_2c2e86c(cVar1 != '\0',0);
    iVar2 = *(int *)(param_1 + 0x34);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar7 = 1;
    uVar11 = *(undefined4 *)(iVar2 + 0x40);
    if (*(char *)(iVar2 + 0xd) == '\0') {
      uVar7 = 2;
    }
    uVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0110881c + 0x11084b0));
    System_Action_object____ctor_1f11414(uVar5,iVar2,**(undefined4 **)(_UNK_01108820 + 0x11084d4),0)
    ;
    if (*(int *)(*piVar8 + 0x74) == 0) {
      FUN_00ec3934();
    }
    NeftaCustomAdapter_NeftaAdapterEvents__InitWithAppId_2c2e9c4(uVar11,uVar7,uVar5,0);
    if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    *(undefined1 *)(iVar10 + 0x18) = 1;
    if (*(int *)(iVar10 + 0x48) != 0) {
      uVar7 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01108824 + 0x1108538));
      System_Action_object__object____ctor_1f18fcc
                (uVar7,0,**(undefined4 **)(_UNK_01108828 + 0x1108554),0);
      MaxSdkCallbacks_Interstitial__add_OnAdRevenuePaidEvent_29b75fc(uVar7,0);
    }
    if (*(int *)(iVar10 + 0x4c) != 0) {
      uVar7 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0110882c + 0x1108580));
      System_Action_object__object____ctor_1f18fcc
                (uVar7,0,**(undefined4 **)(_UNK_01108830 + 0x110859c),0);
      MaxSdkCallbacks_Rewarded__add_OnAdRevenuePaidEvent_29b879c(uVar7,0);
    }
    uVar7 = *(undefined4 *)(param_1 + 0x34);
    uVar11 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01108834 + 0x11085bc));
    System_Func_bool____ctor_23938dc(uVar11,uVar7,**(undefined4 **)(_UNK_01108838 + 0x11085dc),0);
    uVar7 = 1;
    uVar11 = Rotatelab_Ads_AdManager__WaitForegroundCoroutine_10f5d94(iVar10,uVar11,0x41200000,1);
    *(undefined4 *)(param_1 + 0xc) = uVar11;
    thunk_FUN_00ec5080((undefined4 *)(param_1 + 0xc),uVar11);
    *(undefined4 *)(param_1 + 8) = 2;
  }
  else if (iVar2 == 0) {
    puVar3 = *(undefined4 **)(_UNK_011087d0 + 0x1107d58);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    iVar2 = thunk_FUN_00f00cdc(*puVar3);
    System_Object___ctor_2bb93bc(iVar2,0);
    piVar8 = (int *)(param_1 + 0x34);
    *piVar8 = iVar2;
    thunk_FUN_00ec5080(piVar8,iVar2);
    uVar7 = *(undefined4 *)(param_1 + 0x10);
    if (*piVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    puVar3 = (undefined4 *)(*piVar8 + 0x14);
    *puVar3 = uVar7;
    thunk_FUN_00ec5080(puVar3,uVar7);
    uStack_50 = *(undefined8 *)(param_1 + 0x14);
    uStack_48 = *(undefined8 *)(param_1 + 0x1c);
    iVar2 = *(int *)(param_1 + 0x34);
    uStack_40 = *(undefined8 *)(param_1 + 0x24);
    uStack_38 = *(undefined8 *)(param_1 + 0x2c);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    *(undefined8 *)(iVar2 + 0x24) = uStack_50;
    *(undefined8 *)(iVar2 + 0x2c) = uStack_48;
    *(undefined8 *)(iVar2 + 0x34) = uStack_40;
    *(undefined8 *)(iVar2 + 0x3c) = uStack_38;
    thunk_FUN_00ec5080((undefined8 *)(iVar2 + 0x24),0);
    iVar2 = *piVar8;
    uVar7 = UnityEngine_Time__get_realtimeSinceStartup_360c80c(0);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar9 = *piVar8;
    *(undefined4 *)(iVar2 + 0x20) = uVar7;
    if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    puVar3 = *(undefined4 **)(_UNK_011087d4 + 0x1107e38);
    *(undefined1 *)(iVar9 + 0xc) = 0;
    iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar3);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar7 = *(undefined4 *)(iVar2 + 0x70);
    if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    *(undefined4 *)(iVar9 + 8) = uVar7;
    thunk_FUN_00ec5080((undefined4 *)(iVar9 + 8),uVar7);
    iVar2 = *piVar8;
    uVar7 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_011087d8 + 0x1107e80));
    System_Func_bool____ctor_23938dc(uVar7,iVar2,**(undefined4 **)(_UNK_011087dc + 0x1107e9c),0);
    if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar7 = Rotatelab_Ads_AdManager__WaitForegroundCoroutine_10f5d94(iVar10,uVar7,0x41a00000,0);
    *(undefined4 *)(param_1 + 0xc) = uVar7;
    thunk_FUN_00ec5080((undefined4 *)(param_1 + 0xc),uVar7);
    uVar7 = 1;
    *(undefined4 *)(param_1 + 8) = 1;
  }
  return uVar7;
}

