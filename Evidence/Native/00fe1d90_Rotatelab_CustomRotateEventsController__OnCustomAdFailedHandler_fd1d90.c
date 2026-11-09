/* IL2CPP: Rotatelab.CustomRotateEventsController$$OnCustomAdFailedHandler
void Rotatelab_CustomRotateEventsController__OnCustomAdFailedHandler (Rotatelab_CustomRotateEventsController_o* __this, MaxSdkBase_AdInfo_o* adInfo, MaxSdkBase_ErrorInfo_o* errorInfo, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CustomRotateEventsController$$OnCustomAdFailedHandler
   void Rotatelab_CustomRotateEventsController__OnCustomAdFailedHandler
   (Rotatelab_CustomRotateEventsController_o* __this, MaxSdkBase_AdInfo_o* adInfo,
   MaxSdkBase_ErrorInfo_o* errorInfo, const MethodInfo* method); */

void Rotatelab_CustomRotateEventsController__OnCustomAdFailedHandler_fd1d90
               (undefined4 param_1,int param_2,int param_3)

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
  
  pcVar7 = (char *)(_UNK_00fe21d0 + 0xfe1db0);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe21d4 + 0xfe1dc4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe21d8 + 0xfe1dd0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe21dc + 0xfe1ddc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe21e0 + 0xfe1de8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe21e4 + 0xfe1df4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe21e8 + 0xfe1e00));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe21ec + 0xfe1e0c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe21f0 + 0xfe1e18));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe21f4 + 0xfe1e24));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe21f8 + 0xfe1e30));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe21fc + 0xfe1e3c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe2200 + 0xfe1e48));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe2204 + 0xfe1e54));
    *pcVar7 = '\x01';
  }
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar9 = *(undefined8 *)(param_2 + 0x20);
  piVar3 = (int *)FUN_00ec388c(**(undefined4 **)(_UNK_00fe2208 + 0xfe1e78),6);
  puVar8 = *(undefined4 **)(_UNK_00fe220c + 0xfe1e90);
  iVar4 = thunk_FUN_00f00cdc(*puVar8);
  Firebase_Analytics_Parameter___ctor_11deb88
            (iVar4,**(undefined4 **)(_UNK_00fe2210 + 0xfe1ea8),
             **(undefined4 **)(_UNK_00fe2214 + 0xfe1eb4),0);
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
  uVar6 = *(undefined4 *)(param_2 + 0xc);
  iVar4 = thunk_FUN_00f00cdc(*puVar8);
  Firebase_Analytics_Parameter___ctor_11deb88
            (iVar4,**(undefined4 **)(_UNK_00fe2218 + 0xfe1f38),uVar6,0);
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
  uVar6 = *(undefined4 *)(param_2 + 0x10);
  iVar4 = thunk_FUN_00f00cdc(*puVar8);
  Firebase_Analytics_Parameter___ctor_11deb88
            (iVar4,**(undefined4 **)(_UNK_00fe221c + 0xfe1fb0),uVar6,0);
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
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar6 = *(undefined4 *)(param_3 + 0xc);
  iVar4 = thunk_FUN_00f00cdc(*puVar8);
  Firebase_Analytics_Parameter___ctor_11deb88
            (iVar4,**(undefined4 **)(_UNK_00fe2220 + 0xfe2034),uVar6,0);
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
            (iVar4,**(undefined4 **)(_UNK_00fe2224 + 0xfe20a4),(int)uVar9,
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
            (iVar4,**(undefined4 **)(_UNK_00fe2228 + 0xfe211c),
             **(undefined4 **)(_UNK_00fe222c + 0xfe2128),0);
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
  if (*(int *)(**(int **)(_UNK_00fe2230 + 0xfe2188) + 0x74) == 0) {
    FUN_00ec3934();
  }
  Rotatelab_Scripts_ControllerFirebase__SendEvent_1060a54
            (**(undefined4 **)(_UNK_00fe2234 + 0xfe21ac),piVar3,0);
  Rotatelab_CustomRotateEventsController__LogMessage_fc833c
            (*(undefined4 **)(_UNK_00fe2238 + 0xfe21bc),**(undefined4 **)(_UNK_00fe2238 + 0xfe21bc))
  ;
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

