/* IL2CPP: Rotatelab.CustomRotateEventsController$$OnCustomAdClickedHandler
void Rotatelab_CustomRotateEventsController__OnCustomAdClickedHandler (Rotatelab_CustomRotateEventsController_o* __this, System_String_o* adUnitId, MaxSdkBase_AdInfo_o* adInfo, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CustomRotateEventsController$$OnCustomAdClickedHandler
   void Rotatelab_CustomRotateEventsController__OnCustomAdClickedHandler
   (Rotatelab_CustomRotateEventsController_o* __this, System_String_o* adUnitId,
   MaxSdkBase_AdInfo_o* adInfo, const MethodInfo* method); */

void Rotatelab_CustomRotateEventsController__OnCustomAdClickedHandler_fd18c4
               (undefined4 param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  undefined4 uVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  char *pcVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  
  pcVar7 = (char *)(_UNK_00fe1d1c + 0xfe18e4);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe1d20 + 0xfe18f8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe1d24 + 0xfe1904));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe1d28 + 0xfe1910));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe1d2c + 0xfe191c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe1d30 + 0xfe1928));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe1d34 + 0xfe1934));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe1d38 + 0xfe1940));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe1d3c + 0xfe194c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe1d40 + 0xfe1958));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe1d44 + 0xfe1964));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe1d48 + 0xfe1970));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe1d4c + 0xfe197c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe1d50 + 0xfe1988));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe1d54 + 0xfe1994));
    *pcVar7 = '\x01';
  }
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar9 = *(undefined8 *)(param_3 + 0x20);
  piVar3 = (int *)FUN_00ec388c(**(undefined4 **)(_UNK_00fe1d58 + 0xfe19b8),6);
  puVar8 = *(undefined4 **)(_UNK_00fe1d5c + 0xfe19d0);
  iVar4 = thunk_FUN_00f00cdc(*puVar8);
  Firebase_Analytics_Parameter___ctor_11deb88
            (iVar4,**(undefined4 **)(_UNK_00fe1d60 + 0xfe19e8),
             **(undefined4 **)(_UNK_00fe1d64 + 0xfe19f4),0);
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if ((iVar4 != 0) &&
     (iVar5 = thunk_FUN_00f00bc8(iVar4,*(undefined4 *)(*piVar3 + 0x20)), iVar5 == 0)) {
    uVar6 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar6,0);
  }
  if (piVar3[3] == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar3[4] = iVar4;
  thunk_FUN_00ec5080(piVar3 + 4,iVar4);
  uVar6 = *(undefined4 *)(param_3 + 0x10);
  iVar4 = thunk_FUN_00f00cdc(*puVar8);
  Firebase_Analytics_Parameter___ctor_11deb88
            (iVar4,**(undefined4 **)(_UNK_00fe1d68 + 0xfe1a78),uVar6,0);
  if ((iVar4 != 0) &&
     (iVar5 = thunk_FUN_00f00bc8(iVar4,*(undefined4 *)(*piVar3 + 0x20)), iVar5 == 0)) {
    uVar6 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar6,0);
  }
  if ((uint)piVar3[3] < 2) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar3[5] = iVar4;
  thunk_FUN_00ec5080(piVar3 + 5,iVar4);
  uVar6 = *(undefined4 *)(param_3 + 8);
  iVar4 = thunk_FUN_00f00cdc(*puVar8);
  Firebase_Analytics_Parameter___ctor_11deb88
            (iVar4,**(undefined4 **)(_UNK_00fe1d6c + 0xfe1af0),uVar6,0);
  if ((iVar4 != 0) &&
     (iVar5 = thunk_FUN_00f00bc8(iVar4,*(undefined4 *)(*piVar3 + 0x20)), iVar5 == 0)) {
    uVar6 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar6,0);
  }
  if ((uint)piVar3[3] < 3) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar3[6] = iVar4;
  thunk_FUN_00ec5080(piVar3 + 6,iVar4);
  uVar6 = *(undefined4 *)(param_3 + 0xc);
  iVar4 = thunk_FUN_00f00cdc(*puVar8);
  Firebase_Analytics_Parameter___ctor_11deb88
            (iVar4,**(undefined4 **)(_UNK_00fe1d70 + 0xfe1b68),uVar6,0);
  if ((iVar4 != 0) &&
     (iVar5 = thunk_FUN_00f00bc8(iVar4,*(undefined4 *)(*piVar3 + 0x20)), iVar5 == 0)) {
    uVar6 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar6,0);
  }
  if ((uint)piVar3[3] < 4) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar3[7] = iVar4;
  thunk_FUN_00ec5080(piVar3 + 7,iVar4);
  iVar4 = thunk_FUN_00f00cdc(*puVar8);
  Firebase_Analytics_Parameter___ctor_11dec2c
            (iVar4,**(undefined4 **)(_UNK_00fe1d74 + 0xfe1bd8),(int)uVar9,
             (int)((ulonglong)uVar9 >> 0x20),0);
  if ((iVar4 != 0) &&
     (iVar5 = thunk_FUN_00f00bc8(iVar4,*(undefined4 *)(*piVar3 + 0x20)), iVar5 == 0)) {
    uVar6 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar6,0);
  }
  if ((uint)piVar3[3] < 5) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar3[8] = iVar4;
  thunk_FUN_00ec5080(piVar3 + 8,iVar4);
  iVar4 = thunk_FUN_00f00cdc(*puVar8);
  Firebase_Analytics_Parameter___ctor_11deb88
            (iVar4,**(undefined4 **)(_UNK_00fe1d78 + 0xfe1c50),
             **(undefined4 **)(_UNK_00fe1d7c + 0xfe1c5c),0);
  if ((iVar4 != 0) &&
     (iVar5 = thunk_FUN_00f00bc8(iVar4,*(undefined4 *)(*piVar3 + 0x20)), iVar5 == 0)) {
    uVar6 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar6,0);
  }
  if ((uint)piVar3[3] < 6) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar3[9] = iVar4;
  thunk_FUN_00ec5080(piVar3 + 9,iVar4);
  if (*(int *)(**(int **)(_UNK_00fe1d80 + 0xfe1cbc) + 0x74) == 0) {
    FUN_00ec3934();
  }
  Rotatelab_Scripts_ControllerFirebase__SendEvent_1060a54
            (**(undefined4 **)(_UNK_00fe1d84 + 0xfe1ce0),piVar3,0);
  Rotatelab_CustomRotateEventsController__LogMessage_fc833c
            (*(undefined4 **)(_UNK_00fe1d88 + 0xfe1cf0),**(undefined4 **)(_UNK_00fe1d88 + 0xfe1cf0))
  ;
  Rotatelab_CustomRotateEventsController__ReportToAxon_fc83ec
            (param_1,**(undefined4 **)(_UNK_00fe1d8c + 0xfe1d04),0);
  pcVar7 = (char *)(_UNK_00fda934 + 0xfda298);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fda938 + 0xfda2ac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fda93c + 0xfda2b8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fda940 + 0xfda2c4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fda944 + 0xfda2d0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fda948 + 0xfda2dc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fda94c + 0xfda2e8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fda950 + 0xfda2f4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fda954 + 0xfda300));
    *pcVar7 = '\x01';
  }
  piVar3 = *(int **)(_UNK_00fda958 + 0xfda318);
  iVar4 = *piVar3;
  if (*(int *)(iVar4 + 0x74) == 0) {
    FUN_00ec3934();
    iVar4 = *piVar3;
  }
  puVar8 = *(undefined4 **)(_UNK_00fda95c + 0xfda340);
  uVar6 = **(undefined4 **)(iVar4 + 0x5c);
  iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar8);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar1 = (int *)Rotatelab_Currency_CurrencyManager__get_Coins_1083318(iVar4,0);
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = (**(code **)(*piVar1 + 0xd8))(piVar1,*(undefined4 *)(*piVar1 + 0xdc));
  if (*(int *)(**(int **)(_UNK_00fda960 + 0xfda398) + 0x74) == 0) {
    FUN_00ec3934();
  }
  Rotatelab_Scripts_ControllerFirebase__SetUserProperty_1061010(uVar6,uVar2,0);
  uVar6 = *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0xc);
  if (*(int *)(**(int **)(_UNK_00fda964 + 0xfda3c8) + 0x74) == 0) {
    FUN_00ec3934();
  }
  UnityEngine_Application__get_internetReachability_35a8364(0);
  uVar2 = System_Enum__ToString_2bab8c0(&stack0xffffffd8,0);
  Rotatelab_Scripts_ControllerFirebase__SetUserProperty_1061010(uVar6,uVar2,0);
  uVar6 = *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x4c);
  iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_00fda96c + 0xfda434));
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(*(int *)(*(int *)(_UNK_00fda970 + 0xfda458) + 0x14) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar2 = System_Boolean__ToString_2b14940(&stack0xffffffe7,0);
  Rotatelab_Scripts_ControllerFirebase__SetUserProperty_1061010(uVar6,uVar2,0);
  uVar6 = *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x14);
  if (*(int *)(**(int **)(_UNK_00fda974 + 0xfda49c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  piVar1 = (int *)Rotatelab_Scripts_LevelManager__get_LevelNumber_1065d14(0);
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = (**(code **)(*piVar1 + 0xd8))(piVar1,*(undefined4 *)(*piVar1 + 0xdc));
  Rotatelab_Scripts_ControllerFirebase__SetUserProperty_1061010(uVar6,uVar2,0);
  uVar6 = *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x18);
  piVar1 = (int *)Rotatelab_Scripts_LevelManager__get_RoundNumber_1067e18(0);
  if (piVar1 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = (**(code **)(*piVar1 + 0xd8))(piVar1,*(undefined4 *)(*piVar1 + 0xdc));
  Rotatelab_Scripts_ControllerFirebase__SetUserProperty_1061010(uVar6,uVar2,0);
  uVar6 = *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x10);
  iVar4 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = System_Int64__ToString_2b6cd68(iVar4 + 0x68,0);
  Rotatelab_Scripts_ControllerFirebase__SetUserProperty_1061010(uVar6,uVar2,0);
  uVar6 = *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 4);
  iVar4 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = System_Int64__ToString_2b6cd68(iVar4 + 0xd0,0);
  Rotatelab_Scripts_ControllerFirebase__SetUserProperty_1061010(uVar6,uVar2,0);
  uVar6 = *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 8);
  iVar4 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = System_Int64__ToString_2b6cd68(iVar4 + 0xd8,0);
  Rotatelab_Scripts_ControllerFirebase__SetUserProperty_1061010(uVar6,uVar2,0);
  uVar6 = *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x2c);
  iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar8);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = Rotatelab_Currency_CurrencyManager__GetBooster_10837e8(iVar4,0,1,0);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = System_Int64__ToString_2b6cd68(iVar4 + 0x28,0);
  Rotatelab_Scripts_ControllerFirebase__SetUserProperty_1061010(uVar6,uVar2,0);
  uVar6 = *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x30);
  iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar8);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = Rotatelab_Currency_CurrencyManager__GetBooster_10837e8(iVar4,0,2,0);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = System_Int64__ToString_2b6cd68(iVar4 + 0x28,0);
  Rotatelab_Scripts_ControllerFirebase__SetUserProperty_1061010(uVar6,uVar2,0);
  uVar6 = *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x34);
  iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar8);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = Rotatelab_Currency_CurrencyManager__GetBooster_10837e8(iVar4,0,3,0);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = System_Int64__ToString_2b6cd68(iVar4 + 0x28,0);
  Rotatelab_Scripts_ControllerFirebase__SetUserProperty_1061010(uVar6,uVar2,0);
  uVar6 = *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x38);
  iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar8);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = Rotatelab_Currency_CurrencyManager__GetBooster_10837e8(iVar4,0,4,0);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = System_Int64__ToString_2b6cd68(iVar4 + 0x28,0);
  Rotatelab_Scripts_ControllerFirebase__SetUserProperty_1061010(uVar6,uVar2,0);
  uVar6 = *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x3c);
  iVar4 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar8);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = Rotatelab_Currency_CurrencyManager__GetBooster_10837e8(iVar4,0,5,0);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = System_Int64__ToString_2b6cd68(iVar4 + 0x28,0);
  Rotatelab_Scripts_ControllerFirebase__SetUserProperty_1061010(uVar6,uVar2,0);
  uVar6 = *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x40);
  iVar4 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = System_Int64__ToString_2b6cd68(iVar4 + 0x78,0);
  Rotatelab_Scripts_ControllerFirebase__SetUserProperty_1061010(uVar6,uVar2,0);
  uVar6 = *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x1c);
  iVar4 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = System_Double__ToString_2b51bec(iVar4 + 200,0);
  Rotatelab_Scripts_ControllerFirebase__SetUserProperty_1061010(uVar6,uVar2,0);
  uVar6 = *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x20);
  iVar4 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = System_Double__ToString_2b51bec(iVar4 + 0xc0,0);
  Rotatelab_Scripts_ControllerFirebase__SetUserProperty_1061010(uVar6,uVar2,0);
  piVar1 = *(int **)(_UNK_00fda978 + 0xfda8bc);
  iVar4 = *piVar1;
  uVar6 = *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x48);
  if (*(int *)(iVar4 + 0x74) == 0) {
    FUN_00ec3934();
    iVar4 = *piVar1;
  }
  Rotatelab_Scripts_ControllerFirebase__SetUserProperty_1061010
            (uVar6,**(undefined4 **)(iVar4 + 0x5c),0);
  uVar6 = *(undefined4 *)(*(int *)(*piVar3 + 0x5c) + 0x44);
  iVar4 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar2 = System_Int64__ToString_2b6cd68(iVar4 + 0x70,0);
  Rotatelab_Scripts_ControllerFirebase__SetUserProperty_1061010(uVar6,uVar2,0);
  return;
}

