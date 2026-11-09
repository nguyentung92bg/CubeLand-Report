/* IL2CPP: Rotatelab.CustomRotateEventsController$$SetUserProperties
void Rotatelab_CustomRotateEventsController__SetUserProperties (Rotatelab_CustomRotateEventsController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CustomRotateEventsController$$SetUserProperties
   void Rotatelab_CustomRotateEventsController__SetUserProperties
   (Rotatelab_CustomRotateEventsController_o* __this, const MethodInfo* method); */

void Rotatelab_CustomRotateEventsController__SetUserProperties_fca284(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  char *pcVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined1 uStack_19;
  
  pcVar4 = (char *)(_UNK_00fda934 + 0xfda298);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fda938 + 0xfda2ac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fda93c + 0xfda2b8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fda940 + 0xfda2c4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fda944 + 0xfda2d0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fda948 + 0xfda2dc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fda94c + 0xfda2e8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fda950 + 0xfda2f4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fda954 + 0xfda300));
    *pcVar4 = '\x01';
  }
  piVar6 = *(int **)(_UNK_00fda958 + 0xfda318);
  uStack_19 = 0;
  iVar1 = *piVar6;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar6;
  }
  puVar7 = *(undefined4 **)(_UNK_00fda95c + 0xfda340);
  uVar5 = **(undefined4 **)(iVar1 + 0x5c);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar7);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  piVar2 = (int *)Rotatelab_Currency_CurrencyManager__get_Coins_1083318(iVar1,0);
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar3 = (**(code **)(*piVar2 + 0xd8))(piVar2,*(undefined4 *)(*piVar2 + 0xdc));
  if (*(int *)(**(int **)(_UNK_00fda960 + 0xfda398) + 0x74) == 0) {
    FUN_00ec3934();
  }
  Rotatelab_Scripts_ControllerFirebase__SetUserProperty_1061010(uVar5,uVar3,0);
  uVar5 = *(undefined4 *)(*(int *)(*piVar6 + 0x5c) + 0xc);
  if (*(int *)(**(int **)(_UNK_00fda964 + 0xfda3c8) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uStack_20 = UnityEngine_Application__get_internetReachability_35a8364(0);
  uStack_24 = 0xffffffff;
  uStack_28 = **(undefined4 **)(_UNK_00fda968 + 0xfda3f4);
  uVar3 = System_Enum__ToString_2bab8c0(&uStack_28,0);
  Rotatelab_Scripts_ControllerFirebase__SetUserProperty_1061010(uVar5,uVar3,0);
  uVar5 = *(undefined4 *)(*(int *)(*piVar6 + 0x5c) + 0x4c);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_00fda96c + 0xfda434));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uStack_19 = *(undefined1 *)(iVar1 + 0x28);
  if (*(int *)(*(int *)(*(int *)(_UNK_00fda970 + 0xfda458) + 0x14) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar3 = System_Boolean__ToString_2b14940(&uStack_19,0);
  Rotatelab_Scripts_ControllerFirebase__SetUserProperty_1061010(uVar5,uVar3,0);
  uVar5 = *(undefined4 *)(*(int *)(*piVar6 + 0x5c) + 0x14);
  if (*(int *)(**(int **)(_UNK_00fda974 + 0xfda49c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  piVar2 = (int *)Rotatelab_Scripts_LevelManager__get_LevelNumber_1065d14(0);
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar3 = (**(code **)(*piVar2 + 0xd8))(piVar2,*(undefined4 *)(*piVar2 + 0xdc));
  Rotatelab_Scripts_ControllerFirebase__SetUserProperty_1061010(uVar5,uVar3,0);
  uVar5 = *(undefined4 *)(*(int *)(*piVar6 + 0x5c) + 0x18);
  piVar2 = (int *)Rotatelab_Scripts_LevelManager__get_RoundNumber_1067e18(0);
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar3 = (**(code **)(*piVar2 + 0xd8))(piVar2,*(undefined4 *)(*piVar2 + 0xdc));
  Rotatelab_Scripts_ControllerFirebase__SetUserProperty_1061010(uVar5,uVar3,0);
  uVar5 = *(undefined4 *)(*(int *)(*piVar6 + 0x5c) + 0x10);
  iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar3 = System_Int64__ToString_2b6cd68(iVar1 + 0x68,0);
  Rotatelab_Scripts_ControllerFirebase__SetUserProperty_1061010(uVar5,uVar3,0);
  uVar5 = *(undefined4 *)(*(int *)(*piVar6 + 0x5c) + 4);
  iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar3 = System_Int64__ToString_2b6cd68(iVar1 + 0xd0,0);
  Rotatelab_Scripts_ControllerFirebase__SetUserProperty_1061010(uVar5,uVar3,0);
  uVar5 = *(undefined4 *)(*(int *)(*piVar6 + 0x5c) + 8);
  iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar3 = System_Int64__ToString_2b6cd68(iVar1 + 0xd8,0);
  Rotatelab_Scripts_ControllerFirebase__SetUserProperty_1061010(uVar5,uVar3,0);
  uVar5 = *(undefined4 *)(*(int *)(*piVar6 + 0x5c) + 0x2c);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar7);
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
  Rotatelab_Scripts_ControllerFirebase__SetUserProperty_1061010(uVar5,uVar3,0);
  uVar5 = *(undefined4 *)(*(int *)(*piVar6 + 0x5c) + 0x30);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar7);
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
  Rotatelab_Scripts_ControllerFirebase__SetUserProperty_1061010(uVar5,uVar3,0);
  uVar5 = *(undefined4 *)(*(int *)(*piVar6 + 0x5c) + 0x34);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar7);
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
  Rotatelab_Scripts_ControllerFirebase__SetUserProperty_1061010(uVar5,uVar3,0);
  uVar5 = *(undefined4 *)(*(int *)(*piVar6 + 0x5c) + 0x38);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar7);
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
  Rotatelab_Scripts_ControllerFirebase__SetUserProperty_1061010(uVar5,uVar3,0);
  uVar5 = *(undefined4 *)(*(int *)(*piVar6 + 0x5c) + 0x3c);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar7);
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
  Rotatelab_Scripts_ControllerFirebase__SetUserProperty_1061010(uVar5,uVar3,0);
  uVar5 = *(undefined4 *)(*(int *)(*piVar6 + 0x5c) + 0x40);
  iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar3 = System_Int64__ToString_2b6cd68(iVar1 + 0x78,0);
  Rotatelab_Scripts_ControllerFirebase__SetUserProperty_1061010(uVar5,uVar3,0);
  uVar5 = *(undefined4 *)(*(int *)(*piVar6 + 0x5c) + 0x1c);
  iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar3 = System_Double__ToString_2b51bec(iVar1 + 200,0);
  Rotatelab_Scripts_ControllerFirebase__SetUserProperty_1061010(uVar5,uVar3,0);
  uVar5 = *(undefined4 *)(*(int *)(*piVar6 + 0x5c) + 0x20);
  iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar3 = System_Double__ToString_2b51bec(iVar1 + 0xc0,0);
  Rotatelab_Scripts_ControllerFirebase__SetUserProperty_1061010(uVar5,uVar3,0);
  piVar2 = *(int **)(_UNK_00fda978 + 0xfda8bc);
  iVar1 = *piVar2;
  uVar5 = *(undefined4 *)(*(int *)(*piVar6 + 0x5c) + 0x48);
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar2;
  }
  Rotatelab_Scripts_ControllerFirebase__SetUserProperty_1061010
            (uVar5,**(undefined4 **)(iVar1 + 0x5c),0);
  uVar5 = *(undefined4 *)(*(int *)(*piVar6 + 0x5c) + 0x44);
  iVar1 = Rotatelab_Networking_CloudSaveData__get_Instance_1140b84(0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar3 = System_Int64__ToString_2b6cd68(iVar1 + 0x70,0);
  Rotatelab_Scripts_ControllerFirebase__SetUserProperty_1061010(uVar5,uVar3,0);
  return;
}

