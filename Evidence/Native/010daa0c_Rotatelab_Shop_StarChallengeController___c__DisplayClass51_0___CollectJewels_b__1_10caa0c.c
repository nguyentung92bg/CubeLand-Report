/* IL2CPP: Rotatelab.Shop.StarChallengeController.<>c__DisplayClass51_0$$<CollectJewels>b__1
void Rotatelab_Shop_StarChallengeController___c__DisplayClass51_0___CollectJewels_b__1 (Rotatelab_Shop_StarChallengeController___c__DisplayClass51_0_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* IL2CPP: Rotatelab.Shop.StarChallengeController.<>c__DisplayClass51_0$$<CollectJewels>b__1
   void Rotatelab_Shop_StarChallengeController___c__DisplayClass51_0___CollectJewels_b__1
   (Rotatelab_Shop_StarChallengeController___c__DisplayClass51_0_o* __this, const MethodInfo*
   method); */

int Rotatelab_Shop_StarChallengeController___c__DisplayClass51_0___CollectJewels_b__1_10caa0c
              (int param_1)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined4 unaff_r4;
  int iVar9;
  undefined4 unaff_r5;
  char *pcVar10;
  int *piVar11;
  undefined4 unaff_r6;
  uint *puVar12;
  undefined4 unaff_r7;
  undefined4 uVar13;
  undefined4 unaff_r11;
  undefined4 unaff_lr;
  bool bVar14;
  uint in_fpscr;
  undefined4 uVar15;
  undefined8 uVar16;
  
  pcVar10 = (char *)(_UNK_010dab64 + 0x10daa24);
  if (*pcVar10 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010dab68 + 0x10daa38));
    *pcVar10 = '\x01';
  }
  uVar6 = *(uint *)(param_1 + 0x18);
  uVar7 = *(uint *)(param_1 + 0x10);
  iVar8 = *(int *)(param_1 + 0x14);
  iVar3 = *(int *)(param_1 + 8);
  iVar9 = (int)uVar6 >> 0x1f;
  if ((int)(iVar8 - (iVar9 + (uint)(uVar7 < uVar6))) < 0 ==
      (SBORROW4(iVar8,iVar9) != SBORROW4(iVar8 - iVar9,(uint)(uVar7 < uVar6)))) {
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Shop_StarChallengeController__set_CollectedStarAmount_10c70f8(iVar3,0,uVar7 - uVar6);
    piVar11 = *(int **)(_UNK_010dab6c + 0x10daab8);
    iVar9 = *piVar11;
    if (*(int *)(iVar9 + 0x74) == 0) {
      FUN_00ec3934();
      iVar9 = *piVar11;
    }
    iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0x158);
    if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_GameAction__Raise_fc08b8(iVar9,0);
    if (*(int *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    if (*(int *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Shop_StarChallengeController__PlayRewardParticles_10c9960
              (*(int *)(param_1 + 8),*(undefined4 *)(*(int *)(param_1 + 0xc) + 0xc));
    iVar9 = Rotatelab_Shop_StarChallengePopup__get_CurrentStarChallengeIndex_10c5e90();
    Rotatelab_Shop_StarChallengePopup__set_CurrentStarChallengeIndex_10c92f0(iVar9 + 1);
    Rotatelab_Shop_StarChallengeController__SpendJewels_10c93a4
              (*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x18) >> 0x1f);
    if (*(int *)(param_1 + 8) == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Shop_StarChallengeController__SetTarget_10c89b4(*(int *)(param_1 + 8));
    iVar9 = *(int *)(param_1 + 8);
    if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    pcVar10 = (char *)(_UNK_010d9870 + 0x10d95b0);
    if (*pcVar10 == '\0') {
      FUN_00ec37c0(*(undefined4 *)(_UNK_010d9874 + 0x10d95c4));
      FUN_00ec37c0(*(undefined4 *)(_UNK_010d9878 + 0x10d95d0));
      FUN_00ec37c0(*(undefined4 *)(_UNK_010d987c + 0x10d95dc));
      FUN_00ec37c0(*(undefined4 *)(_UNK_010d9880 + 0x10d95e8));
      FUN_00ec37c0(*(undefined4 *)(_UNK_010d9884 + 0x10d95f4));
      FUN_00ec37c0(*(undefined4 *)(_UNK_010d9888 + 0x10d9600));
      FUN_00ec37c0(*(undefined4 *)(_UNK_010d988c + 0x10d960c));
      FUN_00ec37c0(*(undefined4 *)(_UNK_010d9890 + 0x10d9618));
      *pcVar10 = '\x01';
    }
    iVar3 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010d9894 + 0x10d962c));
    System_Object___ctor_2bb93bc(iVar3,0);
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    *(int *)(iVar3 + 8) = iVar9;
    puVar12 = (uint *)(iVar3 + 0x10);
    thunk_FUN_00ec5080((int *)(iVar3 + 8),iVar9);
    iVar8 = Rotatelab_SingletonBehaviour_object___get_Instance_1a99858
                      (**(undefined4 **)(_UNK_010d9898 + 0x10d9668));
    if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    uVar16 = Rotatelab_ObservableLong__op_Implicit_fb4344(*(undefined4 *)(iVar8 + 0x10),0);
    iVar8 = (int)((ulonglong)uVar16 >> 0x20);
    *(undefined8 *)puVar12 = uVar16;
    bVar14 = (int)uVar16 != 0;
    if ((int)-(iVar8 + (uint)bVar14) < 0 != (SBORROW4(0,iVar8) != SBORROW4(-iVar8,(uint)bVar14))) {
      pcVar10 = (char *)(_UNK_010d989c + 0x10d96a4);
      if (*pcVar10 == '\0') {
        FUN_00ec37c0(*(undefined4 *)(_UNK_010d98a0 + 0x10d96b8));
        *pcVar10 = '\x01';
      }
      if (**(char **)(**(int **)(_UNK_010d98a4 + 0x10d96cc) + 0x5c) == '\0') {
        iVar9 = Rotatelab_Shop_StarChallengeController__get_JewelSo_10c6e5c(iVar9);
        if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar9 = *(int *)(iVar9 + 0xc);
        uVar2 = Rotatelab_Shop_StarChallengePopup__get_CurrentStarChallengeIndex_10c5e90();
        if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar9 = System_Collections_Generic_List_object___get_Item_267d814
                          (iVar9,uVar2,**(undefined4 **)(_UNK_010d98a8 + 0x10d973c));
        piVar11 = (int *)(iVar3 + 0xc);
        *piVar11 = iVar9;
        thunk_FUN_00ec5080(piVar11,iVar9);
        if (*piVar11 == 0) {
                    /* WARNING: Subroutine does not return */
          thunk_FUN_00f078d4();
        }
        iVar8 = *(int *)(*piVar11 + 8);
        iVar9 = Rotatelab_Shop_StarChallengeController__get_CollectedStarAmount_10c70a4();
        *(int *)(iVar3 + 0x18) = iVar8 - iVar9;
        uVar7 = Rotatelab_Shop_StarChallengeController__get_CollectedStarAmount_10c70a4();
        uVar6 = *puVar12;
        iVar8 = *(int *)(iVar3 + 0x14);
        uVar5 = *(uint *)(iVar3 + 0x18);
        iVar9 = (int)uVar5 >> 0x1f;
        if ((int)(iVar8 - (iVar9 + (uint)(uVar6 < uVar5))) < 0 ==
            (SBORROW4(iVar8,iVar9) != SBORROW4(iVar8 - iVar9,(uint)(uVar6 < uVar5)))) {
          uVar6 = uVar5;
          iVar8 = iVar9;
        }
        *(int *)(iVar3 + 0x20) = uVar6 + uVar7;
        *(uint *)(iVar3 + 0x24) = iVar8 + ((int)uVar7 >> 0x1f) + (uint)CARRY4(uVar6,uVar7);
        uVar2 = Rotatelab_Shop_StarChallengeController__get_CollectedStarAmount_10c70a4();
        iVar9 = *(int *)(iVar3 + 0x20);
        uVar13 = *(undefined4 *)(iVar3 + 0x24);
        uVar4 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010d98ac + 0x10d97c8));
        DG_Tweening_TweenCallback_float____ctor_1bf9864
                  (uVar4,iVar3,**(undefined4 **)(_UNK_010d98b0 + 0x10d97e4),0);
        uVar15 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
        uVar2 = FUN_00f88368(iVar9,uVar13);
        iVar9 = DG_Tweening_DOVirtual__Float_11682ec(uVar15,uVar2,0x3f800000,uVar4,0);
        uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010d98b4 + 0x10d9828));
        DG_Tweening_TweenCallback___ctor_11657e8
                  (uVar2,iVar3,**(undefined4 **)(_UNK_010d98b8 + 0x10d9844),0);
        uVar4 = **(undefined4 **)(_UNK_010d98bc + 0x10d985c);
        cVar1 = '\0';
        if (iVar9 != 0) {
          cVar1 = *(char *)(iVar9 + 0x94);
        }
        if (iVar9 != 0 && cVar1 != '\0') {
          *(undefined4 *)(iVar9 + 0x4c) = uVar2;
          thunk_FUN_00ec5080((undefined4 *)(iVar9 + 0x4c),uVar2,uVar4);
        }
        return iVar9;
      }
      Rotatelab_Shop_StarChallengeController__SpendJewels_10c93a4
                (*puVar12,*(undefined4 *)(iVar3 + 0x14));
    }
  }
  else {
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
    Rotatelab_Shop_StarChallengeController__set_CollectedStarAmount_10c70f8
              (iVar3,*(undefined4 *)(param_1 + 0x20),uVar7 - uVar6);
    Rotatelab_Shop_StarChallengeController__SpendJewels_10c93a4
              (*(uint *)(param_1 + 0x10),*(undefined4 *)(param_1 + 0x14));
    iVar9 = *(int *)(param_1 + 8);
    if (iVar9 == 0) {
                    /* WARNING: Subroutine does not return */
      thunk_FUN_00f078d4();
    }
  }
  pcVar10 = (char *)(_UNK_010d994c + 0x10d98dc);
  if (*pcVar10 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d9950 + 0x10d98f0));
    FUN_00ec37c0(*(undefined4 *)(_UNK_010d9954 + 0x10d98fc));
    *pcVar10 = '\x01';
  }
  uVar2 = thunk_FUN_00f00cdc(**(undefined4 **)(_UNK_010d9958 + 0x10d9910));
  DG_Tweening_TweenCallback___ctor_11657e8
            (uVar2,iVar9,**(undefined4 **)(_UNK_010d995c + 0x10d992c),0);
  pcVar10 = (char *)(_UNK_01178688 + 0x11785dc);
  if (*pcVar10 == '\0') {
    FUN_00ec37c0(*(undefined4 *)(_UNK_0117868c + 0x11785f0),uVar2,1,0,unaff_r4,unaff_r5,unaff_r6,
                 unaff_r7,unaff_r11,unaff_lr);
    FUN_00ec37c0(*(undefined4 *)(_UNK_01178690 + 0x11785fc));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01178694 + 0x1178608));
    FUN_00ec37c0(*(undefined4 *)(_UNK_01178698 + 0x1178614));
    *pcVar10 = '\x01';
  }
  if (*(int *)(**(int **)(_UNK_0117869c + 0x1178628) + 0x74) == 0) {
    FUN_00ec3934();
  }
  uVar4 = DG_Tweening_DOTween__Sequence_1167c00();
  uVar4 = DG_Tweening_TweenSettingsExtensions__AppendInterval_11686ac(uVar4,0x3f000000);
  uVar2 = DG_Tweening_TweenSettingsExtensions__OnStepComplete_object__15d9e90
                    (uVar4,uVar2,**(undefined4 **)(_UNK_011786a0 + 0x1178650));
  iVar9 = DG_Tweening_TweenSettingsExtensions__SetUpdate_object__15da4d0
                    (uVar2,0,1,**(undefined4 **)(_UNK_011786a4 + 0x1178668));
  uVar6 = **(uint **)(_UNK_011786a8 + 0x117867c);
  if (iVar9 != 0) {
    uVar6 = (uint)*(byte *)(iVar9 + 0x94);
  }
  if (iVar9 == 0 || uVar6 == 0) {
    return iVar9;
  }
  if (*(char *)(iVar9 + 0xa4) == '\0') {
    *(undefined1 *)(iVar9 + 0x5c) = 1;
  }
  return iVar9;
}

