/* IL2CPP: Rotatelab.CustomRotateEventsController$$OnLevelStartedHandler
void Rotatelab_CustomRotateEventsController__OnLevelStartedHandler (Rotatelab_CustomRotateEventsController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CustomRotateEventsController$$OnLevelStartedHandler
   void Rotatelab_CustomRotateEventsController__OnLevelStartedHandler
   (Rotatelab_CustomRotateEventsController_o* __this, const MethodInfo* method); */

void Rotatelab_CustomRotateEventsController__OnLevelStartedHandler_fc9820(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  char *pcVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  undefined8 uVar14;
  uint uStack_48;
  int iStack_44;
  undefined4 uStack_40;
  undefined4 uStack_2c;
  
  pcVar8 = (char *)(_UNK_00fda0cc + 0xfd9838);
  if (*pcVar8 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fda0d0 + 0xfd984c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fda0d4 + 0xfd9858));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fda0d8 + 0xfd9864));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fda0dc + 0xfd9870));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fda0e0 + 0xfd987c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fda0e4 + 0xfd9888));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fda0e8 + 0xfd9894));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fda0ec + 0xfd98a0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fda0f0 + 0xfd98ac));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fda0f4 + 0xfd98b8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fda0f8 + 0xfd98c4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fda0fc + 0xfd98d0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fda100 + 0xfd98dc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fda104 + 0xfd98e8));
    *pcVar8 = '\x01';
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fda108 + 0xfd9900));
  System_Object___ctor_2bb93bc(iVar1,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(int *)(iVar1 + 0x10) = param_1;
  thunk_FUN_00ec5080((int *)(iVar1 + 0x10),param_1);
  Rotatelab_CustomRotateEventsController__ResetLevelStats_fca180();
  Rotatelab_CustomRotateEventsController__SetUserProperties_fca284();
  *(undefined4 *)(param_1 + 0x10) = 0;
  puVar2 = *(undefined4 **)(_UNK_00fda10c + 0xfd9950);
  *(undefined1 *)(param_1 + 0x18) = 1;
  iVar3 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar2);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Scripts_LevelManager__GetAttemptInfo_106a51c(&uStack_48,iVar3,0);
  iVar3 = iStack_44;
  uVar13 = uStack_48;
  Rotatelab_CustomRotateEventsController__GetProgressInfo_fca97c(&uStack_48);
  piVar9 = *(int **)(_UNK_00fda110 + 0xfd99c8);
  *(int *)(iVar1 + 0x14) = iStack_44;
  iVar4 = *piVar9;
  iVar6 = *(int *)(iVar4 + 0x74);
  *(char *)(iVar1 + 0x18) = (char)(uStack_48 & 1);
  if ((uStack_48 & 1) == 0) {
    if (iVar6 == 0) {
      FUN_00ec3934();
      iVar4 = *piVar9;
    }
    puVar2 = (undefined4 *)(*(int *)(iVar4 + 0x5c) + 0x1c);
  }
  else {
    if (iVar6 == 0) {
      FUN_00ec3934();
      iVar4 = *piVar9;
    }
    puVar2 = (undefined4 *)(*(int *)(iVar4 + 0x5c) + 0x10);
  }
  *(undefined4 *)(iVar1 + 8) = *puVar2;
  thunk_FUN_00ec5080();
  iVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fda114 + 0xfd9a2c));
  System_Collections_Generic_List_object____ctor_267d274
            (iVar4,**(undefined4 **)(_UNK_00fda118 + 0xfd9a40));
  piVar9 = *(int **)(_UNK_00fda11c + 0xfd9a54);
  iVar6 = *piVar9;
  if (*(int *)(iVar6 + 0x74) == 0) {
    FUN_00ec3934();
    iVar6 = *piVar9;
  }
  uVar11 = *(undefined4 *)(*(int *)(iVar6 + 0x5c) + 0xb0);
  uVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fda120 + 0xfd9a7c));
  Firebase_Analytics_Parameter___ctor_11debc4(uVar5,uVar11,8,0,0);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar6 = *(int *)(iVar4 + 8);
  uVar12 = *(uint *)(iVar4 + 0xc);
  piVar7 = *(int **)(_UNK_00fda124 + 0xfd9ad0);
  *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + 1;
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar12 < *(uint *)(iVar6 + 0xc)) {
    *(uint *)(iVar4 + 0xc) = uVar12 + 1;
    puVar2 = (undefined4 *)(iVar6 + uVar12 * 4 + 0x10);
    *puVar2 = uVar5;
    thunk_FUN_00ec5080(puVar2,uVar5);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize_267dae0
              (iVar4,uVar5,*(undefined4 *)(*(int *)(*(int *)(*piVar7 + 0x10) + 0x60) + 0x38));
  }
  iVar6 = *(int *)(iVar1 + 0x14);
  uVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fda128 + 0xfd9b28));
  Firebase_Analytics_Parameter___ctor_11debc4(uVar5,uStack_40,iVar6,iVar6 >> 0x1f,0);
  iVar6 = *(int *)(iVar4 + 8);
  uVar12 = *(uint *)(iVar4 + 0xc);
  piVar7 = *(int **)(_UNK_00fda12c + 0xfd9b70);
  *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + 1;
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar12 < *(uint *)(iVar6 + 0xc)) {
    *(uint *)(iVar4 + 0xc) = uVar12 + 1;
    puVar2 = (undefined4 *)(iVar6 + uVar12 * 4 + 0x10);
    *puVar2 = uVar5;
    thunk_FUN_00ec5080(puVar2,uVar5);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize_267dae0
              (iVar4,uVar5,*(undefined4 *)(*(int *)(*(int *)(*piVar7 + 0x10) + 0x60) + 0x38));
  }
  uVar5 = *(undefined4 *)(*(int *)(*piVar9 + 0x5c) + 0x2c);
  iVar6 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_00fda130 + 0xfd9bd0));
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar11 = Rotatelab_Currency_CurrencyManager__get_Coins_1083318(iVar6,0);
  uVar14 = Rotatelab_ObservableLong__op_Implicit_fb4344(uVar11,0);
  uVar11 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fda134 + 0xfd9c14));
  Firebase_Analytics_Parameter___ctor_11debc4
            (uVar11,uVar5,(int)uVar14,(int)((ulonglong)uVar14 >> 0x20),0);
  iVar6 = *(int *)(iVar4 + 8);
  uVar12 = *(uint *)(iVar4 + 0xc);
  piVar7 = *(int **)(_UNK_00fda138 + 0xfd9c50);
  *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + 1;
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar12 < *(uint *)(iVar6 + 0xc)) {
    *(uint *)(iVar4 + 0xc) = uVar12 + 1;
    puVar2 = (undefined4 *)(iVar6 + uVar12 * 4 + 0x10);
    *puVar2 = uVar11;
    thunk_FUN_00ec5080(puVar2,uVar11);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize_267dae0
              (iVar4,uVar11,*(undefined4 *)(*(int *)(*(int *)(*piVar7 + 0x10) + 0x60) + 0x38));
  }
  uVar11 = *(undefined4 *)(*(int *)(*piVar9 + 0x5c) + 0x1c);
  uVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fda13c + 0xfd9cb4));
  Firebase_Analytics_Parameter___ctor_11debc4(uVar5,uVar11,iVar3,iVar3 >> 0x1f,0);
  iVar3 = *(int *)(iVar4 + 8);
  uVar12 = *(uint *)(iVar4 + 0xc);
  piVar7 = *(int **)(_UNK_00fda140 + 0xfd9cfc);
  *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + 1;
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar12 < *(uint *)(iVar3 + 0xc)) {
    *(uint *)(iVar4 + 0xc) = uVar12 + 1;
    puVar2 = (undefined4 *)(iVar3 + uVar12 * 4 + 0x10);
    *puVar2 = uVar5;
    thunk_FUN_00ec5080(puVar2,uVar5);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize_267dae0
              (iVar4,uVar5,*(undefined4 *)(*(int *)(*(int *)(*piVar7 + 0x10) + 0x60) + 0x38));
  }
  uVar5 = *(undefined4 *)(*(int *)(*piVar9 + 0x5c) + 0x20);
  if (uVar13 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar3 = *(int *)(uVar13 + 0xc);
  uVar11 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fda144 + 0xfd9d6c));
  Firebase_Analytics_Parameter___ctor_11debc4(uVar11,uVar5,iVar3,iVar3 >> 0x1f,0);
  iVar3 = *(int *)(iVar4 + 8);
  uVar12 = *(uint *)(iVar4 + 0xc);
  piVar7 = *(int **)(_UNK_00fda148 + 0xfd9db4);
  *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + 1;
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar12 < *(uint *)(iVar3 + 0xc)) {
    *(uint *)(iVar4 + 0xc) = uVar12 + 1;
    puVar2 = (undefined4 *)(iVar3 + uVar12 * 4 + 0x10);
    *puVar2 = uVar11;
    thunk_FUN_00ec5080(puVar2,uVar11);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize_267dae0
              (iVar4,uVar11,*(undefined4 *)(*(int *)(*(int *)(*piVar7 + 0x10) + 0x60) + 0x38));
  }
  uVar5 = *(undefined4 *)(*(int *)(*piVar9 + 0x5c) + 0x34);
  iVar3 = **(int **)(_UNK_00fda150 + 0xfd9e28);
  if (*(int *)(uVar13 + 0x10) != 0) {
    iVar3 = *(int *)(uVar13 + 0x10);
  }
  uVar11 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fda14c + 0xfd9e10));
  Firebase_Analytics_Parameter___ctor_11deb88(uVar11,uVar5,iVar3,0);
  iVar3 = *(int *)(iVar4 + 8);
  uVar12 = *(uint *)(iVar4 + 0xc);
  piVar7 = *(int **)(_UNK_00fda154 + 0xfd9e68);
  *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + 1;
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar12 < *(uint *)(iVar3 + 0xc)) {
    *(uint *)(iVar4 + 0xc) = uVar12 + 1;
    puVar2 = (undefined4 *)(iVar3 + uVar12 * 4 + 0x10);
    *puVar2 = uVar11;
    thunk_FUN_00ec5080(puVar2,uVar11);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize_267dae0
              (iVar4,uVar11,*(undefined4 *)(*(int *)(*(int *)(*piVar7 + 0x10) + 0x60) + 0x38));
  }
  iVar3 = *piVar9;
  if (*(int *)(iVar3 + 0x74) == 0) {
    FUN_00ec3934();
    iVar3 = *piVar9;
  }
  uVar11 = *(undefined4 *)(*(int *)(iVar3 + 0x5c) + 0x24);
  uVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fda158 + 0xfd9edc));
  Firebase_Analytics_Parameter___ctor_11deb88(uVar5,uVar11,uStack_2c,0);
  iVar3 = *(int *)(iVar4 + 8);
  uVar12 = *(uint *)(iVar4 + 0xc);
  piVar7 = *(int **)(_UNK_00fda15c + 0xfd9f18);
  *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + 1;
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar12 < *(uint *)(iVar3 + 0xc)) {
    *(uint *)(iVar4 + 0xc) = uVar12 + 1;
    puVar2 = (undefined4 *)(iVar3 + uVar12 * 4 + 0x10);
    *puVar2 = uVar5;
    thunk_FUN_00ec5080(puVar2,uVar5);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize_267dae0
              (iVar4,uVar5,*(undefined4 *)(*(int *)(*(int *)(*piVar7 + 0x10) + 0x60) + 0x38));
  }
  uVar10 = *(undefined4 *)(*(int *)(*piVar9 + 0x5c) + 0x28);
  uVar5 = UnityEngine_Object__get_name_36081bc(uVar13,0);
  uVar11 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fda160 + 0xfd9f8c));
  Firebase_Analytics_Parameter___ctor_11deb88(uVar11,uVar10,uVar5,0);
  iVar3 = *(int *)(iVar4 + 8);
  uVar13 = *(uint *)(iVar4 + 0xc);
  piVar9 = *(int **)(_UNK_00fda164 + 0xfd9fc4);
  *(int *)(iVar4 + 0x10) = *(int *)(iVar4 + 0x10) + 1;
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (uVar13 < *(uint *)(iVar3 + 0xc)) {
    *(uint *)(iVar4 + 0xc) = uVar13 + 1;
    puVar2 = (undefined4 *)(iVar3 + uVar13 * 4 + 0x10);
    *puVar2 = uVar11;
    thunk_FUN_00ec5080(puVar2,uVar11);
  }
  else {
    System_Collections_Generic_List_object___AddWithResize_267dae0
              (iVar4,uVar11,*(undefined4 *)(*(int *)(*(int *)(*piVar9 + 0x10) + 0x60) + 0x38));
  }
  *(int *)(iVar1 + 0xc) = iVar4;
  thunk_FUN_00ec5080((int *)(iVar1 + 0xc),iVar4);
  uVar5 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fda168 + 0xfda02c));
  DG_Tweening_TweenCallback___ctor_11657e8
            (uVar5,iVar1,**(undefined4 **)(_UNK_00fda16c + 0xfda048),0);
  DG_Tweening_DOVirtual__DelayedCall_11685c0(0x3f000000,uVar5,1,0);
  iVar1 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_00fda170 + 0xfda070));
  if (*(int *)(**(int **)(_UNK_00fda174 + 0xfda084) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar5 = Rotatelab_Scripts_LevelManager__get_LevelNumber_1065d14(0);
  uVar5 = Rotatelab_ObservableLong__op_Implicit_fa4ff4(uVar5,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  Rotatelab_Ads_AdManager__LevelStarted_10f65dc(iVar1,uVar5,0);
  return;
}

