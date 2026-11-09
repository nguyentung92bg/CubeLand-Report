/* IL2CPP: Rotatelab.CustomRotateEventsController$$OnSatoriFlagsRefreshedHandler
void Rotatelab_CustomRotateEventsController__OnSatoriFlagsRefreshedHandler (Rotatelab_CustomRotateEventsController_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.CustomRotateEventsController$$OnSatoriFlagsRefreshedHandler
   void Rotatelab_CustomRotateEventsController__OnSatoriFlagsRefreshedHandler
   (Rotatelab_CustomRotateEventsController_o* __this, const MethodInfo* method); */

void Rotatelab_CustomRotateEventsController__OnSatoriFlagsRefreshedHandler_fd4bbc(void)

{
  short sVar1;
  int iVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  char *pcVar7;
  int *piVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined8 uVar14;
  int *piStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  int *piStack_2c;
  undefined4 uStack_28;
  
  pcVar7 = (char *)(_UNK_00fe5530 + 0xfe4bd0);
  if (*pcVar7 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe5534 + 0xfe4be4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe5538 + 0xfe4bf0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe553c + 0xfe4bfc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe5540 + 0xfe4c08));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe5544 + 0xfe4c14));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe5548 + 0xfe4c20));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe554c + 0xfe4c2c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe5550 + 0xfe4c38));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe5554 + 0xfe4c44));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe5558 + 0xfe4c50));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe555c + 0xfe4c5c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe5560 + 0xfe4c68));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe5564 + 0xfe4c74));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe5568 + 0xfe4c80));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe556c + 0xfe4c8c));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe5570 + 0xfe4c98));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe5574 + 0xfe4ca4));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe5578 + 0xfe4cb0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe557c + 0xfe4cbc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe5580 + 0xfe4cc8));
    FUN_00ec37c0(*(undefined4 *)(_UNK_00fe5584 + 0xfe4cd4));
    *pcVar7 = '\x01';
  }
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                    (**(undefined4 **)(_UNK_00fe5588 + 0xfe4ce8));
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar12 = *(int *)(iVar2 + 0x34);
  piVar3 = (int *)FUN_00ec388c(**(undefined4 **)(_UNK_00fe558c + 0xfe4d0c),0xb);
  piVar8 = *(int **)(_UNK_00fe5590 + 0xfe4d24);
  iVar2 = *piVar8;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar8;
  }
  uVar10 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x14);
  if (*(int *)(**(int **)(_UNK_00fe5594 + 0xfe4d44) + 0x74) == 0) {
    FUN_00ec3934(**(int **)(_UNK_00fe5594 + 0xfe4d44));
  }
  uVar4 = Rotatelab_Scripts_LevelManager__get_LevelNumber_1065d14(0);
  uVar14 = Rotatelab_ObservableLong__op_Implicit_fb4344(uVar4,0);
  puVar11 = *(undefined4 **)(_UNK_00fe5598 + 0xfe4d88);
  iVar2 = thunk_FUN_00f00cdc(*puVar11);
  uStack_30 = 0;
  Firebase_Analytics_Parameter___ctor_11debc4
            (iVar2,uVar10,(int)uVar14,(int)((ulonglong)uVar14 >> 0x20));
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if ((iVar2 != 0) &&
     (iVar5 = thunk_FUN_00f00bc8(iVar2,*(undefined4 *)(*piVar3 + 0x20)), iVar5 == 0)) {
    uVar10 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar10,0);
  }
  if (piVar3[3] == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar3[4] = iVar2;
  thunk_FUN_00ec5080(piVar3 + 4,iVar2);
  if (iVar12 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  if (*(int *)(iVar12 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar5 = *(int *)(*(int *)(iVar12 + 0xc) + 8);
  iVar2 = thunk_FUN_00f00cdc(*puVar11);
  uStack_30 = 0;
  Firebase_Analytics_Parameter___ctor_11debc4
            (iVar2,**(undefined4 **)(_UNK_00fe559c + 0xfe4e3c),iVar5,iVar5 >> 0x1f);
  if ((iVar2 != 0) &&
     (iVar5 = thunk_FUN_00f00bc8(iVar2,*(undefined4 *)(*piVar3 + 0x20)), iVar5 == 0)) {
    uVar10 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar10,0);
  }
  if ((uint)piVar3[3] < 2) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar3[5] = iVar2;
  thunk_FUN_00ec5080(piVar3 + 5,iVar2);
  if (*(int *)(iVar12 + 0x10) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar5 = *(int *)(*(int *)(iVar12 + 0x10) + 8);
  iVar2 = thunk_FUN_00f00cdc(*puVar11);
  uStack_30 = 0;
  Firebase_Analytics_Parameter___ctor_11debc4
            (iVar2,**(undefined4 **)(_UNK_00fe55a0 + 0xfe4ecc),iVar5,iVar5 >> 0x1f);
  if ((iVar2 != 0) &&
     (iVar5 = thunk_FUN_00f00bc8(iVar2,*(undefined4 *)(*piVar3 + 0x20)), iVar5 == 0)) {
    uVar10 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar10,0);
  }
  if ((uint)piVar3[3] < 3) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar3[6] = iVar2;
  thunk_FUN_00ec5080(piVar3 + 6,iVar2);
  iVar2 = *(int *)(iVar12 + 0x10);
  uVar10 = Rotatelab_Scripts_LevelManager__get_LevelNumber_1065d14(0);
  uVar14 = Rotatelab_ObservableLong__op_Implicit_fb4344(uVar10,0);
  uVar10 = (undefined4)((ulonglong)uVar14 >> 0x20);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uStack_30 = 0;
  iVar2 = Rotatelab_Networking_SatoriAdsConfigFlag_InterstitialConfig__GetTimerSeconds_fe719c
                    (iVar2,uVar10,(int)uVar14,uVar10);
  iVar5 = thunk_FUN_00f00cdc(*puVar11);
  uStack_30 = 0;
  Firebase_Analytics_Parameter___ctor_11debc4
            (iVar5,**(undefined4 **)(_UNK_00fe55a4 + 0xfe4f8c),iVar2,iVar2 >> 0x1f);
  if ((iVar5 != 0) &&
     (iVar2 = thunk_FUN_00f00bc8(iVar5,*(undefined4 *)(*piVar3 + 0x20)), iVar2 == 0)) {
    uVar10 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar10,0);
  }
  if ((uint)piVar3[3] < 4) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar3[7] = iVar5;
  thunk_FUN_00ec5080(piVar3 + 7,iVar5);
  iVar2 = *(int *)(iVar12 + 0x14);
  uVar10 = Rotatelab_Scripts_LevelManager__get_LevelNumber_1065d14(0);
  uVar14 = Rotatelab_ObservableLong__op_Implicit_fb4344(uVar10,0);
  uVar10 = (undefined4)((ulonglong)uVar14 >> 0x20);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uStack_30 = 0;
  iVar2 = Rotatelab_Networking_SatoriAdsConfigFlag_RewardedConfig__GetDailyCap_fe7244
                    (iVar2,uVar10,(int)uVar14,uVar10);
  iVar5 = thunk_FUN_00f00cdc(*puVar11);
  uStack_30 = 0;
  Firebase_Analytics_Parameter___ctor_11debc4
            (iVar5,**(undefined4 **)(_UNK_00fe55a8 + 0xfe5048),iVar2,iVar2 >> 0x1f);
  if ((iVar5 != 0) &&
     (iVar2 = thunk_FUN_00f00bc8(iVar5,*(undefined4 *)(*piVar3 + 0x20)), iVar2 == 0)) {
    uVar10 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar10,0);
  }
  if ((uint)piVar3[3] < 5) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar3[8] = iVar5;
  thunk_FUN_00ec5080(piVar3 + 8,iVar5);
  if (*(int *)(iVar12 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar5 = *(int *)(*(int *)(iVar12 + 0x14) + 0xc);
  iVar2 = thunk_FUN_00f00cdc(*puVar11);
  uStack_30 = 0;
  Firebase_Analytics_Parameter___ctor_11debc4
            (iVar2,**(undefined4 **)(_UNK_00fe55ac + 0xfe50d4),iVar5,iVar5 >> 0x1f);
  if ((iVar2 != 0) &&
     (iVar5 = thunk_FUN_00f00bc8(iVar2,*(undefined4 *)(*piVar3 + 0x20)), iVar5 == 0)) {
    uVar10 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar10,0);
  }
  if ((uint)piVar3[3] < 6) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar3[9] = iVar2;
  thunk_FUN_00ec5080(piVar3 + 9,iVar2);
  if (*(int *)(iVar12 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = *(int *)(*(int *)(iVar12 + 0x14) + 0x14);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar5 = *(int *)(iVar2 + 8);
  iVar2 = thunk_FUN_00f00cdc(*puVar11);
  uStack_30 = 0;
  Firebase_Analytics_Parameter___ctor_11debc4
            (iVar2,**(undefined4 **)(_UNK_00fe55b0 + 0xfe5174),iVar5,iVar5 >> 0x1f);
  if ((iVar2 != 0) &&
     (iVar5 = thunk_FUN_00f00bc8(iVar2,*(undefined4 *)(*piVar3 + 0x20)), iVar5 == 0)) {
    uVar10 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar10,0);
  }
  if ((uint)piVar3[3] < 7) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar3[10] = iVar2;
  thunk_FUN_00ec5080(piVar3 + 10,iVar2);
  if (*(int *)(iVar12 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = *(int *)(*(int *)(iVar12 + 0x14) + 0x14);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar5 = *(int *)(iVar2 + 0xc);
  iVar2 = thunk_FUN_00f00cdc(*puVar11);
  uStack_30 = 0;
  Firebase_Analytics_Parameter___ctor_11debc4
            (iVar2,**(undefined4 **)(_UNK_00fe55b4 + 0xfe5214),iVar5,iVar5 >> 0x1f);
  if ((iVar2 != 0) &&
     (iVar5 = thunk_FUN_00f00bc8(iVar2,*(undefined4 *)(*piVar3 + 0x20)), iVar5 == 0)) {
    uVar10 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar10,0);
  }
  if ((uint)piVar3[3] < 8) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar3[0xb] = iVar2;
  thunk_FUN_00ec5080(piVar3 + 0xb,iVar2);
  if (*(int *)(iVar12 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = *(int *)(*(int *)(iVar12 + 0x14) + 0x14);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar5 = *(int *)(iVar2 + 0x10);
  iVar2 = thunk_FUN_00f00cdc(*puVar11);
  uStack_30 = 0;
  Firebase_Analytics_Parameter___ctor_11debc4
            (iVar2,**(undefined4 **)(_UNK_00fe55b8 + 0xfe52b4),iVar5,iVar5 >> 0x1f);
  if ((iVar2 != 0) &&
     (iVar5 = thunk_FUN_00f00bc8(iVar2,*(undefined4 *)(*piVar3 + 0x20)), iVar5 == 0)) {
    uVar10 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar10,0);
  }
  if ((uint)piVar3[3] < 9) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar3[0xc] = iVar2;
  thunk_FUN_00ec5080(piVar3 + 0xc,iVar2);
  if (*(int *)(iVar12 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar2 = *(int *)(*(int *)(iVar12 + 0x14) + 0x14);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar12 = *(int *)(iVar2 + 0x14);
  iVar2 = thunk_FUN_00f00cdc(*puVar11);
  uStack_30 = 0;
  Firebase_Analytics_Parameter___ctor_11debc4
            (iVar2,**(undefined4 **)(_UNK_00fe55bc + 0xfe5354),iVar12,iVar12 >> 0x1f);
  if ((iVar2 != 0) &&
     (iVar12 = thunk_FUN_00f00bc8(iVar2,*(undefined4 *)(*piVar3 + 0x20)), iVar12 == 0)) {
    uVar10 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar10,0);
  }
  if ((uint)piVar3[3] < 10) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar3[0xd] = iVar2;
  thunk_FUN_00ec5080(piVar3 + 0xd,iVar2);
  puVar13 = *(undefined4 **)(_UNK_00fe55c0 + 0xfe53bc);
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar13);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  uVar10 = **(undefined4 **)(_UNK_00fe55c4 + 0xfe53dc);
  piVar8 = *(int **)(_UNK_00fe55c8 + 0xfe53f4);
  iVar12 = *piVar8;
  if (*(int *)(iVar2 + 0x14) != 0) {
    iVar12 = *(int *)(iVar2 + 0x14);
  }
  iVar2 = thunk_FUN_00f00cdc(*puVar11);
  Firebase_Analytics_Parameter___ctor_11deb88(iVar2,uVar10,iVar12,0);
  if ((iVar2 != 0) &&
     (iVar12 = thunk_FUN_00f00bc8(iVar2,*(undefined4 *)(*piVar3 + 0x20)), iVar12 == 0)) {
    uVar10 = thunk_FUN_00f08b98();
    func_0x00ec3920(uVar10,0);
  }
  if ((uint)piVar3[3] < 0xb) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f07924();
  }
  piVar3[0xe] = iVar2;
  thunk_FUN_00ec5080(piVar3 + 0xe,iVar2);
  piVar9 = *(int **)(_UNK_00fe55cc + 0xfe5468);
  if (*(int *)(*piVar9 + 0x74) == 0) {
    FUN_00ec3934();
  }
  Rotatelab_Scripts_ControllerFirebase__SendEvent_1060a54
            (**(undefined4 **)(_UNK_00fe55d0 + 0xfe548c),piVar3,0);
  Rotatelab_CustomRotateEventsController__LogMessage_fc833c
            (*(undefined4 **)(_UNK_00fe55d4 + 0xfe549c),**(undefined4 **)(_UNK_00fe55d4 + 0xfe549c))
  ;
  piVar3 = *(int **)(_UNK_00fe55d8 + 0xfe54ac);
  iVar2 = *piVar3;
  if (*(int *)(iVar2 + 0x74) == 0) {
    FUN_00ec3934();
    iVar2 = *piVar3;
  }
  uVar10 = *(undefined4 *)(*(int *)(iVar2 + 0x5c) + 0x54);
  iVar2 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858(*puVar13);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    thunk_FUN_00f078d4();
  }
  iVar12 = *piVar8;
  iVar2 = *(int *)(iVar2 + 0x14);
  if (*(int *)(*piVar9 + 0x74) == 0) {
    FUN_00ec3934();
  }
  if (iVar2 != 0) {
    iVar12 = iVar2;
  }
  Rotatelab_Scripts_ControllerFirebase__SetUserProperty_1061010(uVar10,iVar12,0);
  Rotatelab_CustomRotateEventsController__SetCampaignUserPropertyAsync_fd55dc(&piStack_2c);
  uVar10 = uStack_28;
  pcVar7 = (char *)(_UNK_0322e2a4 + 0x322dea4);
  if (*pcVar7 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0322e2a8 + 0x322deb8),uStack_28,0);
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0322e2ac + 0x322dec4));
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0322e2b0 + 0x322ded0));
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0322e2b4 + 0x322dedc));
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0322e2b8 + 0x322dee8));
    *pcVar7 = '\x01';
  }
  piVar3 = *(int **)(_UNK_0322e2bc + 0x322df00);
  uStack_28 = 0;
  if (*(int *)(*piVar3 + 0x74) == 0) {
    thunk_FUN_00ec3934();
  }
  uStack_34 = uVar10;
  piStack_38 = piStack_2c;
  thunk_FUN_00ec5080(&piStack_38,0);
  uVar10 = uStack_34;
  piVar8 = piStack_38;
  pcVar7 = (char *)(_UNK_0322e2c0 + 0x322df38);
  if (*pcVar7 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0322e2c4 + 0x322df50));
    *pcVar7 = '\x01';
  }
  if (*(int *)(*piVar3 + 0x74) == 0) {
    thunk_FUN_00ec3934();
  }
  pcVar7 = (char *)(_UNK_0322e2c8 + 0x322df78);
  if (*pcVar7 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0322e2cc + 0x322df8c));
    *pcVar7 = '\x01';
  }
  sVar1 = (short)uVar10;
  if (piVar8 != (int *)0x0) {
    iVar2 = *piVar8;
    piVar3 = *(int **)(_UNK_0322e2d0 + 0x322dfac);
    uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
    iVar12 = *piVar3;
    if (uVar6 != 0) {
      piVar9 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar9[-1] == iVar12) {
          puVar11 = (undefined4 *)(iVar2 + *piVar9 * 8 + 0xc0);
          goto LAB_0322dff4;
        }
        uVar6 = uVar6 - 1;
        piVar9 = piVar9 + 2;
      } while (uVar6 != 0);
    }
    puVar11 = (undefined4 *)thunk_FUN_00efdb38(piVar8,iVar12,0);
