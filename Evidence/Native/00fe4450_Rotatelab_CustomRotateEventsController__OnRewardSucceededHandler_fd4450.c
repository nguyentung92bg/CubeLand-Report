/* IL2CPP: Rotatelab.CustomRotateEventsController$$OnRewardSucceededHandler
void Rotatelab_CustomRotateEventsController__OnRewardSucceededHandler (Rotatelab_CustomRotateEventsController_o* __this, MaxSdkBase_AdInfo_o* adInfo, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CustomRotateEventsController$$OnRewardSucceededHandler
   void Rotatelab_CustomRotateEventsController__OnRewardSucceededHandler
   (Rotatelab_CustomRotateEventsController_o* __this, MaxSdkBase_AdInfo_o* adInfo, const MethodInfo*
   method); */

void Rotatelab_CustomRotateEventsController__OnRewardSucceededHandler_fd4450
               (undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  undefined4 *puVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int *piVar8;
  int iStack_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  byte bStack_30;
  undefined4 uStack_2c;
  
  pcVar5 = (char *)(_UNK_00fe4b68 + 0xfe446c);
  if (*pcVar5 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe4b6c + 0xfe4480));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe4b70 + 0xfe448c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe4b74 + 0xfe4498));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe4b78 + 0xfe44a4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe4b7c + 0xfe44b0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe4b80 + 0xfe44bc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe4b84 + 0xfe44c8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe4b88 + 0xfe44d4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe4b8c + 0xfe44e0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe4b90 + 0xfe44ec));
    *pcVar5 = '\x01';
  }
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_00fe4b94 + 0xfe4504));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Scripts_LevelManager__GetAttemptInfo_106a51c(&iStack_48,iVar1,0);
  piVar2 = (int *)FUN_00ec388c(**(undefined4 **)(_UNK_00fe4b98 + 0xfe4564),10);
  piVar8 = *(int **)(_UNK_00fe4b9c + 0xfe4588);
  iVar1 = *piVar8;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar8;
  }
  puVar3 = *(undefined4 **)(_UNK_00fe4ba0 + 0xfe45ac);
  uVar6 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0xb0);
  iVar1 = thunk_FUN_00f00cdc(*puVar3);
  Firebase_Analytics_Parameter___ctor_11debc4(iVar1,uVar6,8,0,0);
  if (piVar2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if ((iVar1 != 0) &&
     (iVar4 = thunk_FUN_00f00bc8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar4 == 0)) {
    uVar6 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar6,0);
  }
  if (piVar2[3] == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar2[4] = iVar1;
  thunk_FUN_00ec5080(piVar2 + 4,iVar1);
  uVar6 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0xb4);
  iVar1 = thunk_FUN_00f00cdc(*puVar3);
  Firebase_Analytics_Parameter___ctor_11debc4(iVar1,uVar6,bStack_30 & 1,0,0);
  if ((iVar1 != 0) &&
     (iVar4 = thunk_FUN_00f00bc8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar4 == 0)) {
    uVar6 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar6,0);
  }
  if ((uint)piVar2[3] < 2) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar2[5] = iVar1;
  thunk_FUN_00ec5080(piVar2 + 5,iVar1);
  iVar1 = *piVar8;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar8;
  }
  uVar6 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x14);
  iVar1 = thunk_FUN_00f00cdc(*puVar3);
  Firebase_Analytics_Parameter___ctor_11debc4(iVar1,uVar6,uStack_40,uStack_3c,0);
  if ((iVar1 != 0) &&
     (iVar4 = thunk_FUN_00f00bc8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar4 == 0)) {
    uVar6 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar6,0);
  }
  if ((uint)piVar2[3] < 3) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar2[6] = iVar1;
  thunk_FUN_00ec5080(piVar2 + 6,iVar1);
  uVar6 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x18);
  iVar1 = thunk_FUN_00f00cdc(*puVar3);
  Firebase_Analytics_Parameter___ctor_11debc4(iVar1,uVar6,uStack_38,uStack_34,0);
  if ((iVar1 != 0) &&
     (iVar4 = thunk_FUN_00f00bc8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar4 == 0)) {
    uVar6 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar6,0);
  }
  if ((uint)piVar2[3] < 4) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar2[7] = iVar1;
  thunk_FUN_00ec5080(piVar2 + 7,iVar1);
  uVar6 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x20);
  if (iStack_48 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar4 = *(int *)(iStack_48 + 0xc);
  iVar1 = thunk_FUN_00f00cdc(*puVar3);
  Firebase_Analytics_Parameter___ctor_11debc4(iVar1,uVar6,iVar4,iVar4 >> 0x1f,0);
  if ((iVar1 != 0) &&
     (iVar4 = thunk_FUN_00f00bc8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar4 == 0)) {
    uVar6 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar6,0);
  }
  if ((uint)piVar2[3] < 5) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar2[8] = iVar1;
  thunk_FUN_00ec5080(piVar2 + 8,iVar1);
  uVar6 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x24);
  iVar1 = thunk_FUN_00f00cdc(*puVar3);
  Firebase_Analytics_Parameter___ctor_11deb88(iVar1,uVar6,uStack_2c,0);
  if ((iVar1 != 0) &&
     (iVar4 = thunk_FUN_00f00bc8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar4 == 0)) {
    uVar6 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar6,0);
  }
  if ((uint)piVar2[3] < 6) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar2[9] = iVar1;
  thunk_FUN_00ec5080(piVar2 + 9,iVar1);
  uVar7 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x28);
  uVar6 = UnityEngine_Object__get_name_36081bc(iStack_48,0);
  iVar1 = thunk_FUN_00f00cdc(*puVar3);
  Firebase_Analytics_Parameter___ctor_11deb88(iVar1,uVar7,uVar6,0);
  if ((iVar1 != 0) &&
     (iVar4 = thunk_FUN_00f00bc8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar4 == 0)) {
    uVar6 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar6,0);
  }
  if ((uint)piVar2[3] < 7) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar2[10] = iVar1;
  thunk_FUN_00ec5080(piVar2 + 10,iVar1);
  uVar6 = *(undefined4 *)(*(int *)(*piVar8 + 0x5c) + 0x1c);
  iVar1 = thunk_FUN_00f00cdc(*puVar3);
  Firebase_Analytics_Parameter___ctor_11debc4(iVar1,uVar6,iStack_44,iStack_44 >> 0x1f,0);
  if ((iVar1 != 0) &&
     (iVar4 = thunk_FUN_00f00bc8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar4 == 0)) {
    uVar6 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar6,0);
  }
  if ((uint)piVar2[3] < 8) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar2[0xb] = iVar1;
  thunk_FUN_00ec5080(piVar2 + 0xb,iVar1);
  if (param_2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar6 = *(undefined4 *)(param_2 + 8);
  iVar1 = thunk_FUN_00f00cdc(*puVar3);
  Firebase_Analytics_Parameter___ctor_11deb88
            (iVar1,**(undefined4 **)(_UNK_00fe4ba4 + 0xfe4a00),uVar6,0);
  if ((iVar1 != 0) &&
     (iVar4 = thunk_FUN_00f00bc8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar4 == 0)) {
    uVar6 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar6,0);
  }
  if ((uint)piVar2[3] < 9) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar2[0xc] = iVar1;
  thunk_FUN_00ec5080(piVar2 + 0xc,iVar1);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_00fe4ba8 + 0xfe4a60));
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar6 = Rotatelab_Ads_AdManager__get_CurrentNeftaModeName_10f5a1c(iVar1,0);
  iVar1 = thunk_FUN_00f00cdc(*puVar3);
  Firebase_Analytics_Parameter___ctor_11deb88
            (iVar1,**(undefined4 **)(_UNK_00fe4bac + 0xfe4aa4),uVar6,0);
  if ((iVar1 != 0) &&
     (iVar4 = thunk_FUN_00f00bc8(iVar1,*(undefined4 *)(*piVar2 + 0x20)), iVar4 == 0)) {
    uVar6 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar6,0);
  }
  if ((uint)piVar2[3] < 10) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar2[0xd] = iVar1;
  thunk_FUN_00ec5080(piVar2 + 0xd,iVar1);
  piVar8 = *(int **)(_UNK_00fe4bb0 + 0xfe4b04);
  iVar1 = *piVar8;
  if (*(int *)(iVar1 + 0x74) == 0) {
    FUN_00ec3934();
    iVar1 = *piVar8;
  }
  uVar6 = *(undefined4 *)(*(int *)(iVar1 + 0x5c) + 0x58);
  if (*(int *)(**(int **)(_UNK_00fe4bb4 + 0xfe4b24) + 0x74) == 0) {
    FUN_00ec3934(**(int **)(_UNK_00fe4bb4 + 0xfe4b24));
  }
  Rotatelab_Scripts_ControllerFirebase__SendEvent_1060a54(uVar6,piVar2,0);
  Rotatelab_CustomRotateEventsController__LogMessage_fc833c
            (*(undefined4 **)(_UNK_00fe4bb8 + 0xfe4b5c),**(undefined4 **)(_UNK_00fe4bb8 + 0xfe4b5c))
  ;
  return;
}

