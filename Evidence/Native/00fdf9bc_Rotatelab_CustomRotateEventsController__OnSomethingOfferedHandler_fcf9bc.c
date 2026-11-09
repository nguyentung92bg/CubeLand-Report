/* IL2CPP: Rotatelab.CustomRotateEventsController$$OnSomethingOfferedHandler
void Rotatelab_CustomRotateEventsController__OnSomethingOfferedHandler (Rotatelab_CustomRotateEventsController_o* __this, System_String_o* offerName, System_String_o* result, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CustomRotateEventsController$$OnSomethingOfferedHandler
   void Rotatelab_CustomRotateEventsController__OnSomethingOfferedHandler
   (Rotatelab_CustomRotateEventsController_o* __this, System_String_o* offerName, System_String_o*
   result, const MethodInfo* method); */

void Rotatelab_CustomRotateEventsController__OnSomethingOfferedHandler_fcf9bc
               (undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  int *piVar5;
  char *pcVar6;
  undefined4 uVar7;
  uint uVar8;
  int *piVar9;
  undefined4 uVar10;
  int iVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  undefined4 uStack_28;
  
  pcVar6 = (char *)(_UNK_00fdff04 + 0xfdf9d8);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fdff08 + 0xfdf9ec));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fdff0c + 0xfdf9f8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fdff10 + 0xfdfa04));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fdff14 + 0xfdfa10));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fdff18 + 0xfdfa1c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fdff1c + 0xfdfa28));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fdff20 + 0xfdfa34));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fdff24 + 0xfdfa40));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fdff28 + 0xfdfa4c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fdff2c + 0xfdfa58));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fdff30 + 0xfdfa64));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fdff34 + 0xfdfa70));
    *pcVar6 = '\x01';
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fdff38 + 0xfdfa84));
  System_Collections_Generic_List_object____ctor_267d274
            (iVar1,**(undefined4 **)(_UNK_00fdff3c + 0xfdfa98));
  piVar9 = *(int **)(_UNK_00fdff40 + 0xfdfaac);
  iVar2 = *piVar9;
  uStack_28 = param_3;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar9;
  }
  uVar10 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x14);
  if (*(int *)(**(int **)(_UNK_00fdff44 + 0xfdfad0) + 0x74) == 0) {
    FUN_00ec3934(**(int **)(_UNK_00fdff44 + 0xfdfad0));
  }
  uVar3 = Rotatelab_Scripts_LevelManager__get_LevelNumber_1065d14(0);
  uVar13 = Rotatelab_ObservableLong__op_Implicit_fb4344(uVar3,0);
  puVar12 = *(undefined4 **)(_UNK_00fdff48 + 0xfdfb14);
  uVar3 = thunk_FUN_00f00cdc(*puVar12);
  Firebase_Analytics_Parameter___ctor_11debc4
            (uVar3,uVar10,(int)uVar13,(int)((ulonglong)uVar13 >> 0x20),0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = *(int *)(iVar1 + 8);
  uVar8 = *(uint *)(iVar1 + 0xc);
  piVar5 = *(int **)(_UNK_00fdff4c + 0xfdfb5c);
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar8 < *(uint *)(iVar2 + 0xc)) {
    *(uint *)(iVar1 + 0xc) = uVar8 + 1;
    puVar4 = (undefined4 *)(iVar2 + uVar8 * 4 + 0x10);
    *puVar4 = uVar3;
    thunk_FUN_00ec5080(puVar4,uVar3);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize_267dae0
              (iVar1,uVar3,*(undefined4 *)(*(int *)(*(int *)(*piVar5 + 0x10) + 0x60) + 0x38));
  }
  uVar3 = *(undefined4 *)(*(int *)(*piVar9 + 0x5c) + 0x18);
  uVar10 = Rotatelab_Scripts_LevelManager__get_RoundNumber_1067e18(0);
  uVar13 = Rotatelab_ObservableLong__op_Implicit_fb4344(uVar10,0);
  uVar10 = thunk_FUN_00f00cdc(*puVar12);
  Firebase_Analytics_Parameter___ctor_11debc4
            (uVar10,uVar3,(int)uVar13,(int)((ulonglong)uVar13 >> 0x20),0);
  iVar2 = *(int *)(iVar1 + 8);
  uVar8 = *(uint *)(iVar1 + 0xc);
  piVar5 = *(int **)(_UNK_00fdff50 + 0xfdfc14);
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar8 < *(uint *)(iVar2 + 0xc)) {
    *(uint *)(iVar1 + 0xc) = uVar8 + 1;
    puVar4 = (undefined4 *)(iVar2 + uVar8 * 4 + 0x10);
    *puVar4 = uVar10;
    thunk_FUN_00ec5080(puVar4,uVar10);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize_267dae0
              (iVar1,uVar10,*(undefined4 *)(*(int *)(*(int *)(*piVar5 + 0x10) + 0x60) + 0x38));
  }
  uVar3 = *(undefined4 *)(*(int *)(*piVar9 + 0x5c) + 0x80);
  uVar10 = thunk_FUN_00f00cdc(*puVar12);
  Firebase_Analytics_Parameter___ctor_11deb88(uVar10,uVar3,param_2,0);
  iVar2 = *(int *)(iVar1 + 8);
  uVar8 = *(uint *)(iVar1 + 0xc);
  iVar11 = *piVar5;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar8 < *(uint *)(iVar2 + 0xc)) {
    *(uint *)(iVar1 + 0xc) = uVar8 + 1;
    puVar4 = (undefined4 *)(iVar2 + uVar8 * 4 + 0x10);
    *puVar4 = uVar10;
    thunk_FUN_00ec5080(puVar4,uVar10);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize_267dae0
              (iVar1,uVar10,*(undefined4 *)(*(int *)(*(int *)(iVar11 + 0x10) + 0x60) + 0x38));
  }
  uVar7 = *(undefined4 *)(*(int *)(*piVar9 + 0x5c) + 0x84);
  uVar3 = thunk_FUN_00f00cdc(*puVar12);
  uVar10 = uStack_28;
  Firebase_Analytics_Parameter___ctor_11deb88(uVar3,uVar7,uStack_28,0);
  iVar2 = *(int *)(iVar1 + 8);
  uVar8 = *(uint *)(iVar1 + 0xc);
  iVar11 = *piVar5;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar8 < *(uint *)(iVar2 + 0xc)) {
    *(uint *)(iVar1 + 0xc) = uVar8 + 1;
    puVar4 = (undefined4 *)(iVar2 + uVar8 * 4 + 0x10);
    *puVar4 = uVar3;
    thunk_FUN_00ec5080(puVar4,uVar3);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize_267dae0
              (iVar1,uVar3,*(undefined4 *)(*(int *)(*(int *)(iVar11 + 0x10) + 0x60) + 0x38));
  }
  piVar9 = *(int **)(_UNK_00fdff54 + 0xfdfd88);
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_00fdff58 + 0xfdfd90));
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar3 = Rotatelab_Ads_AdManager__get_CurrentNeftaModeName_10f5a1c(iVar2,0);
  uVar7 = thunk_FUN_00f00cdc(*puVar12);
  Firebase_Analytics_Parameter___ctor_11deb88
            (uVar7,**(undefined4 **)(_UNK_00fdff5c + 0xfdfdd4),uVar3,0);
  iVar2 = *(int *)(iVar1 + 8);
  uVar8 = *(uint *)(iVar1 + 0xc);
  iVar11 = *piVar9;
  *(int *)(iVar1 + 0x10) = *(int *)(iVar1 + 0x10) + 1;
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar8 < *(uint *)(iVar2 + 0xc)) {
    *(uint *)(iVar1 + 0xc) = uVar8 + 1;
    puVar12 = (undefined4 *)(iVar2 + uVar8 * 4 + 0x10);
    *puVar12 = uVar7;
    thunk_FUN_00ec5080(puVar12,uVar7);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize_267dae0
              (iVar1,uVar7,*(undefined4 *)(*(int *)(*(int *)(iVar11 + 0x10) + 0x60) + 0x38));
  }
  piVar9 = *(int **)(_UNK_00fdff60 + 0xfdfe4c);
  iVar2 = *piVar9;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar9;
  }
  iVar2 = System_String__op_Equality_2a0975c(uVar10,*(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0xc),0)
  ;
  if (iVar2 != 0) {
    if (*(int *)(**(int **)(_UNK_00fdff64 + 0xfdfe88) + 0x74) == 0) {
      FUN_00ec3934();
    }
    Rotatelab_CustomRotateEventsController__AddRewardedNotReadyParameters_fcff70(iVar1);
  }
  piVar9 = *(int **)(_UNK_00fdff68 + 0xfdfeac);
  iVar2 = *piVar9;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar9;
  }
  uVar10 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x38);
  if (*(int *)(**(int **)(_UNK_00fdff6c + 0xfdfecc) + 0x74) == 0) {
    FUN_00ec3934(**(int **)(_UNK_00fdff6c + 0xfdfecc));
  }
  Rotatelab_Scripts_ControllerFirebase__SendEvent_10609ac(uVar10,iVar1,0);
  pcVar6 = (char *)(_UNK_00fda934 + 0xfda298);
  if (*pcVar6 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fda938 + 0xfda2ac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fda93c + 0xfda2b8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fda940 + 0xfda2c4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fda944 + 0xfda2d0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fda948 + 0xfda2dc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fda94c + 0xfda2e8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fda950 + 0xfda2f4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fda954 + 0xfda300));
    *pcVar6 = '\x01';
  }
  piVar9 = *(int **)(_UNK_00fda958 + 0xfda318);
  iVar1 = *piVar9;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar9;
  }
  puVar12 = *(undefined4 **)(_UNK_00fda95c + 0xfda340);
  uVar10 = **(undefined4 **)(iVar1 + 0x5c);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar12);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar5 = (int *)Rotatelab_Currency_CurrencyManager__get_Coins_1083318(iVar1,0);
  if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar3 = (**(code **)(*piVar5 + 0xd8))(piVar5,*(undefined4 *)(*piVar5 + 0xdc));
  if (*(int *)(**(int **)(_UNK_00fda960 + 0xfda398) + 0x74) == 0) {
    FUN_00ec3934();
  }
  Rotatelab_Scripts_ControllerFirebase__SetUserProperty_1061010(uVar10,uVar3,0);
  uVar10 = *(undefined4 *)(*(int *)(*piVar9 + 0x5c) + 0xc);
  if (*(int *)(**(int **)(_UNK_00fda964 + 0xfda3c8) + 0x74) == 0) {
    FUN_00ec3934();
  }
  UnityEngine_Application__get_internetReachability_35a8364(0);
  uStack_28 = **(undefined4 **)(_UNK_00fda968 + 0xfda3f4);
  uVar3 = System_Enum__ToString_2bab8c0(&uStack_28,0);
  Rotatelab_Scripts_ControllerFirebase__SetUserProperty_1061010(uVar10,uVar3,0);
  uVar10 = *(undefined4 *)(*(int *)(*piVar9 + 0x5c) + 0x4c);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_00fda96c + 0xfda434));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(*(int *)(*(int *)(_UNK_00fda970 + 0xfda458) + 0x14) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar3 = System_Boolean__ToString_2b14940(&stack0xffffffe7,0);
  Rotatelab_Scripts_ControllerFirebase__SetUserProperty_1061010(uVar10,uVar3,0);
  uVar10 = *(undefined4 *)(*(int *)(*piVar9 + 0x5c) + 0x14);
  if (*(int *)(**(int **)(_UNK_00fda974 + 0xfda49c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  piVar5 = (int *)Rotatelab_Scripts_LevelManager__get_LevelNumber_1065d14(0);
  if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar3 = (**(code **)(*piVar5 + 0xd8))(piVar5,*(undefined4 *)(*piVar5 + 0xdc));
  Rotatelab_Scripts_ControllerFirebase__SetUserProperty_1061010(uVar10,uVar3,0);
  uVar10 = *(undefined4 *)(*(int *)(*piVar9 + 0x5c) + 0x18);
  piVar5 = (int *)Rotatelab_Scripts_LevelManager__get_RoundNumber_1067e18(0);
  if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar3 = (**(code **)(*piVar5 + 0xd8))(piVar5,*(undefined4 *)(*piVar5 + 0xdc));
  Rotatelab_Scripts_ControllerFirebase__SetUserProperty_1061010(uVar10,uVar3,0);
  uVar10 = *(undefined4 *)(*(int *)(*piVar9 + 0x5c) + 0x10);
  iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar3 = System_Int64__ToString_2b6cd68(iVar1 + 0x68,0);
  Rotatelab_Scripts_ControllerFirebase__SetUserProperty_1061010(uVar10,uVar3,0);
  uVar10 = *(undefined4 *)(*(int *)(*piVar9 + 0x5c) + 4);
  iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar3 = System_Int64__ToString_2b6cd68(iVar1 + 0xd0,0);
  Rotatelab_Scripts_ControllerFirebase__SetUserProperty_1061010(uVar10,uVar3,0);
  uVar10 = *(undefined4 *)(*(int *)(*piVar9 + 0x5c) + 8);
  iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar3 = System_Int64__ToString_2b6cd68(iVar1 + 0xd8,0);
  Rotatelab_Scripts_ControllerFirebase__SetUserProperty_1061010(uVar10,uVar3,0);
  uVar10 = *(undefined4 *)(*(int *)(*piVar9 + 0x5c) + 0x2c);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar12);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = Rotatelab_Currency_CurrencyManager__GetBooster_10837e8(iVar1,0,1,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar3 = System_Int64__ToString_2b6cd68(iVar1 + 0x28,0);
  Rotatelab_Scripts_ControllerFirebase__SetUserProperty_1061010(uVar10,uVar3,0);
  uVar10 = *(undefined4 *)(*(int *)(*piVar9 + 0x5c) + 0x30);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar12);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = Rotatelab_Currency_CurrencyManager__GetBooster_10837e8(iVar1,0,2,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar3 = System_Int64__ToString_2b6cd68(iVar1 + 0x28,0);
  Rotatelab_Scripts_ControllerFirebase__SetUserProperty_1061010(uVar10,uVar3,0);
  uVar10 = *(undefined4 *)(*(int *)(*piVar9 + 0x5c) + 0x34);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar12);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = Rotatelab_Currency_CurrencyManager__GetBooster_10837e8(iVar1,0,3,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar3 = System_Int64__ToString_2b6cd68(iVar1 + 0x28,0);
  Rotatelab_Scripts_ControllerFirebase__SetUserProperty_1061010(uVar10,uVar3,0);
  uVar10 = *(undefined4 *)(*(int *)(*piVar9 + 0x5c) + 0x38);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar12);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = Rotatelab_Currency_CurrencyManager__GetBooster_10837e8(iVar1,0,4,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar3 = System_Int64__ToString_2b6cd68(iVar1 + 0x28,0);
  Rotatelab_Scripts_ControllerFirebase__SetUserProperty_1061010(uVar10,uVar3,0);
  uVar10 = *(undefined4 *)(*(int *)(*piVar9 + 0x5c) + 0x3c);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar12);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar1 = Rotatelab_Currency_CurrencyManager__GetBooster_10837e8(iVar1,0,5,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar3 = System_Int64__ToString_2b6cd68(iVar1 + 0x28,0);
  Rotatelab_Scripts_ControllerFirebase__SetUserProperty_1061010(uVar10,uVar3,0);
  uVar10 = *(undefined4 *)(*(int *)(*piVar9 + 0x5c) + 0x40);
  iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar3 = System_Int64__ToString_2b6cd68(iVar1 + 0x78,0);
  Rotatelab_Scripts_ControllerFirebase__SetUserProperty_1061010(uVar10,uVar3,0);
  uVar10 = *(undefined4 *)(*(int *)(*piVar9 + 0x5c) + 0x1c);
  iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar3 = System_Double__ToString_2b51bec(iVar1 + 200,0);
  Rotatelab_Scripts_ControllerFirebase__SetUserProperty_1061010(uVar10,uVar3,0);
  uVar10 = *(undefined4 *)(*(int *)(*piVar9 + 0x5c) + 0x20);
  iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar3 = System_Double__ToString_2b51bec(iVar1 + 0xc0,0);
  Rotatelab_Scripts_ControllerFirebase__SetUserProperty_1061010(uVar10,uVar3,0);
  piVar5 = *(int **)(_UNK_00fda978 + 0xfda8bc);
  iVar1 = *piVar5;
  uVar10 = *(undefined4 *)(*(int *)(*piVar9 + 0x5c) + 0x48);
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar5;
  }
  Rotatelab_Scripts_ControllerFirebase__SetUserProperty_1061010
            (uVar10,**(undefined4 **)(iVar1 + 0x5c),0);
  uVar10 = *(undefined4 *)(*(int *)(*piVar9 + 0x5c) + 0x44);
  iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar3 = System_Int64__ToString_2b6cd68(iVar1 + 0x70,0);
  Rotatelab_Scripts_ControllerFirebase__SetUserProperty_1061010(uVar10,uVar3,0);
  return;
}