LAB_0322dff4:
    iVar2 = (*(code *)*puVar11)(piVar8,(int)sVar1,puVar11[1]);
    if (iVar2 == 0) {
      piVar9 = *(int **)(_UNK_0322e2e8 + 0x322e0a0);
      iVar2 = *piVar9;
      if (*(int *)(iVar2 + 0x74) == 0) {
        thunk_FUN_00ec3934();
        iVar2 = *piVar9;
      }
      puVar11 = *(undefined4 **)(iVar2 + 0x5c);
      iVar12 = puVar11[2];
      if (iVar12 == 0) {
        if (*(int *)(iVar2 + 0x74) == 0) {
          thunk_FUN_00ec3934();
          puVar11 = *(undefined4 **)(*piVar9 + 0x5c);
        }
        uVar4 = *puVar11;
        iVar12 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_0322e2ec + 0x322e0e8));
        System_Action_object____ctor_1f11414
                  (iVar12,uVar4,**(undefined4 **)(_UNK_0322e2f0 + 0x322e108),0);
        piVar9 = (int *)(*(int *)(*piVar9 + 0x5c) + 8);
        *piVar9 = iVar12;
        thunk_FUN_00ec5080(piVar9,iVar12);
      }
      uVar10 = Cysharp_Threading_Tasks_Internal_StateTuple__Create_UniTask_Awaiter__15bd574
                         (piVar8,uVar10,**(undefined4 **)(_UNK_0322e2f4 + 0x322e134));
      pcVar7 = (char *)(_UNK_0322e2f8 + 0x322e14c);
      if (*pcVar7 == '\0') {
        thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0322e2fc + 0x322e160));
        *pcVar7 = '\x01';
      }
      iVar2 = *piVar8;
      iVar5 = *piVar3;
      uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
      if (uVar6 != 0) {
        piVar3 = (int *)(*(int *)(iVar2 + 0x58) + 4);
        do {
          if (piVar3[-1] == iVar5) {
            puVar11 = (undefined4 *)(iVar2 + *piVar3 * 8 + 200);
            goto LAB_0322e1dc;
          }
          uVar6 = uVar6 - 1;
          piVar3 = piVar3 + 2;
        } while (uVar6 != 0);
      }
      puVar11 = (undefined4 *)thunk_FUN_00efdb38(piVar8,iVar5,1);
