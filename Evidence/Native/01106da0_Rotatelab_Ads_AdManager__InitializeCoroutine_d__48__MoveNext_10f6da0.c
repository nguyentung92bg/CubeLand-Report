/* IL2CPP: Rotatelab.Ads.AdManager.<InitializeCoroutine>d__48$$MoveNext
bool Rotatelab_Ads_AdManager__InitializeCoroutine_d__48__MoveNext (Rotatelab_Ads_AdManager__InitializeCoroutine_d__48_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Ads.AdManager.<InitializeCoroutine>d__48$$MoveNext
   bool Rotatelab_Ads_AdManager__InitializeCoroutine_d__48__MoveNext
   (Rotatelab_Ads_AdManager__InitializeCoroutine_d__48_o* __this, const MethodInfo* method); */

undefined4 Rotatelab_Ads_AdManager__InitializeCoroutine_d__48__MoveNext_10f6da0(int param_1)

{
  char cVar1;
  undefined2 uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  int *piVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined4 uStack_30;
  int iStack_2c;
  int *piStack_28;
  int iStack_24;
  
  pcVar4 = (char *)(_UNK_011079b4 + 0x1106dbc);
  iStack_24 = param_1;
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_011079b8 + 0x1106dd0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011079bc + 0x1106ddc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011079c0 + 0x1106de8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011079c4 + 0x1106df4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011079c8 + 0x1106e00));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011079cc + 0x1106e0c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011079d0 + 0x1106e18));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011079d4 + 0x1106e24));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011079d8 + 0x1106e30));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011079dc + 0x1106e3c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011079e0 + 0x1106e48));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011079e4 + 0x1106e54));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011079e8 + 0x1106e60));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011079ec + 0x1106e6c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011079f0 + 0x1106e78));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011079f4 + 0x1106e84));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011079f8 + 0x1106e90));
    FUN_00ec37c0(*(undefined4 *)(_UNK_011079fc + 0x1106e9c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01107a00 + 0x1106ea8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01107a04 + 0x1106eb4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01107a08 + 0x1106ec0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01107a0c + 0x1106ecc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01107a10 + 0x1106ed8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01107a14 + 0x1106ee4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01107a18 + 0x1106ef0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01107a1c + 0x1106efc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01107a20 + 0x1106f08));
    *pcVar4 = '\x01';
  }
  iVar3 = *(int *)(param_1 + 8);
  uVar7 = 0;
  iVar12 = *(int *)(param_1 + 0x10);
  piStack_28 = &iStack_24;
  iStack_2c = 0;
  if (iVar3 == 2) {
    puVar8 = *(undefined4 **)(_UNK_01107ab4 + 0x110780c);
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar8);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar6 = *(undefined4 *)(iVar3 + 0x14);
    if (*(int *)(**(int **)(_UNK_01107ab8 + 0x1107830) + 0x74) == 0) {
      FUN_00ec3934();
    }
    uVar7 = 0;
    MaxSdkAndroid__SetUserId_29af254(uVar6,0);
    goto LAB_01107888;
  }
  if (iVar3 == 1) {
    *(undefined4 *)(param_1 + 8) = 0xfffffffd;
    Rotatelab_Ads_AdManager__InitializeCoroutine_d__48____m__Finally1_10f7abc(param_1);
    *(undefined4 *)(iStack_24 + 0x38) = 0;
    thunk_FUN_00ec5080();
    if (*(int *)(**(int **)(_UNK_01107a70 + 0x110731c) + 0x74) == 0) {
      FUN_00ec3934();
    }
    iVar3 = MaxSdkAndroid__GetSdkConfiguration_29af498(0);
    puVar8 = *(undefined4 **)(_UNK_01107a74 + 0x1107344);
    iVar5 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar8);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uStack_30 = *(int *)(iVar3 + 0x14);
    uVar7 = FUN_00ec393c(**(undefined4 **)(_UNK_01107a78 + 0x1107368),&uStack_30);
    uVar7 = System_String__Format_29ffb6c(**(undefined4 **)(_UNK_01107a7c + 0x1107384),uVar7,0);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Debugging_CreativeCanvasController__LogMessage_110e8d8(iVar5,uVar7,0);
    puVar11 = *(undefined4 **)(_UNK_01107a80 + 0x11073b8);
    iVar3 = Rotatelab_SingletonScriptableObject_object___get_Instance_1a9a0a8(*puVar11);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((*(char *)(iVar3 + 0x41) != '\0') &&
       (iVar3 = System_String__IsNullOrEmpty_2a0a844(*(undefined4 *)(iStack_24 + 0x18),0),
       iVar3 == 0)) {
      uVar6 = *(undefined4 *)(iStack_24 + 0x18);
      uVar7 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01107a84 + 0x1107404));
      Rotatelab_Ads_BannerAdFormat___ctor_10ee870(uVar7,uVar6);
      if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      puVar9 = (undefined4 *)(iVar12 + 0x44);
      *puVar9 = uVar7;
      thunk_FUN_00ec5080(puVar9,uVar7);
      piVar10 = (int *)*puVar9;
      if (piVar10 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      (**(code **)(*piVar10 + 0xf0))(piVar10,*(undefined4 *)(*piVar10 + 0xf4));
    }
    iVar3 = Rotatelab_SingletonScriptableObject_object___get_Instance_1a9a0a8(*puVar11);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((*(char *)(iVar3 + 0x30) != '\0') &&
       (iVar3 = System_String__IsNullOrEmpty_2a0a844(*(undefined4 *)(iStack_24 + 0x14),0),
       iVar3 == 0)) {
      uVar6 = *(undefined4 *)(iStack_24 + 0x14);
      uVar7 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01107a88 + 0x11074a8));
      Rotatelab_Ads_InterstitialAdFormat___ctor_10f0008(uVar7,uVar6);
      if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      puVar9 = (undefined4 *)(iVar12 + 0x48);
      *puVar9 = uVar7;
      thunk_FUN_00ec5080(puVar9,uVar7);
      if (*(char *)(iStack_24 + 0x34) == '\0') {
        piVar10 = (int *)*puVar9;
        if (piVar10 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        (**(code **)(*piVar10 + 0xf0))(piVar10,*(undefined4 *)(*piVar10 + 0xf4));
      }
    }
    iVar3 = Rotatelab_SingletonScriptableObject_object___get_Instance_1a9a0a8(*puVar11);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if ((*(char *)(iVar3 + 0x58) != '\0') &&
       (iVar3 = System_String__IsNullOrEmpty_2a0a844(*(undefined4 *)(iStack_24 + 0x1c),0),
       iVar3 == 0)) {
      uVar7 = *(undefined4 *)(iStack_24 + 0x1c);
      iVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01107a8c + 0x110755c));
      Rotatelab_Ads_RewardedAdFormat___ctor_10f40dc(iVar3,uVar7);
      if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      piVar10 = (int *)(iVar12 + 0x4c);
      *piVar10 = iVar3;
      thunk_FUN_00ec5080(piVar10,iVar3);
      iVar3 = *piVar10;
      uVar7 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01107a90 + 0x110759c));
      System_Action_object__object____ctor_1f18fcc
                (uVar7,iVar12,**(undefined4 **)(_UNK_01107a94 + 0x11075b0),0);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_Ads_RewardedAdFormat__add_AdDisplayedEvent_10f38e0(iVar3,uVar7);
      iVar3 = *piVar10;
      uVar7 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01107a98 + 0x11075e8));
      System_Action___ctor_2b10bac(uVar7,iVar12,**(undefined4 **)(_UNK_01107a9c + 0x11075fc),0);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      Rotatelab_Ads_RewardedAdFormat__add_AdHiddenEvent_10f3ba0(iVar3,uVar7);
      if (*(char *)(iStack_24 + 0x34) == '\0') {
        piVar10 = (int *)*piVar10;
        if (piVar10 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        (**(code **)(*piVar10 + 0xf0))(piVar10,*(undefined4 *)(*piVar10 + 0xf4));
      }
    }
    iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar8);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Debugging_CreativeCanvasController__LogMessage_110e8d8
              (iVar3,**(undefined4 **)(_UNK_01107aa0 + 0x110767c),0);
    if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Ads_AdManager__OnSatoriFlagsRefreshed_10f6520(iVar12);
    uVar7 = UnityEngine_Time__get_realtimeSinceStartup_360c80c(0);
    if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    cVar1 = *(char *)(iStack_24 + 0x34);
    *(undefined1 *)(iVar12 + 0x10) = 1;
    *(undefined4 *)(iVar12 + 0x14) = uVar7;
    if (cVar1 != '\0') {
      uVar7 = Rotatelab_Ads_AdManager__InitializeNeftaCoroutine_10f5cac
                        (iVar12,*(undefined4 *)(iStack_24 + 0x14),*(undefined4 *)(iStack_24 + 0x18),
                         *(undefined4 *)(iStack_24 + 0x1c),*(undefined4 *)(iStack_24 + 0x20),
                         *(undefined4 *)(iStack_24 + 0x24),*(undefined4 *)(iStack_24 + 0x28),
                         *(undefined4 *)(iStack_24 + 0x2c),*(undefined4 *)(iStack_24 + 0x30));
      UnityEngine_MonoBehaviour__StartCoroutine_36042a4(iVar12,uVar7,0);
    }
    piVar10 = *(int **)(_UNK_01107aa4 + 0x1107724);
    iVar3 = *piVar10;
    if (*(int *)(iVar3 + 0x74) == 0) {
      FUN_00ec3934();
      iVar3 = *piVar10;
    }
    iVar12 = iStack_24;
    puVar8 = *(undefined4 **)(iVar3 + 0x5c);
    iVar5 = puVar8[2];
    if (iVar5 == 0) {
      if (*(int *)(iVar3 + 0x74) == 0) {
        FUN_00ec3934();
        puVar8 = *(undefined4 **)(*piVar10 + 0x5c);
      }
      uVar7 = *puVar8;
      iVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01107aa8 + 0x1107774));
      System_Func_bool____ctor_23938dc(iVar5,uVar7,**(undefined4 **)(_UNK_01107aac + 0x1107788),0);
      piVar10 = (int *)(*(int *)(*piVar10 + 0x5c) + 8);
      *piVar10 = iVar5;
      thunk_FUN_00ec5080(piVar10,iVar5);
    }
    uVar7 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01107ab0 + 0x11077b8));
    UnityEngine_WaitUntil___ctor_360c984(uVar7,iVar5,0);
    if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar6 = 2;
    puVar8 = (undefined4 *)(iVar12 + 0xc);
    *puVar8 = uVar7;
    thunk_FUN_00ec5080(puVar8,uVar7);
  }
  else {
    if (iVar3 != 0) goto LAB_01107888;
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = Rotatelab_Ads_AdManager__get_IsEnabled_10f5748();
    if (iVar3 == 0) {
      iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                        (**(undefined4 **)(_UNK_01107a24 + 0x1106f6c));
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      uVar7 = 0;
      Rotatelab_Debugging_CreativeCanvasController__LogMessage_110e8d8
                (iVar3,**(undefined4 **)(_UNK_01107a28 + 0x110787c),0);
      goto LAB_01107888;
    }
    iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_01107a24 + 0x1106f6c));
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Debugging_CreativeCanvasController__LogMessage_110e8d8
              (iVar3,**(undefined4 **)(_UNK_01107a2c + 0x1106f90),0);
    puVar8 = *(undefined4 **)(_UNK_01107a30 + 0x1106fa8);
    iVar3 = Rotatelab_SingletonScriptableObject_object___get_Instance_1a9a0a8(*puVar8);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar13 = *(undefined8 *)(iVar3 + 0x18);
    uVar14 = *(undefined8 *)(iVar3 + 0x20);
    uVar15 = *(undefined8 *)(iVar3 + 0x28);
    *(undefined8 *)(iStack_24 + 0x14) = *(undefined8 *)(iVar3 + 0x10);
    *(undefined8 *)(iStack_24 + 0x1c) = uVar13;
    *(undefined8 *)(iStack_24 + 0x24) = uVar14;
    *(undefined8 *)(iStack_24 + 0x2c) = uVar15;
    thunk_FUN_00ec5080((undefined8 *)(iStack_24 + 0x14),0);
    iVar3 = Rotatelab_SingletonScriptableObject_object___get_Instance_1a9a0a8(*puVar8);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    iVar3 = Rotatelab_Ads_AdConfig__get_IsNeftaEnabled_10ed908(iVar3);
    *(char *)(iStack_24 + 0x34) = (char)iVar3;
    if (iVar3 != 0) {
      if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      puVar8 = *(undefined4 **)(_UNK_01107a34 + 0x1107030);
      *(undefined4 *)(iVar12 + 0x3c) = 0;
      iVar3 = FUN_00ec388c(*puVar8,4);
      uVar7 = *(undefined4 *)(iStack_24 + 0x20);
      if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f078d4();
      }
      if (*(int *)(iVar3 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      *(undefined4 *)(iVar3 + 0x10) = uVar7;
      thunk_FUN_00ec5080((undefined4 *)(iVar3 + 0x10),uVar7);
      uVar7 = *(undefined4 *)(iStack_24 + 0x24);
      if (*(uint *)(iVar3 + 0xc) < 2) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      *(undefined4 *)(iVar3 + 0x14) = uVar7;
      thunk_FUN_00ec5080((undefined4 *)(iVar3 + 0x14),uVar7);
      uVar7 = *(undefined4 *)(iStack_24 + 0x28);
      if (*(uint *)(iVar3 + 0xc) < 3) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      *(undefined4 *)(iVar3 + 0x18) = uVar7;
      thunk_FUN_00ec5080((undefined4 *)(iVar3 + 0x18),uVar7);
      uVar7 = *(undefined4 *)(iStack_24 + 0x2c);
      if (*(uint *)(iVar3 + 0xc) < 4) {
                    /* WARNING: Subroutine does not return */
        thunk_FUN_00f07924();
      }
      *(undefined4 *)(iVar3 + 0x1c) = uVar7;
      thunk_FUN_00ec5080((undefined4 *)(iVar3 + 0x1c),uVar7);
      uVar7 = System_String__Join_2a0c708(**(undefined4 **)(_UNK_01107a38 + 0x11070f8),iVar3,0);
      if (*(int *)(**(int **)(_UNK_01107a3c + 0x1107114) + 0x74) == 0) {
        FUN_00ec3934();
      }
      MaxSdkAndroid__SetExtraParameter_29b1988(**(undefined4 **)(_UNK_01107a40 + 0x1107130),uVar7,0)
      ;
    }
    uVar7 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01107a44 + 0x1107148));
    Rotatelab_Networking_StopwatchEvent___ctor_fe8d78
              (uVar7,**(undefined4 **)(_UNK_01107a48 + 0x110715c),0,1,0);
    *(undefined4 *)(iStack_24 + 0x38) = uVar7;
    thunk_FUN_00ec5080((undefined4 *)(iStack_24 + 0x38),uVar7);
    uVar7 = **(undefined4 **)(_UNK_01107a4c + 0x1107194);
    *(undefined4 *)(iStack_24 + 8) = 0xfffffffd;
    uStack_30 = (uint)uStack_30._2_2_ << 0x10;
    System_Nullable_bool____ctor_17d61c0(&uStack_30,0,uVar7);
    uVar2 = (undefined2)uStack_30;
    pcVar4 = (char *)(_UNK_01107a50 + 0x11071c0);
    if (*pcVar4 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_01107a54 + 0x11071d4));
      *pcVar4 = '\x01';
    }
    **(undefined2 **)(**(int **)(_UNK_01107a58 + 0x11071e8) + 0x5c) = uVar2;
    if (*(int *)(**(int **)(_UNK_01107a5c + 0x11071fc) + 0x74) == 0) {
      FUN_00ec3934();
    }
    MaxSdkAndroid__InitializeSdk_29aee28(0,0);
    piVar10 = *(int **)(_UNK_01107a60 + 0x1107224);
    iVar3 = *piVar10;
    if (*(int *)(iVar3 + 0x74) == 0) {
      FUN_00ec3934();
      iVar3 = *piVar10;
    }
    iVar12 = iStack_24;
    puVar8 = *(undefined4 **)(iVar3 + 0x5c);
    iVar5 = puVar8[1];
    if (iVar5 == 0) {
      if (*(int *)(iVar3 + 0x74) == 0) {
        FUN_00ec3934();
        puVar8 = *(undefined4 **)(*piVar10 + 0x5c);
      }
      uVar7 = *puVar8;
      iVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01107a64 + 0x1107274));
      System_Func_bool____ctor_23938dc(iVar5,uVar7,**(undefined4 **)(_UNK_01107a68 + 0x1107288),0);
      piVar10 = (int *)(*(int *)(*piVar10 + 0x5c) + 4);
      *piVar10 = iVar5;
      thunk_FUN_00ec5080(piVar10,iVar5);
    }
    uVar7 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_01107a6c + 0x11072b8));
    UnityEngine_WaitUntil___ctor_360c984(uVar7,iVar5,0);
    if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar6 = 1;
    puVar8 = (undefined4 *)(iVar12 + 0xc);
    *puVar8 = uVar7;
    thunk_FUN_00ec5080(puVar8,uVar7);
  }
  uVar7 = 1;
  *(undefined4 *)(iStack_24 + 8) = uVar6;
LAB_01107888:
  iVar3 = iStack_2c;
  if (iStack_2c != 0) {
    if (*(int *)(*piStack_28 + 8) == 1 || *(int *)(*piStack_28 + 8) == -3) {
      Rotatelab_Ads_AdManager__InitializeCoroutine_d__48____m__Finally1_10f7abc();
    }
    FUN_00ec3a6c(iVar3);
  }
  return uVar7;
}

