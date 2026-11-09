/* IL2CPP: Rotatelab.CustomRotateEventsController$$OnAdRevenuePaidBackground
void Rotatelab_CustomRotateEventsController__OnAdRevenuePaidBackground (Rotatelab_CustomRotateEventsController_o* __this, System_String_o* adUnitId, MaxSdkBase_AdInfo_o* adInfo, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Removing unreachable block (ram,0x010ff118) */
/* WARNING: Removing unreachable block (ram,0x010ff100) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CustomRotateEventsController$$OnAdRevenuePaidBackground
   void Rotatelab_CustomRotateEventsController__OnAdRevenuePaidBackground
   (Rotatelab_CustomRotateEventsController_o* __this, System_String_o* adUnitId,
   MaxSdkBase_AdInfo_o* adInfo, const MethodInfo* method); */

void Rotatelab_CustomRotateEventsController__OnAdRevenuePaidBackground_fd0c84
               (undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  int *piVar5;
  int *piVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined8 uVar9;
  
  pcVar4 = (char *)(_UNK_00fe13b4 + 0xfe0ca4);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe13b8 + 0xfe0cb8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe13bc + 0xfe0cc4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe13c0 + 0xfe0cd0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe13c4 + 0xfe0cdc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe13c8 + 0xfe0ce8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe13cc + 0xfe0cf4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe13d0 + 0xfe0d00));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe13d4 + 0xfe0d0c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe13d8 + 0xfe0d18));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe13dc + 0xfe0d24));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe13e0 + 0xfe0d30));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe13e4 + 0xfe0d3c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe13e8 + 0xfe0d48));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe13ec + 0xfe0d54));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe13f0 + 0xfe0d60));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe13f4 + 0xfe0d6c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe13f8 + 0xfe0d78));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe13fc + 0xfe0d84));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe1400 + 0xfe0d90));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe1404 + 0xfe0d9c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe1408 + 0xfe0da8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe140c + 0xfe0db4));
    *pcVar4 = '\x01';
  }
  iVar1 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fe1410 + 0xfe0dc8));
  System_Object___ctor_2bb93bc(iVar1,0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  *(undefined4 *)(iVar1 + 8) = param_1;
  thunk_FUN_00ec5080((undefined4 *)(iVar1 + 8),param_1);
  piVar6 = (int *)(iVar1 + 0xc);
  *piVar6 = param_3;
  thunk_FUN_00ec5080(piVar6,param_3);
  piVar5 = *(int **)(_UNK_00fe1414 + 0xfe0e14);
  iVar2 = *piVar5;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar5;
  }
  if (*(char *)(*(int *)(iVar2 + 0x5c) + 1) != '\0') {
    iVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fe1418 + 0xfe0e44));
    AdjustSdk_AdjustAdRevenue___ctor_f931d4(iVar2,**(undefined4 **)(_UNK_00fe141c + 0xfe0e5c),0);
    if (*piVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar9 = *(undefined8 *)(*piVar6 + 0x20);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    AdjustSdk_AdjustAdRevenue__SetRevenue_f931fc
              (iVar2,0,(int)uVar9,(int)((ulonglong)uVar9 >> 0x20),
               **(undefined4 **)(_UNK_00fe1420 + 0xfe0e98),0);
    if (*piVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar7 = *(undefined4 *)(*piVar6 + 0x10);
    if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    *(undefined4 *)(iVar2 + 0x34) = uVar7;
    thunk_FUN_00ec5080((undefined4 *)(iVar2 + 0x34),uVar7);
    if (*piVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    *(undefined4 *)(iVar2 + 0x38) = *(undefined4 *)(*piVar6 + 8);
    thunk_FUN_00ec5080();
    if (*piVar6 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    *(undefined4 *)(iVar2 + 0x3c) = *(undefined4 *)(*piVar6 + 0x18);
    thunk_FUN_00ec5080();
    AdjustSdk_Adjust__TrackAdRevenue_f8c928(iVar2,0);
  }
  piVar5 = (int *)FUN_00ec388c(**(undefined4 **)(_UNK_00fe1424 + 0xfe0f30),7);
  puVar8 = *(undefined4 **)(_UNK_00fe1428 + 0xfe0f44);
  iVar2 = thunk_FUN_00f00cdc(*puVar8);
  Firebase_Analytics_Parameter___ctor_11deb88
            (iVar2,**(undefined4 **)(_UNK_00fe142c + 0xfe0f5c),
             **(undefined4 **)(_UNK_00fe1430 + 0xfe0f68),0);
  if (piVar5 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if ((iVar2 != 0) &&
     (iVar3 = thunk_FUN_00f00bc8(iVar2,*(undefined4 *)(*piVar5 + 0x20)), iVar3 == 0)) {
    uVar7 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar7,0);
  }
  if (piVar5[3] == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar5[4] = iVar2;
  thunk_FUN_00ec5080(piVar5 + 4,iVar2);
  if (*piVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar7 = *(undefined4 *)(*piVar6 + 0x10);
  iVar2 = thunk_FUN_00f00cdc(*puVar8);
  Firebase_Analytics_Parameter___ctor_11deb88
            (iVar2,**(undefined4 **)(_UNK_00fe1434 + 0xfe0ffc),uVar7,0);
  if ((iVar2 != 0) &&
     (iVar3 = thunk_FUN_00f00bc8(iVar2,*(undefined4 *)(*piVar5 + 0x20)), iVar3 == 0)) {
    uVar7 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar7,0);
  }
  if ((uint)piVar5[3] < 2) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar5[5] = iVar2;
  thunk_FUN_00ec5080(piVar5 + 5,iVar2);
  if (*piVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar7 = *(undefined4 *)(*piVar6 + 8);
  iVar2 = thunk_FUN_00f00cdc(*puVar8);
  Firebase_Analytics_Parameter___ctor_11deb88
            (iVar2,**(undefined4 **)(_UNK_00fe1438 + 0xfe1084),uVar7,0);
  if ((iVar2 != 0) &&
     (iVar3 = thunk_FUN_00f00bc8(iVar2,*(undefined4 *)(*piVar5 + 0x20)), iVar3 == 0)) {
    uVar7 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar7,0);
  }
  if ((uint)piVar5[3] < 3) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar5[6] = iVar2;
  thunk_FUN_00ec5080(piVar5 + 6,iVar2);
  if (*piVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar7 = *(undefined4 *)(*piVar6 + 0xc);
  iVar2 = thunk_FUN_00f00cdc(*puVar8);
  Firebase_Analytics_Parameter___ctor_11deb88
            (iVar2,**(undefined4 **)(_UNK_00fe143c + 0xfe110c),uVar7,0);
  if ((iVar2 != 0) &&
     (iVar3 = thunk_FUN_00f00bc8(iVar2,*(undefined4 *)(*piVar5 + 0x20)), iVar3 == 0)) {
    uVar7 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar7,0);
  }
  if ((uint)piVar5[3] < 4) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar5[7] = iVar2;
  thunk_FUN_00ec5080(piVar5 + 7,iVar2);
  if (*piVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar9 = *(undefined8 *)(*piVar6 + 0x20);
  iVar2 = thunk_FUN_00f00cdc(*puVar8);
  Firebase_Analytics_Parameter___ctor_11dec2c
            (iVar2,**(undefined4 **)(_UNK_00fe1440 + 0xfe1190),(int)uVar9,
             (int)((ulonglong)uVar9 >> 0x20),0);
  if ((iVar2 != 0) &&
     (iVar3 = thunk_FUN_00f00bc8(iVar2,*(undefined4 *)(*piVar5 + 0x20)), iVar3 == 0)) {
    uVar7 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar7,0);
  }
  if ((uint)piVar5[3] < 5) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar5[8] = iVar2;
  thunk_FUN_00ec5080(piVar5 + 8,iVar2);
  iVar2 = thunk_FUN_00f00cdc(*puVar8);
  Firebase_Analytics_Parameter___ctor_11deb88
            (iVar2,**(undefined4 **)(_UNK_00fe1444 + 0xfe1208),
             **(undefined4 **)(_UNK_00fe1448 + 0xfe1214),0);
  if ((iVar2 != 0) &&
     (iVar3 = thunk_FUN_00f00bc8(iVar2,*(undefined4 *)(*piVar5 + 0x20)), iVar3 == 0)) {
    uVar7 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar7,0);
  }
  if ((uint)piVar5[3] < 6) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar5[9] = iVar2;
  thunk_FUN_00ec5080(piVar5 + 9,iVar2);
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_00fe144c + 0xfe1274));
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar7 = Rotatelab_Ads_AdManager__get_CurrentNeftaModeName_10f5a1c(iVar2,0);
  iVar2 = thunk_FUN_00f00cdc(*puVar8);
  Firebase_Analytics_Parameter___ctor_11deb88
            (iVar2,**(undefined4 **)(_UNK_00fe1450 + 0xfe12b8),uVar7,0);
  if ((iVar2 != 0) &&
     (iVar3 = thunk_FUN_00f00bc8(iVar2,*(undefined4 *)(*piVar5 + 0x20)), iVar3 == 0)) {
    uVar7 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar7,0);
  }
  if ((uint)piVar5[3] < 7) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar5[10] = iVar2;
  thunk_FUN_00ec5080(piVar5 + 10,iVar2);
  if (*(int *)(**(int **)(_UNK_00fe1454 + 0xfe1318) + 0x74) == 0) {
    FUN_00ec3934();
  }
  Rotatelab_Scripts_ControllerFirebase__SendEvent_1060a54
            (**(undefined4 **)(_UNK_00fe1458 + 0xfe133c),piVar5,0);
  Rotatelab_CustomRotateEventsController__LogMessage_fc833c
            (*(undefined4 **)(_UNK_00fe145c + 0xfe134c),**(undefined4 **)(_UNK_00fe145c + 0xfe134c))
  ;
  iVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_00fe1460 + 0xfe135c));
  System_Action___ctor_2b10bac(iVar2,iVar1,**(undefined4 **)(_UNK_00fe1464 + 0xfe1378),0);
  if (*(int *)(**(int **)(_UNK_00fe1468 + 0xfe138c) + 0x74) == 0) {
    FUN_00ec3934();
  }
  pcVar4 = (char *)(_UNK_010ff15c + 0x10ff020);
  if (*pcVar4 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ff160 + 0x10ff034),0);
    FUN_00ec37c0(*(undefined4 *)(_UNK_010ff164 + 0x10ff040));
    *pcVar4 = '\x01';
  }
  if (iVar2 != 0) {
    piVar5 = *(int **)(_UNK_010ff168 + 0x10ff068);
    iVar1 = *piVar5;
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      iVar1 = *piVar5;
    }
    System_Threading_Monitor__Enter_2bdfb90(**(undefined4 **)(iVar1 + 0x5c),&stack0xffffffe3,0);
    iVar1 = *piVar5;
    if (*(int *)(iVar1 + 0x74) == 0) {
      FUN_00ec3934();
      iVar1 = *piVar5;
    }
    if (**(int **)(iVar1 + 0x5c) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    System_Collections_Generic_Queue_object___Enqueue_18fca70
              (**(int **)(iVar1 + 0x5c),iVar2,**(undefined4 **)(_UNK_010ff16c + 0x10ff0e8));
  }
  return;
}