LAB_0322e1dc:
      (*(code *)*puVar11)(piVar8,iVar12,uVar10,(int)sVar1,puVar11[1]);
      return;
    }
  }
  pcVar7 = (char *)(_UNK_0322e2d4 + 0x322e024);
  if (*pcVar7 == '\0') {
    thunk_FUN_00ec37c0(*(undefined4 *)(_UNK_0322e2d8 + 0x322e038));
    *pcVar7 = '\x01';
  }
  if (piVar8 != (int *)0x0) {
    iVar2 = *piVar8;
    uVar6 = (uint)*(ushort *)(iVar2 + 0xb6);
    if (uVar6 != 0) {
      piVar3 = (int *)(*(int *)(iVar2 + 0x58) + 4);
      do {
        if (piVar3[-1] == **(int **)(_UNK_0322e2dc + 0x322e058)) {
          puVar11 = (undefined4 *)(iVar2 + *piVar3 * 8 + 0xd0);
          goto LAB_0322e1b8;
        }
        uVar6 = uVar6 - 1;
        piVar3 = piVar3 + 2;
      } while (uVar6 != 0);
    }
    puVar11 = (undefined4 *)thunk_FUN_00efdb38(piVar8,**(int **)(_UNK_0322e2dc + 0x322e058),2);
LAB_0322e1b8:
    (*(code *)*puVar11)(piVar8,(int)sVar1,puVar11[1]);
  }
  return;
}

